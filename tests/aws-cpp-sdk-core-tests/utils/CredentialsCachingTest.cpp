/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Runs the vendored credentials-refresh test cases (resources/credentials-refresh-tests.json) through the
// refresh state machine, plus a test driving the same lifecycle through CredentialsCachingProvider.

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/internal/CredentialsCaching.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/CredentialsCachingProvider.h>
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
using Aws::Internal::RefreshResult;

namespace
{
    struct Creds { Aws::String akid; };
    using Result = RefreshResult<Creds>;
    using Cache = CredentialsCachingState<Creds>;

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

class CredentialsCachingTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(CredentialsCachingTest, RunsSepTestCases)
{
    const Aws::String contents = ReadFileContents(CREDENTIALS_REFRESH_TEST_CASES_PATH);
    JsonValue document(contents);
    ASSERT_TRUE(document.WasParseSuccessful()) << "failed to parse " << CREDENTIALS_REFRESH_TEST_CASES_PATH;
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
        const auto allSteps = testCase.GetArray("steps");
        const Aws::String initialState = given.GetString("cachedCredentials");
        const Aws::String seedAkid = given.KeyExists("accessKeyId") ? given.GetString("accessKeyId")
                                                                    : Aws::String("AKID-seed");

        auto now = std::make_shared<DateTime>(DateTime::Now());
        auto next = std::make_shared<Result>(Result::Recoverable("unscripted"));
        Cache cache([next]() { return *next; },
                    [](const Creds& credentials) { return credentials.akid; },
                    [now]() { return *now; },
                    []() { return JITTER; });

        Aws::String cachedAkid = seedAkid;

        // Seed the initial cache state with a 60-minute credential (15-minute advisory window), then
        // advance the clock so the credentials land in the requested window.
        if (initialState != "none")
        {
            *next = Result::Success(Creds{seedAkid}, *now + std::chrono::minutes(60));
            cache.GetCredentials();
            if (initialState == "advisory") { *now = *now + std::chrono::minutes(50); }
            else if (initialState == "mandatory") { *now = *now + std::chrono::minutes(59) + std::chrono::seconds(30); }
            else if (initialState == "expired") { *now = *now + std::chrono::minutes(61); }
            // "valid": leave the clock at the fetch time.
        }

        for (size_t s = 0; s < allSteps.GetLength(); ++s)
        {
            const JsonView step = allSteps.GetItem(s);
            const Aws::String type = step.GetString("type");

            if (type == "advanceTime")
            {
                *now = *now + std::chrono::seconds(step.GetInteger("seconds"));
                continue;
            }
            if (type == "invalidate")
            {
                cache.Invalidate(cachedAkid);
                continue;
            }

            // getCredentials: program what the source returns on this call (if it is contacted).
            if (step.KeyExists("response"))
            {
                const Aws::String response = step.GetString("response");
                if (response == "freshCredentials")
                {
                    const int lifetimeSeconds = step.KeyExists("lifetimeSeconds") ? step.GetInteger("lifetimeSeconds") : 3600;
                    *next = Result::Success(Creds{"NEW"}, *now + std::chrono::seconds(lifetimeSeconds));
                }
                else if (response == "staleCredentials")
                {
                    *next = Result::Success(Creds{"STALE"}, *now + std::chrono::seconds(-1)); // Expiration at/before now
                }
                else if (response == "error")
                {
                    *next = Result::Recoverable("recoverable");
                }
                else if (response == "nonRecoverableError")
                {
                    *next = Result::NonRecoverable("non-recoverable");
                }
            }

            Cache::ResolveObservation observation;
            const auto outcome = cache.GetCredentials(&observation);

            const JsonView expected = step.GetObject("expected");
            Aws::String actualResult;
            if (outcome.IsSuccess())
            {
                actualResult = observation.returnedNewCredentials ? "newCredentials" : "cachedCredentials";
                cachedAkid = outcome.GetResult().akid;
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
    // Scripted provider the decorator wraps; GetAWSCredentials returns whatever was programmed (empty
    // models a failed fetch, which the decorator classifies as Recoverable).
    class ScriptedProvider : public Aws::Auth::AWSCredentialsProvider
    {
    public:
        void SetNext(AWSCredentials next) { m_next = std::move(next); }
        int FetchCount() const { return m_fetchCount; }

        AWSCredentials GetAWSCredentials() override
        {
            ++m_fetchCount;
            return m_next;
        }

    private:
        AWSCredentials m_next; // empty by default -> Recoverable
        int m_fetchCount{0};
    };

    AWSCredentials CredsExpiringIn(const Aws::String& akid, std::chrono::minutes lifetime)
    {
        AWSCredentials credentials(akid, "secret");
        credentials.SetExpiration(DateTime::Now() + lifetime);
        return credentials;
    }
}

// Credentials well outside the advisory window are served from the cache without re-contacting the source.
TEST_F(CredentialsCachingTest, ServesCachedCredentialsWhileValid)
{
    auto source = Aws::MakeShared<ScriptedProvider>("CredentialsCachingTest");
    source->SetNext(CredsExpiringIn("AKID-1", std::chrono::minutes(60)));
    Aws::Auth::CredentialsCachingProvider provider(source);

    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, source->FetchCount());

    source->SetNext(CredsExpiringIn("AKID-2", std::chrono::minutes(60)));
    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, source->FetchCount());
}

// A two-minute lifetime is already inside the five-minute advisory window for short-lived credentials, so
// the next call refreshes rather than serving the cache.
TEST_F(CredentialsCachingTest, RefreshesInsideTheAdvisoryWindow)
{
    auto source = Aws::MakeShared<ScriptedProvider>("CredentialsCachingTest");
    source->SetNext(CredsExpiringIn("AKID-1", std::chrono::minutes(2)));
    Aws::Auth::CredentialsCachingProvider provider(source);

    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, source->FetchCount());

    source->SetNext(CredsExpiringIn("AKID-2", std::chrono::minutes(2)));
    EXPECT_EQ("AKID-2", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(2, source->FetchCount());
}

// Invalidate routes the next call through the mandatory path even though the credentials are still valid.
TEST_F(CredentialsCachingTest, InvalidateForcesARefresh)
{
    auto source = Aws::MakeShared<ScriptedProvider>("CredentialsCachingTest");
    source->SetNext(CredsExpiringIn("AKID-1", std::chrono::minutes(60)));
    Aws::Auth::CredentialsCachingProvider provider(source);

    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, source->FetchCount());

    source->SetNext(CredsExpiringIn("AKID-2", std::chrono::minutes(60)));
    provider.Invalidate("AKID-1");
    EXPECT_EQ("AKID-2", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(2, source->FetchCount());
}

// A late rejection naming credentials the cache already replaced must not refresh the current ones.
TEST_F(CredentialsCachingTest, InvalidateWithAStaleAccessKeyIdIsIgnored)
{
    auto source = Aws::MakeShared<ScriptedProvider>("CredentialsCachingTest");
    source->SetNext(CredsExpiringIn("AKID-1", std::chrono::minutes(60)));
    Aws::Auth::CredentialsCachingProvider provider(source);

    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, source->FetchCount());

    provider.Invalidate("AKID-0");

    source->SetNext(CredsExpiringIn("AKID-2", std::chrono::minutes(60)));
    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(1, source->FetchCount());
}

// A failed fetch keeps serving the last good credentials instead of dropping to empty.
TEST_F(CredentialsCachingTest, ServesLastGoodWhenTheSourceFails)
{
    auto source = Aws::MakeShared<ScriptedProvider>("CredentialsCachingTest");
    source->SetNext(CredsExpiringIn("AKID-1", std::chrono::minutes(2)));
    Aws::Auth::CredentialsCachingProvider provider(source);

    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());

    source->SetNext(AWSCredentials()); // empty == the source failed
    EXPECT_EQ("AKID-1", provider.GetAWSCredentials().GetAWSAccessKeyId());
    EXPECT_EQ(2, source->FetchCount());
}

// Serve-last-good and the strict caching-only variant are exercised by RunsSepTestCases.
