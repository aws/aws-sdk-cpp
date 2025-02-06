/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <chrono>

using namespace Aws::Utils::Threading;

class PooledThreadExecutorTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(PooledThreadExecutorTest, WorkerThreadTheOnlyOwner) {
  // If somehow the shared_ptr of the Executor gets owned by a worker thread of that Executor - Executor shutdown must not deadlock
  auto pExec = Aws::MakeShared<PooledThreadExecutor>("WorkerThreadTheOnlyOwner", 4);

  std::mutex mtx;
  std::condition_variable cv;
  bool taskStarted = false;
  bool taskCanContinue = false;
  bool taskFinished = false;

  auto sendSignal = [&mtx, &cv](bool& boolSignal) {
    std::unique_lock<std::mutex> lock(mtx);
    boolSignal = true;
    cv.notify_one();
  };

  auto waitForSignal = [&mtx, &cv](bool& boolSignal, const Aws::String& msg) {
    if (!boolSignal) {
      std::unique_lock<std::mutex> lock(mtx);
      cv.wait_for(lock, std::chrono::seconds(60), [&boolSignal]() { return boolSignal; });
    }
    ASSERT_TRUE(boolSignal) << msg;
  };

  pExec->Submit([pExec, &sendSignal, &waitForSignal, &taskStarted, &taskCanContinue, &taskFinished]() mutable {
    sendSignal(taskStarted);
    waitForSignal(taskCanContinue, "Async task has not been allowed to continue within 60 seconds!");
    ASSERT_TRUE(pExec);
    ASSERT_EQ(1, pExec.use_count());
    pExec.reset();  // focal point of the test
    ASSERT_FALSE(pExec);
    sendSignal(taskFinished);
  });

  waitForSignal(taskStarted, "Async task has not started within 60 seconds!");
  ASSERT_EQ(2, pExec.use_count());
  pExec.reset();
  ASSERT_FALSE(pExec);
  // Now async task is the only owner of the Executor
  sendSignal(taskCanContinue);

  waitForSignal(taskFinished, "Async task has not finished within 60 seconds!");
  ASSERT_FALSE(pExec);  // (just in case) executor pointer cannot magically resurrect.
}
