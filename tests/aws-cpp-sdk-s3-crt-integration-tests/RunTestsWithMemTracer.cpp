/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/MemoryTesting.h>

int main(int argc, char** argv) {
    Aws::Testing::SetDefaultSigPipeHandler();
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    CRTMemTracerMemorySystem memorySystem{};
    options.memoryManagementOptions.memoryManager = &memorySystem;
    Aws::Testing::InitPlatformTest(options);
    Aws::Testing::ParseArgs(argc, argv);

    Aws::InitAPI(options);
    ::testing::InitGoogleTest(&argc, argv);
    int exitCode = RUN_ALL_TESTS();

    Aws::ShutdownAPI(options);
    memorySystem.AssertNoLeaks();
    Aws::Testing::ShutdownPlatformTest(options);
    return exitCode;
}
