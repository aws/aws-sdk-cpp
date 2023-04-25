/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/MemoryTesting.h>

#if defined(HAS_UMASK)
#include <sys/stat.h>
#endif

Aws::SDKOptions options;

#ifdef USE_AWS_MEMORY_MANAGEMENT
class TestMemoryManager : public Aws::Utils::Memory::MemorySystemInterface
{
public:
    void *AllocateMemory(std::size_t blockSize, std::size_t alignment,
                         const char *allocationTag) override
    {
        (void)alignment;
        (void)allocationTag;
        return malloc(blockSize);
    }

    void FreeMemory(void* memoryPtr) override
    {
        free(memoryPtr);
    }

    void Begin() override
    {
    }

    void End() override
    {
    }
};
#endif // USE_AWS_MEMORY_MANAGEMENT

int main(int argc, char** argv)
{
#if defined(HAS_UMASK)
    // In order to fix github issue at https://github.com/aws/aws-sdk-cpp/issues/232
    // Created dir by this process will be set with mode 0777, so that multiple users can build on the same machine
    umask(0);
#endif

    Aws::Testing::RedirectHomeToTempIfAppropriate();

    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    options.httpOptions.installSigPipeHandler = true;
#ifdef USE_AWS_MEMORY_MANAGEMENT
    TestMemoryManager tmm;
    options.memoryManagementOptions.memoryManager = &tmm;
#endif // USE_AWS_MEMORY_MANAGEMENT

    AWS_BEGIN_MEMORY_TEST_EX(options, 1024, 128);

    Aws::Testing::InitPlatformTest(options);
    Aws::InitAPI(options);
    // Disable EC2 metadata in client configuration to avoid requests retrieving EC2 metadata in unit tests.
    Aws::Testing::SaveEnvironmentVariable("AWS_EC2_METADATA_DISABLED");
    Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", "true", 1/*override*/);
    ::testing::InitGoogleTest(&argc, argv);
    int retVal = RUN_ALL_TESTS();
    Aws::Testing::RestoreEnvironmentVariables();
    Aws::ShutdownAPI(options);
    AWS_END_MEMORY_TEST_EX;

    Aws::Testing::ShutdownPlatformTest(options);

    return retVal;
}

TEST(InitShutdown, Repeatable)
{
    for (unsigned ii = 0; ii < 5; ++ii)
    {
        // queue up some work for the logger, enough for it to be live until shutdown
        for (unsigned jj = 0; jj < 10000; ++jj) {
            AWS_LOG_WARN("InitShutdown.Repeatable", "test warn level");
        }

        Aws::ShutdownAPI(options);
        Aws::InitAPI(options);
    }
}
