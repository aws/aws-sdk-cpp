/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Runs the vendored credential-refresh test cases (resources/credential-refresh-tests.json) through the
// refresh state machine, plus a base-class test driving the same lifecycle through AWSCredentialsProvider.

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/internal/CredentialRefresh.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/DateTime.h>
#include <chrono>
#include <fstream>
#include <memory>
#include <sstream>

using namespace Aws::Internal;
using Aws::Utils::DateTime;
using Aws::Utils::Json::JsonValue;
using Aws::Utils::Json::JsonView;
using Aws::Auth::AWSCredentials;
using Aws::Auth::AWSCredentialsProvider;
using Aws::Auth::RefreshResult;

namespace
{
    struct Creds { Aws::String akid; };
    using Result = RefreshResult<Creds>;
    using Cache = CredentialRefreshState<Creds>;

    // Fixed jitter so the pinned durations are exact: backoff = 420 s, non-recoverable cache = 2.6 s.
    const double JITTER = 0.4;

    Aws::String ReadFileContents(const char* path)
    {
        std::ifstream stream(path);
        std::stringstream buffer;
        buffer << stream.rdbuf();
        return Aws::String(buffer.str().c_str());
    }
}

class CredentialRefreshTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(CredentialRefreshTest, RunsSepTestCases)
{
    const Aws::String contents = ReadFileContents(CREDENTIAL_REFRESH_TEST_CASES_PATH);
    JsonValue document(contents);
    ASSERT_TRUE(document.WasParseSuccessful()) << "failed to parse " << CREDENTIAL_REFRESH_TEST_CASES_PATH;
    const auto cases = document.View().AsArray();
    ASSERT_GT(cases.GetLength(), 0u);

    for (size_t i = 0; i < cases.GetLength(); ++i)
    {
        const JsonView testCase = cases.GetItem(i);
        SCOPED_TRACE(testCase.GetString("documentation").c_str());
        const JsonView given = testCase.GetObject("given");
        // No configurable refresh window in C++; log + continue (a per-case GTEST_SKIP would abort the loop).
        if (given.KeyExists("configuredAdvisoryWindowSeconds"))
        {
            GTEST_LOG_(INFO) << "Skipping corpus case (no configurable refresh window): " << testCase.GetString("documentation");
            continue;
        }
        const Aws::String initialState = given.GetString("cachedCredentials");
        const Aws::String seedAkid = given.KeyExists("accessKeyId") ? given.GetString("accessKeyId")
                                                                    : Aws::String("AKID-seed");

        auto now = std::make_shared<DateTime>(DateTime::Now());
        auto next = std::make_shared<Result>();
        Cache cache([next]() { return *next; },
                    [now]() { return *now; },
                    []() { return JITTER; });

        // Seed the initial cache state with a 60-minute credential (15-minute advisory window), then
        // advance the clock so the credentials land in the requested window.
        if (initialState != "none")
        {
            *next = Result::Fresh(Creds{seedAkid}, *now + std::chrono::minutes(60));
            cache.GetCredentials();
            if (initialState == "advisory") { *now = *now + std::chrono::minutes(50); }
            else if (initialState == "mandatory") { *now = *now + std::chrono::minutes(59) + std::chrono::seconds(30); }
            else if (initialState == "expired") { *now = *now + std::chrono::minutes(61); }
            // "valid": leave the clock at the fetch time.
        }

        const auto steps = testCase.GetArray("steps");
        for (size_t s = 0; s < steps.GetLength(); ++s)
        {
            const JsonView step = steps.GetItem(s);
            const Aws::String type = step.GetString("type");

            if (type == "advanceTime")
            {
                *now = *now + std::chrono::seconds(step.GetInteger("seconds"));
                continue;
            }
            if (type == "invalidate")
            {
                cache.Invalidate(); // argument-less
                continue;
            }

            // getCredentials: program what the source returns on this call (if it is contacted).
            if (step.KeyExists("response"))
            {
                const Aws::String response = step.GetString("response");
                Result programmed;
                if (response == "freshCredentials")
                {
                    const int lifetimeSeconds = step.KeyExists("lifetimeSeconds") ? step.GetInteger("lifetimeSeconds") : 3600;
                    programmed = Result::Fresh(Creds{"FRESH"}, *now + std::chrono::seconds(lifetimeSeconds));
                }
                else if (response == "staleCredentials")
                {
                    programmed = Result::Fresh(Creds{"STALE"}, *now + std::chrono::seconds(-1)); // Expiration at/before now
                }
                else if (response == "error")
                {
                    programmed = Result::Recoverable("recoverable");
                }
                else if (response == "nonRecoverableError")
                {
                    programmed = Result::NonRecoverable("non-recoverable");
                }
                *next = programmed;
            }

            Cache::ResolveObservation observation;
            const auto outcome = cache.GetCredentials(&observation);

            const JsonView expected = step.GetObject("expected");
            Aws::String actualResult;
            if (outcome.IsSuccess())
            {
                actualResult = observation.returnedNewCredentials ? "newCredentials" : "cachedCredentials";
            }
            else
            {
                actualResult = observation.nonRecoverable ? "nonRecoverableError" : "noCredentialsError";
            }

            EXPECT_EQ(expected.GetString("result"), actualResult) << "step " << s;
            EXPECT_EQ(expected.GetBool("sourceContacted"), observation.sourceContacted) << "step " << s;
            if (expected.KeyExists("rateLimited"))
            {
                EXPECT_EQ(expected.GetBool("rateLimited"), observation.rateLimited) << "step " << s;
            }
            if (expected.KeyExists("advisoryWindowSeconds"))
            {
                EXPECT_EQ(static_cast<long long>(expected.GetInteger("advisoryWindowSeconds")),
                          static_cast<long long>(observation.advisoryWindow.count() / 1000)) << "step " << s;
            }
        }
    }
}

namespace
{
    // Test AWSCredentialsProvider that drives the base-class refresh lifecycle with a scripted source,
    // injected clock, and fixed jitter.
    class ScriptedRefreshProvider : public AWSCredentialsProvider
    {
    public:
        explicit ScriptedRefreshProvider(std::shared_ptr<DateTime> clock)
            : m_now(std::move(clock))
        {
        }

        AWSCredentials GetAWSCredentials() override { return ResolveCredentialsWithLifecycle(); }

        void SetNext(RefreshResult<AWSCredentials> next) { m_next = std::move(next); }
        int FetchCount() const { return m_fetchCount; }

    protected:
        RefreshResult<AWSCredentials> FetchCredentialsFromSource() override
        {
            ++m_fetchCount;
            return m_next;
        }
        DateTime CurrentTime() const override { return *m_now; }

    private:
        std::shared_ptr<DateTime> m_now;
        RefreshResult<AWSCredentials> m_next{RefreshResult<AWSCredentials>::Recoverable("unscripted")};
        int m_fetchCount{0};
    };

    RefreshResult<AWSCredentials> FreshCreds(const Aws::String& akid, const DateTime& expiration)
    {
        return RefreshResult<AWSCredentials>::Fresh(AWSCredentials(akid, "secret"), expiration);
    }
}

TEST_F(CredentialRefreshTest, RunsLifecycleAndInvalidate)
{
    auto now = std::make_shared<DateTime>(DateTime::Now());
    ScriptedRefreshProvider provider(now);

    // Initial fetch: 60-minute credentials.
    provider.SetNext(FreshCreds("AKID-1", *now + std::chrono::minutes(60)));
    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, provider.FetchCount());

    // Still valid: no re-fetch.
    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, provider.FetchCount());

    // Advance into the advisory window (50 min in; 15-min window for a 60-min lifetime): refresh succeeds.
    *now = *now + std::chrono::minutes(50);
    provider.SetNext(FreshCreds("AKID-2", *now + std::chrono::minutes(60)));
    EXPECT_EQ("AKID-2", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(2, provider.FetchCount());

    // Argument-less Invalidate routes the next call through the mandatory path, forcing a re-fetch.
    provider.SetNext(FreshCreds("AKID-3", *now + std::chrono::minutes(60)));
    provider.Invalidate();
    EXPECT_EQ("AKID-3", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(3, provider.FetchCount());
}

// Serve-last-good and the strict caching-only variant are exercised by RunsSepTestCases.
