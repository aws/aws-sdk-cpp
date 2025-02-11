/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/threading/DefaultExecutor.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

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

TEST_F(DefaultExecutorTest, WorkerThreadTheOnlyOwner) {
  // If somehow the shared_ptr of the Executor gets owned by a worker thread of that Executor - Executor shutdown must not deadlock
  auto pExec = Aws::MakeShared<DefaultExecutor>("WorkerThreadTheOnlyOwner");

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

TEST_F(DefaultExecutorTest, ConcurrentTaskLaunchAndShutdown) {
  // Try to force a race condition on task submission and shutdown
  // one threads submit a new task, another starts the executor shutdown
  std::mutex mtx;
  std::condition_variable cv;
  auto sendSignal = [&mtx, &cv](bool& boolSignal) {
    std::unique_lock<std::mutex> lock(mtx);
    boolSignal = true;
    cv.notify_all();
  };

  auto waitForSignal = [&mtx, &cv](bool& boolSignal, const Aws::String& msg) {
    if (!boolSignal) {
      std::unique_lock<std::mutex> lock(mtx);
      cv.wait_for(lock, std::chrono::seconds(60), [&boolSignal]() { return boolSignal; });
    }
    ASSERT_TRUE(boolSignal) << msg;
  };

  static const size_t TEST_REPEATS = 50;  // test verifies race condition behavior, repeat it.
  for (size_t testRepeat = 0; testRepeat < TEST_REPEATS; ++testRepeat) {
    auto pExec = Aws::MakeShared<DefaultExecutor>("ConcurrentTaskLaunchAndShutdown");
    bool continueTest = false;
    std::atomic<size_t> someVar;
    auto executorShutdown = [&](bool& executorShutdownReady) {
      sendSignal(executorShutdownReady);
      waitForSignal(continueTest, "Executor destroyer task did not resume after 60s!");

      pExec->WaitUntilStopped();

      return true;
    };
    auto executorSubmitTask = [&](bool& executorSubmitterReady) {
      sendSignal(executorSubmitterReady);
      waitForSignal(continueTest, "Executor submit task was not resumed after 60s!");

      pExec->Submit([&]() mutable {
        // some new dummy async task;
        ++someVar;
      });

      return true;
    };
    bool executorShutdownReady = false;
    std::future<bool> executorShutdownFuture = std::async(std::launch::async, executorShutdown, std::ref(executorShutdownReady));
    static const size_t PARALLEL_SUBMITTERS = 8;
    Aws::Vector<std::future<bool>> submitterFutures(PARALLEL_SUBMITTERS);
    bool executorSubmittersReady[PARALLEL_SUBMITTERS] = {false};
    for (size_t i = 0; i < PARALLEL_SUBMITTERS; ++i) {
      submitterFutures[i] = std::async(std::launch::async, executorSubmitTask, std::ref(executorSubmittersReady[i]));
    }
    waitForSignal(executorShutdownReady, "Executor destroyer task did not get ready after 60s");
    for (size_t i = 0; i < PARALLEL_SUBMITTERS; ++i) {
      waitForSignal(executorSubmittersReady[i], "Executor submitter tasks did not get ready after 60s");
    }

    sendSignal(continueTest);

    ASSERT_TRUE(executorShutdownFuture.get());
    for (size_t i = 0; i < PARALLEL_SUBMITTERS; ++i) {
      ASSERT_TRUE(submitterFutures[i].get());
    }
  }
}
