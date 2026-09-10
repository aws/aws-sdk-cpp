/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/MemoryTesting.h>
#include <chrono>
#include <cstdlib>
#include <future>
#include <iostream>
#include <thread>

int main(int argc, char** argv)
{
    Aws::Testing::SetDefaultSigPipeHandler();
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    AWS_BEGIN_MEMORY_TEST_EX(options, 1024, 128);

    Aws::Testing::InitPlatformTest(options);
    Aws::Testing::ParseArgs(argc, argv);

    Aws::InitAPI(options);
    ::testing::InitGoogleTest(&argc, argv);
    int exitCode = RUN_ALL_TESTS();

    {
        static constexpr auto SHUTDOWN_TIMEOUT = std::chrono::seconds(60);
        auto shutdownFuture = std::async(std::launch::async, [&options]() { Aws::ShutdownAPI(options); });
        if (shutdownFuture.wait_for(SHUTDOWN_TIMEOUT) != std::future_status::ready)
        {
            std::cerr << "FATAL: Aws::ShutdownAPI() did not complete within "
                      << std::chrono::duration_cast<std::chrono::seconds>(SHUTDOWN_TIMEOUT).count()
                      << "s after bidirectional streaming; shutdown is hung (issue #3911)." << std::endl;
            std::abort();
        }
        shutdownFuture.get();
    }
    AWS_END_MEMORY_TEST_EX;
    Aws::Testing::ShutdownPlatformTest(options);
    return exitCode;
}
