/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/threading/DefaultExecutor.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/core/utils/memory/stl/AWSString.h>

using namespace Aws::Utils::Threading;

class ReaderWriterLockTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ReaderWriterLockTest, MultipleReadersMultipleWriters)
{
    Aws::String resource = "It's still Day One";
    std::atomic<size_t> resourceLength { resource.length() };
    const int ITERATIONS = 100;
    const int READER_THREADS = 100;
    const int WRITER_THREADS = 20;
    Semaphore ev(0, READER_THREADS + WRITER_THREADS);
    ReaderWriterLock rwlock;
    {
        DefaultExecutor exec;
        auto reader = [&] {
            ev.WaitOne();
            for(int i = 0; i < ITERATIONS; i++)
            {
                ReaderLockGuard guard(rwlock);
                ASSERT_GE(resource.length(), resourceLength);
            }
        };
        auto writer = [&] {
            ev.WaitOne();
            for(int i = 0; i < ITERATIONS; i++)
            {
                WriterLockGuard guard(rwlock);
                resource += "!";
                resourceLength = resource.length();
            }
        };

        for(int i = 0; i < WRITER_THREADS; i++)
        {
            exec.Submit(writer);
        }

        for(int i = 0; i < READER_THREADS; i++)
        {
            exec.Submit(reader);
        }

        ev.ReleaseAll();
    }
}

TEST_F(ReaderWriterLockTest, NoReadersMultipleWriters)
{
    Aws::String resource = "It's still Day One";
    const auto originalLength = resource.length();
    const int THREADS_NUM = 8;
    const int ITERATIONS = 100;
    Semaphore ev(0, 100);
    ReaderWriterLock rwlock;
    {
        DefaultExecutor exec;
        auto writer = [&] {
            ev.WaitOne();
            for(int i = 0; i < ITERATIONS; i++)
            {
                WriterLockGuard guard(rwlock);
                resource += "!";
            }
        };

        for(int i = 0; i < THREADS_NUM; i++)
        {
            exec.Submit(writer);
        }

        ev.ReleaseAll();
    }

    ASSERT_EQ(originalLength + THREADS_NUM * ITERATIONS, resource.length());
}

TEST_F(ReaderWriterLockTest, MultiAsync)
{
    GTEST_SKIP() << "Test is temporarily disabled";

    const char sharedBufferOriginal[] = "It's still Day One";
    char sharedBuffer[] = "It's still Day One";
    const size_t sharedBufferSz = strlen(sharedBuffer);
    Aws::Utils::Threading::ReaderWriterLock sharedBufferLock;

    std::atomic<bool> readersRunning;
    readersRunning.store(true);
    std::atomic<size_t> readersRunCount;
    readersRunCount.store(0);
    auto reader = [&]()
    {
        Aws::Utils::Threading::ReaderLockGuard guard(sharedBufferLock);

        readersRunCount++;
        EXPECT_STREQ(sharedBufferOriginal, sharedBuffer);
    };

    auto slowWriter = [&]()
    {
        Aws::Utils::Threading::WriterLockGuard guard(sharedBufferLock);
        for(size_t i = 0; i < sharedBufferSz; ++i)
        {
            sharedBuffer[i] = 'B';
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }

        for(size_t i = 0; i < sharedBufferSz; ++i)
        {
            sharedBuffer[i] = sharedBufferOriginal[i];
        }
    };

    static const size_t READER_COUNT = 8;
    Aws::Vector<std::future<bool>> readerFutures(READER_COUNT);
    std::atomic<size_t> readersStarted;
    readersStarted = 0;
    for(size_t i = 0; i < READER_COUNT/2; ++i) {
      readerFutures[i] = std::async(std::launch::async,
                                    [&]() -> bool {
                                      readersStarted++;
                                      while(readersRunning)
                                      {
                                        reader();
                                      }
                                      return true;
                                    });
    }

    while(readersStarted.load() != READER_COUNT/2)
    {
        continue;
    }

    const size_t readersRunCountBeforeWriter = readersRunCount;
    ASSERT_GE(readersRunCountBeforeWriter, READER_COUNT);

    static const size_t WRITER_COUNT = 3;
    Aws::Vector<std::future<bool>> writerFutures(WRITER_COUNT);
    static const size_t WRITERS_REPEAT = 4;
    for(size_t i = 0; i < WRITER_COUNT; ++i) {
      writerFutures[i] = std::async(std::launch::async,
                                    [&]() -> bool {
                                      for(size_t writeRepeat = 0; writeRepeat < WRITERS_REPEAT; ++writeRepeat)
                                      {
                                        slowWriter();
                                      }
                                      return true;
                                    });
    }

    for(size_t i = READER_COUNT/2; i < READER_COUNT; ++i) {
      readerFutures[i] = std::async(std::launch::async,
                                    [&]() -> bool {
                                      readersStarted++;
                                      while(readersRunning)
                                      {
                                        reader();
                                      }
                                      return true;
                                    });
    }
    while(readersStarted.load() != READER_COUNT)
    {
        continue;
    }

    for(size_t i = 0; i < WRITER_COUNT; ++i)
    {
        bool success = writerFutures[i].get();
        ASSERT_TRUE(success);
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    readersRunning.store(false);

    for(size_t i = 0; i < READER_COUNT; ++i)
    {
        bool success = readerFutures[i].get();
        ASSERT_TRUE(success);
    }
}