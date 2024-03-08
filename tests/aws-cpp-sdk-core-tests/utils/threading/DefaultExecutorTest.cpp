/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/threading/DefaultExecutor.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <atomic>
#include <chrono>

using namespace Aws::Utils::Threading;

class DefaultExecutorTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DefaultExecutorTest, ThreadsJoinOnDestructionTest)
{
    std::atomic<int> i(1);
    {
        DefaultExecutor exec;
        static Semaphore ev(0, 2);
        auto first = [&] { ev.WaitOne(); i++; };
        auto second = [&] { ev.WaitOne(); i++; };
        exec.Submit(first);
        exec.Submit(second);
        ev.ReleaseAll();
    }
    i = i * 10;
    ASSERT_EQ(30, i.load());
}

TEST_F(DefaultExecutorTest, ThreadsDetachIfNotShuttingDown)
{
    using namespace std::chrono;
    std::atomic<int> i(1);
    static Semaphore ev(0, 1);
    DefaultExecutor exec;
    exec.Submit([&] { i++; ev.Release(); });
    ev.WaitOne();
    i = i * 10;
    ASSERT_EQ(20, i.load());
}
