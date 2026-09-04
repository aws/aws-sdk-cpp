/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/threading/WaitGroup.h>

#include <atomic>
#include <chrono>
#include <future>
#include <thread>
#include <vector>

using namespace Aws::Utils::Threading;

class WaitGroupTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WaitGroupTest, WaitReturnsImmediatelyWhenEmpty)
{
    WaitGroup waitGroup;
    auto waiter = std::async(std::launch::async, [&]() { waitGroup.Wait(); });
    EXPECT_EQ(std::future_status::ready, waiter.wait_for(std::chrono::seconds(5)))
        << "Wait() on an empty WaitGroup should not block";
}

TEST_F(WaitGroupTest, WaitBlocksUntilDone)
{
    WaitGroup waitGroup;
    waitGroup.Add(1);

    std::atomic<bool> released{false};
    std::thread worker([&]()
    {
        released = true;
        waitGroup.Done();
    });

    auto waiter = std::async(std::launch::async, [&]() { waitGroup.Wait(); });
    ASSERT_EQ(std::future_status::ready, waiter.wait_for(std::chrono::seconds(5)))
        << "Wait() did not return after the outstanding entry was Done()";
    EXPECT_TRUE(released.load());

    worker.join();
}

TEST_F(WaitGroupTest, WaitDrainsMultipleOutstanding)
{
    WaitGroup waitGroup;
    const size_t entries = 8;
    waitGroup.Add(entries);

    std::vector<std::thread> workers;
    for (size_t i = 0; i < entries; ++i)
    {
        workers.emplace_back([&]() { waitGroup.Done(); });
    }

    auto waiter = std::async(std::launch::async, [&]() { waitGroup.Wait(); });
    ASSERT_EQ(std::future_status::ready, waiter.wait_for(std::chrono::seconds(5)))
        << "Wait() did not drain all outstanding entries";

    for (auto& worker : workers)
    {
        worker.join();
    }
}

TEST_F(WaitGroupTest, IsReusableAcrossRounds)
{
    WaitGroup waitGroup;
    for (int round = 0; round < 3; ++round)
    {
        waitGroup.Add(1);
        std::thread worker([&]() { waitGroup.Done(); });
        auto waiter = std::async(std::launch::async, [&]() { waitGroup.Wait(); });
        ASSERT_EQ(std::future_status::ready, waiter.wait_for(std::chrono::seconds(5)))
            << "Wait() did not return on round " << round;
        worker.join();
    }
}
