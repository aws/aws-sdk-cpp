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

TEST(AwsMemoryManagementTest, MultiInit)
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
        for (unsigned jj = 0; jj < 10; ++jj) {
            AWS_LOG_WARN("AwsMemoryManagementTest", "MultiInit test warn level");
            AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "AwsMemoryManagementTest::%s test log", "MultiInit");
        }

        Aws::InitAPI(options);
        for (unsigned jj = 0; jj < 10; ++jj) {
            AWS_LOG_WARN("AwsMemoryManagementTest", "MultiInit test warn level");
            AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "AwsMemoryManagementTest::%s test log", "MultiInit");
        }

        Aws::ShutdownAPI(options);
        for (unsigned jj = 0; jj < 10; ++jj) {
            AWS_LOG_WARN("AwsMemoryManagementTest", "MultiInit after first shutdown test warn level");
            AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "AwsMemoryManagementTest::%s after first shutdown test log", "MultiInit");
        }
        Aws::ShutdownAPI(options);
    }

    ASSERT_EQ(memorySystem.GetCurrentOutstandingAllocations(), 0ULL);
    ASSERT_EQ(memorySystem.GetCurrentBytesAllocated(), 0ULL);
    ASSERT_TRUE(memorySystem.IsClean());
}

TEST(AwsMemoryManagementTest, MultiInitParallel)
{
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    options.httpOptions.installSigPipeHandler = true;

    const uint32_t BUCKET_COUNT = 1024;
    const uint32_t TRACKER_PER_BLOCK = 128;
    ExactTestMemorySystem memorySystem(BUCKET_COUNT, TRACKER_PER_BLOCK); \
    options.memoryManagementOptions.memoryManager = &memorySystem;

    std::atomic<bool> isRunning;
    isRunning.store(false);
    auto InitShutdown = [&]()
    {
        while(isRunning)
        {
            Aws::ShutdownAPI(options);
            Aws::InitAPI(options);
            size_t sleepMs = 0 + std::rand() % ( 200 - 0 ); // random from 0 to 200
            std::this_thread::sleep_for(std::chrono::milliseconds(sleepMs));
            Aws::InitAPI(options);
            AWS_LOG_FLUSH();

            Aws::ShutdownAPI(options);
            Aws::ShutdownAPI(options);
        }
        return true;
    };

    auto threadLogger = [&]()
    {
      while(isRunning)
      {
        AWS_LOG_WARN("AwsMemoryManagementTest", "MultiInitParallel test logging in thread");
        AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "AwsMemoryManagementTest::%s CRT logging in thread", "MultiInitParallel");
        AWS_LOG_FLUSH();
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
      }
      return true;
    };

    for (size_t ii = 0; ii < 5; ++ii)
    {
      isRunning.store(true);
      std::future<bool> initShutdownFuture = std::async(std::launch::async, InitShutdown);

      std::future<bool> loggerThread1Future = std::async(std::launch::async, threadLogger);
      std::future<bool> loggerThread2Future = std::async(std::launch::async, threadLogger);
      size_t sleepMs = 500 + std::rand() % ( 800 - 500 ); // random from 500 to 800
      std::this_thread::sleep_for(std::chrono::milliseconds(sleepMs));
      isRunning.store(false);

      ASSERT_TRUE(initShutdownFuture.get());
      ASSERT_TRUE(loggerThread1Future.get());
      ASSERT_TRUE(loggerThread2Future.get());
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