/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Runs the vendored credentials-refresh test cases (resources/credentials-refresh-tests.json) through the
// refresh state machine.

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/internal/CredentialsCaching.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <chrono>
#include <fstream>
#include <memory>
#include <sstream>

using namespace Aws::Internal;
using Aws::Utils::DateTime;
using Aws::Utils::Json::JsonValue;
using Aws::Utils::Json::JsonView;
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

    // SepAdvisoryWindow is the SEP's advisory window for a credential lifetime.
    std::chrono::seconds SepAdvisoryWindow(std::chrono::seconds lifetime)
    {
        if (lifetime <= std::chrono::minutes(20)) { return std::chrono::minutes(5); }
        if (lifetime < std::chrono::minutes(90)) { return std::chrono::minutes(15); }
        return std::chrono::minutes(60);
    }

    // IssuedCredentials is what the test's source handed out, so the test can tell when they are due for refresh.
    struct IssuedCredentials
    {
        DateTime expiration;
        std::chrono::seconds lifetime;
    };

    // ExpectAdvisoryWindow checks that credentials with this lifetime start refreshing exactly windowSeconds before expiry.
    void ExpectAdvisoryWindow(int lifetimeSeconds, int windowSeconds)
    {
        auto now = std::make_shared<DateTime>(DateTime::Now());
        auto next = std::make_shared<Result>(Result::Success(Creds{"PROBE"}, *now + std::chrono::seconds(lifetimeSeconds)));
        auto calls = std::make_shared<int>(0);
        Cache cache([next, calls]() { ++*calls; return *next; },
                    [](const Creds& credentials) { return credentials.akid; },
                    true,
                    [now]() { return *now; },
                    []() { return JITTER; });
        cache.GetCredentials();
        *next = Result::Success(Creds{"PROBE-2"}, *now + std::chrono::seconds(lifetimeSeconds * 2));

        *now = *now + std::chrono::seconds(lifetimeSeconds - windowSeconds - 1);
        cache.GetCredentials();
        EXPECT_EQ(1, *calls) << "refreshed before the " << windowSeconds << "s advisory window";

        *now = *now + std::chrono::seconds(1);
        cache.GetCredentials();
        EXPECT_EQ(2, *calls) << "did not refresh at the start of the " << windowSeconds << "s advisory window";
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
        auto calls = std::make_shared<int>(0);
        auto handedOut = std::make_shared<Aws::String>();
        Cache cache([next, calls, handedOut]()
                    {
                        ++*calls;
                        if (next->status == Result::Status::Success) { *handedOut = next->credentials.akid; }
                        return *next;
                    },
                    [](const Creds& credentials) { return credentials.akid; },
                    true,
                    [now]() { return *now; },
                    []() { return JITTER; });

        Aws::Map<Aws::String, IssuedCredentials> issued;
        Aws::String cachedAkid = seedAkid;
        int freshCount = 0;

        // Seed the initial cache state with a 60-minute credential (15-minute advisory window), then
        // advance the clock so the credentials land in the requested window.
        if (initialState != "none")
        {
            *next = Result::Success(Creds{seedAkid}, *now + std::chrono::minutes(60));
            issued[seedAkid] = IssuedCredentials{*now + std::chrono::minutes(60), std::chrono::minutes(60)};
            cache.GetCredentials();
            if (initialState == "advisory") { *now = *now + std::chrono::minutes(50); }
            else if (initialState == "mandatory") { *now = *now + std::chrono::minutes(59) + std::chrono::seconds(30); }
            else if (initialState == "expired") { *now = *now + std::chrono::minutes(61); }
            // "valid": leave the clock at the retrieve time.
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
                const Aws::String rejectedAkid = step.GetString("rejectedAccessKeyId");
                cache.Invalidate(rejectedAkid);
                if (rejectedAkid == cachedAkid && issued.count(cachedAkid)) { issued[cachedAkid].expiration = *now; }
                continue;
            }

            // getCredentials: program what the source returns on this call (if it is contacted).
            if (step.KeyExists("response"))
            {
                const Aws::String response = step.GetString("response");
                if (response == "freshCredentials")
                {
                    const int lifetimeSeconds = step.KeyExists("lifetimeSeconds") ? step.GetInteger("lifetimeSeconds") : 3600;
                    const Aws::String akid = "NEW-" + Aws::Utils::StringUtils::to_string(++freshCount);
                    *next = Result::Success(Creds{akid}, *now + std::chrono::seconds(lifetimeSeconds));
                    issued[akid] = IssuedCredentials{*now + std::chrono::seconds(lifetimeSeconds), std::chrono::seconds(lifetimeSeconds)};
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

            const int callsBefore = *calls;
            handedOut->clear();
            const auto outcome = cache.GetCredentials();
            const bool sourceContacted = *calls > callsBefore;

            const JsonView expected = step.GetObject("expected");
            Aws::String actualResult;
            bool rateLimited = false;
            if (outcome.IsSuccess())
            {
                const Aws::String& akid = outcome.GetResult().akid;
                actualResult = sourceContacted && akid == *handedOut ? "newCredentials" : "cachedCredentials";
                if (!sourceContacted && issued.count(akid))
                {
                    const IssuedCredentials& creds = issued[akid];
                    rateLimited = now->Millis() >= creds.expiration.Millis() -
                        std::chrono::duration_cast<std::chrono::milliseconds>(SepAdvisoryWindow(creds.lifetime)).count();
                }
                cachedAkid = akid;
            }
            else
            {
                actualResult = outcome.GetError() == "non-recoverable" ? "nonRecoverableError" : "noCredentialsError";
            }

            EXPECT_EQ(expected.GetString("result"), actualResult) << "step " << s;
            EXPECT_EQ(expected.GetBool("sourceContacted"), sourceContacted) << "step " << s;
            if (expected.KeyExists("rateLimited"))
            {
                EXPECT_EQ(expected.GetBool("rateLimited"), rateLimited) << "step " << s;
            }
            if (expected.KeyExists("advisoryWindowSeconds") && step.KeyExists("lifetimeSeconds"))
            {
                ExpectAdvisoryWindow(step.GetInteger("lifetimeSeconds"), expected.GetInteger("advisoryWindowSeconds"));
            }
        }
    }
}
