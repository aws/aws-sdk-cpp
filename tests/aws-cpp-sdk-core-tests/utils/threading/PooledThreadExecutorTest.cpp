/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <chrono>

using namespace Aws::Utils::Threading;

class PooledThreadExecutorTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PooledThreadExecutorTest, WorkerThreadTheOnlyOwner)
{
  // If somehow the shared_ptr of the Executor gets owned by a worker thread of that Executor - Executor shutdown must not deadlock
  auto pExec = Aws::MakeShared<PooledThreadExecutor>("WorkerThreadTheOnlyOwner", 4);

  std::mutex mtx;
  std::condition_variable cv;
  bool taskStarted = false;
  bool taskCanContinue = false;
  bool taskFinished = false;

  pExec->Submit([pExec, &mtx, &cv, &taskStarted, &taskCanContinue, &taskFinished]() mutable {
    {
      std::unique_lock<std::mutex> lock(mtx);
      taskStarted = true;
      cv.notify_one();
    }

    if (!taskCanContinue) {
      std::unique_lock<std::mutex> lock(mtx);
      cv.wait_for(lock, std::chrono::seconds(60), [&taskCanContinue]() { return taskCanContinue; });
    }

    ASSERT_TRUE(taskCanContinue) << "Async task has not been allowed to continue withing 60 seconds!";
    ASSERT_TRUE(pExec);
    ASSERT_EQ(1, pExec.use_count());

    pExec.reset();  // focal point of the test
    ASSERT_FALSE(pExec);

    {
      std::unique_lock<std::mutex> lock(mtx);
      taskFinished = true;
      cv.notify_one();
    }
  });

  if (!taskStarted) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait_for(lock, std::chrono::seconds(60), [&taskStarted]() { return taskStarted; });
  }
  ASSERT_TRUE(taskStarted) << "Async task has not started within 60 seconds!";
  if (!taskStarted) {
    std::terminate();  // avoid hanging tests
  }

  ASSERT_EQ(2, pExec.use_count());
  pExec.reset();
  ASSERT_FALSE(pExec);
  // Now async task is the only owner of the Executor

  {
    std::unique_lock<std::mutex> lock(mtx);
    taskCanContinue = true;
    cv.notify_one();
  }

  if (!taskFinished) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait_for(lock, std::chrono::seconds(60), [&taskFinished]() { return taskFinished; });
  }
  ASSERT_TRUE(taskFinished) << "Async task has not finished within 60 seconds!";
  if (!taskFinished) {
    std::terminate();  // avoid hanging tests
  }

  ASSERT_FALSE(pExec);  // (just in case) executor pointer cannot magically resurrect.
}
