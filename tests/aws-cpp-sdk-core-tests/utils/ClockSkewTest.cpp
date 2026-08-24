/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <aws/core/internal/ClockSkew.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <chrono>
#include <fstream>

// Path to the test cases, injected by CMake.
#ifndef CLOCK_SKEW_TEST_CASES_PATH
#define CLOCK_SKEW_TEST_CASES_PATH ""
#endif

using namespace Aws::Internal;
using Aws::Utils::DateTime;
using Aws::Utils::DateFormat;
using Aws::Utils::Json::JsonValue;
using Aws::Utils::Json::JsonView;

namespace
{
    ClockSkewMeasurement MeasurementFromAttempt(const JsonView& attempt)
    {
        // Route the corpus through the production MakeClockSkewMeasurement so it exercises the real parse
        // path. Headers are lowercased here as a real HttpResponse stores them.
        const JsonView jsonHeaders = attempt.GetObject("response").GetObject("headers");
        Aws::Http::HeaderValueCollection headers;
        for (const auto& header : jsonHeaders.GetAllObjects())
        {
            headers.emplace(Aws::Utils::StringUtils::ToLower(header.first.c_str()), header.second.AsString());
        }
        return MakeClockSkewMeasurement(
            headers,
            DateTime(attempt.GetString("clientTimeAtSend"), DateFormat::ISO_8601),
            DateTime(attempt.GetString("clientTimeAtReceive"), DateFormat::ISO_8601));
    }

    bool IsSuccessfulResponse(int statusCode) { return statusCode >= 200 && statusCode <= 299; }
}

class ClockSkewTest : public Aws::Testing::AwsCppSdkGTestSuite, public testing::WithParamInterface<size_t>
{
public:
    static const size_t TEST_CASE_COUNT;
};
const size_t ClockSkewTest::TEST_CASE_COUNT = 10;

TEST_P(ClockSkewTest, RunTestCase)
{
    const Aws::String path = CLOCK_SKEW_TEST_CASES_PATH;
    ASSERT_FALSE(path.empty()) << "CLOCK_SKEW_TEST_CASES_PATH was not defined at compile time";

    Aws::IFStream inputFile(path.c_str());
    ASSERT_TRUE(inputFile.good()) << "Could not open clock skew test cases at " << path;

    JsonValue doc(inputFile);
    ASSERT_TRUE(doc.WasParseSuccessful()) << "Failed to parse clock skew test cases JSON at " << path;

    const auto tests = doc.View().GetArray("tests");
    ASSERT_EQ(TEST_CASE_COUNT, tests.GetLength());

    const size_t testIdx = GetParam();
    const JsonView testCase = tests[testIdx];
    SCOPED_TRACE(Aws::String("TEST CASE # ") + Aws::Utils::StringUtils::to_string(testIdx) + ": " + testCase.GetString("description"));

    const auto operations = testCase.GetArray("operations");
    ASSERT_GT(operations.GetLength(), 0u);

    // One ClientSkew shared across the test's operations, so the multi-operation cases prove persistence.
    ClientSkew clientSkew(std::chrono::milliseconds{static_cast<int64_t>(operations[0].GetInteger("initialClientSkew")) * 1000});

    for (size_t o = 0; o < operations.GetLength(); ++o)
    {
        const JsonView operation = operations[o];

        // The value persisted from the prior operation must match this operation's initialClientSkew.
        const std::chrono::milliseconds initialSkew{static_cast<int64_t>(operation.GetInteger("initialClientSkew")) * 1000};
        EXPECT_EQ(initialSkew.count(), clientSkew.Load().count()) << "ClientSkew not persisted into operation " << o;

        // AttemptSkew is the per-operation copy seeded from ClientSkew, updated after each attempt.
        std::chrono::milliseconds attemptSkew = clientSkew.Load();

        const auto attempts = operation.GetArray("attempts");
        // maxAttempts (when present) caps the retry budget; absent means the budget did not run out.
        const bool budgetLimited = operation.KeyExists("maxAttempts") &&
            static_cast<size_t>(operation.GetInteger("maxAttempts")) <= attempts.GetLength();

        bool operationSucceeded = false;
        for (size_t a = 0; a < attempts.GetLength(); ++a)
        {
            const JsonView attempt = attempts[a];

            const DateTime signingTime = DateTime(attempt.GetString("clientTimeAtSend"), DateFormat::ISO_8601) + attemptSkew;
            const DateTime expectedSigningTime = DateTime(attempt.GetString("expectedSigningTime"), DateFormat::ISO_8601);
            EXPECT_EQ(expectedSigningTime.Millis(), signingTime.Millis())
                << "signing time mismatch on attempt " << a << " of operation " << o;

            const ClockSkewMeasurement measurement = MeasurementFromAttempt(attempt);
            const int statusCode = attempt.GetObject("response").GetInteger("statusCode");
            if (IsSuccessfulResponse(statusCode))
            {
                clientSkew.RecordResponse(measurement);
                operationSucceeded = true;
            }
            else
            {
                const ClockSkewAdjustment adjustment = clientSkew.EvaluateFailure(measurement, attemptSkew);
                // Map the wire error code to a CoreErrors enum the way the real error marshaller does.
                const Aws::Client::AWSError<Aws::Client::CoreErrors> error =
                    Aws::Client::CoreErrorsMapper::GetErrorForName(attempt.GetObject("response").GetString("errorCode").c_str());
                const bool retriedForSkew = IsClockSkewError(error) && adjustment.skewExceedsThreshold;

                if (a + 1 < attempts.GetLength())
                {
                    // A further attempt exists, so the SDK must have decided to retry this skew error.
                    EXPECT_TRUE(retriedForSkew) << "expected a clock-skew retry after attempt " << a << " of operation " << o;
                }
                else if (!budgetLimited)
                {
                    // Final attempt with budget remaining, so the SDK must have declined to retry.
                    EXPECT_FALSE(retriedForSkew) << "expected no clock-skew retry after final attempt of operation " << o;
                }
            }
            attemptSkew = clientSkew.Load();
        }

        const Aws::String expectedOutcome = operation.GetString("expectedOutcome");
        EXPECT_EQ(expectedOutcome, operationSucceeded ? Aws::String("success") : Aws::String("error"))
            << "outcome mismatch on operation " << o;

        const std::chrono::milliseconds expectedClientSkew{static_cast<int64_t>(operation.GetInteger("expectedClientSkew")) * 1000};
        EXPECT_EQ(expectedClientSkew.count(), clientSkew.Load().count())
            << "ClientSkew mismatch after operation " << o;
    }
}

INSTANTIATE_TEST_SUITE_P(ClockSkew, ClockSkewTest, ::testing::Range((size_t) 0u, ClockSkewTest::TEST_CASE_COUNT));
