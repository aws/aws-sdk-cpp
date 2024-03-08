/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <gtest/gtest.h>

#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/MemoryTesting.h>

#include <aws/core/Aws.h>

#if defined(_WIN32)
// disable "warning C4702: unreachable code" from GTEST_SKIP on newer MSVS
#pragma warning(disable: 4702)
#endif

namespace Aws
{
    namespace Testing
    {
        /**
         * AWS-CPP-SDK wrapper around `::testing::Test` of gtest to perform InitAPI { <-> } ShutdownAPI per each test suite.
         */
        class AWS_TESTING_API AwsCppSdkGTestSuite : public ::testing::Test
        {
        public:
            const Aws::SDKOptions& GetSdkOptions()
            {
                return s_sdkOptions;
            }

        protected:
            static void SetUpTestSuite()
            {
                s_sdkOptions.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
                s_sdkOptions.httpOptions.installSigPipeHandler = true;

                const uint32_t BUCKET_COUNT = 1024;
                const uint32_t TRACKER_PER_BLOCK = 128;
                s_testMemorySystem.reset(new ExactTestMemorySystem(BUCKET_COUNT, TRACKER_PER_BLOCK));
                ASSERT_TRUE(s_testMemorySystem.get());

                s_sdkOptions.memoryManagementOptions.memoryManager = s_testMemorySystem.get();

                Aws::Testing::InitPlatformTest(s_sdkOptions);

                Aws::InitAPI(s_sdkOptions);
            }

            // Per-test-suite tear-down.
            // Called after the last test in this test suite.
            // Can be omitted if not needed.
            static void TearDownTestSuite()
            {
                Aws::ShutdownAPI(s_sdkOptions);

                ASSERT_TRUE(s_testMemorySystem.get());

                ASSERT_EQ(s_testMemorySystem->GetCurrentOutstandingAllocations(), 0ULL);
                ASSERT_EQ(s_testMemorySystem->GetCurrentBytesAllocated(), 0ULL);
                ASSERT_TRUE(s_testMemorySystem->IsClean());
            }

        private:
            static Aws::SDKOptions s_sdkOptions;
            // using std:: container explicitly as we are testing the SDK outside SDK scope and outside SDK memory system
            static std::unique_ptr<ExactTestMemorySystem> s_testMemorySystem;
        };
    } // namespace Testing
} // namespace Aws
