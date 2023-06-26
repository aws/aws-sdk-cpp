/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>

#include <aws/core/Aws.h>
#include <aws/core/utils/logging/LogMacros.h>

class AwsMemoryManagementTest : public ::testing::Test
{
};

TEST(AwsMemoryManagementTest, InitShutdownRepeatable)
{
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    options.httpOptions.installSigPipeHandler = true;

    const uint32_t BUCKET_COUNT = 1024;
    const uint32_t TRACKER_PER_BLOCK = 128;
    ExactTestMemorySystem memorySystem(BUCKET_COUNT, TRACKER_PER_BLOCK); \
    options.memoryManagementOptions.memoryManager = &memorySystem;

    for (size_t ii = 0; ii < 10; ++ii)
    {
        Aws::InitAPI(options);
        // queue up some work for the logger, enough for it to be live until shutdown
        for (unsigned jj = 0; jj < 10000; ++jj) {
            AWS_LOG_WARN("InitShutdown.Repeatable", "test warn level");
        }
        Aws::ShutdownAPI(options);
    }

    ASSERT_EQ(memorySystem.GetCurrentOutstandingAllocations(), 0ULL);
    ASSERT_EQ(memorySystem.GetCurrentBytesAllocated(), 0ULL);
    ASSERT_TRUE(memorySystem.IsClean());
}

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

TEST(AwsMemoryManagementTest, InitShutdownTestMemManagerRepeatable)
{
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    options.httpOptions.installSigPipeHandler = true;

    TestMemoryManager tmm;
    options.memoryManagementOptions.memoryManager = &tmm;

    for (size_t ii = 0; ii < 10; ++ii)
    {
        Aws::InitAPI(options);
        // queue up some work for the logger, enough for it to be live until shutdown
        for (unsigned jj = 0; jj < 10000; ++jj) {
            AWS_LOG_WARN("InitShutdown.Repeatable", "test warn level");
        }
        Aws::ShutdownAPI(options);
    }
}
#endif // USE_AWS_MEMORY_MANAGEMENT