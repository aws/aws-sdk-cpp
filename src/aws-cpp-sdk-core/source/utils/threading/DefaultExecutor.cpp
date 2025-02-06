/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/threading/DefaultExecutor.h>
#include <aws/core/utils/threading/ThreadTask.h>

#include <cassert>

namespace Aws {
namespace Utils {
namespace Threading {

static const char DEFAULT_EXECUTOR_LOG_TAG[] = "DefaultExecutor";

class DefaultExecutorTask;
using DefaultExecutorTaskPair = std::pair<std::thread, DefaultExecutorTask*>;

struct DefaultExecutor::impl {
  impl() = default;
  impl(const impl&) = delete;
  impl(impl&&) = delete;
  impl& operator=(const impl&) = delete;
  impl& operator=(impl&&) = delete;

  enum class State { Free, Locked, Shutdown };

  ~impl();

  bool SubmitToThread(const std::shared_ptr<impl>& spThis, std::function<void()>&& fx);
  void WaitUntilStopped();
  void Detach(std::thread::id id);

 private:
  std::atomic<State> m_state{State::Free};
  Aws::UnorderedMap<std::thread::id, DefaultExecutorTaskPair> m_tasks;
};

class DefaultExecutorTask {
 public:
  DefaultExecutorTask(std::function<void()>&& task, const std::shared_ptr<DefaultExecutor::impl>& pExecutor)
      : m_task(std::move(task)), m_executor(pExecutor) {
    assert(m_task);
  }
  DefaultExecutorTask(const DefaultExecutorTask&) = delete;
  DefaultExecutorTask& operator=(const DefaultExecutorTask&) = delete;
  DefaultExecutorTask(DefaultExecutorTask&&) = default;

  /**
   * Detaches the task from the executor
   */
  void DoNotDetach() { m_executor.reset(); }
  /**
   * Starts task execution on a new thread
   */
  static DefaultExecutorTaskPair Launch(DefaultExecutorTask* task) {
    if (!task) {
      AWS_LOGSTREAM_FATAL(DEFAULT_EXECUTOR_LOG_TAG, "Attempted to launch an empty task");
      return {};
    }
    return {std::thread(&DefaultExecutorTask::Execute, task), task};
  }

 private:
  void Execute() {
    assert(m_task);
    m_task();
    if (const auto spExecutor = m_executor.lock()) {
      spExecutor->Detach(std::this_thread::get_id());
    }
    Aws::Delete(this);
  }

  std::function<void()> m_task;
  std::weak_ptr<DefaultExecutor::impl> m_executor;
};

bool DefaultExecutor::SubmitToThread(std::function<void()>&& fx) {
  if (!pImpl) {
    AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to submit async task: the executor is shut down!");
    return false;
  }
  return pImpl->SubmitToThread(pImpl, std::move(fx));
}

void DefaultExecutor::WaitUntilStopped() {
  if (pImpl) {
    pImpl->WaitUntilStopped();
  }
}

bool DefaultExecutor::impl::SubmitToThread(const std::shared_ptr<impl>& spThis, std::function<void()>&& fx) {
  if (State::Shutdown == m_state.load()) {
    AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to submit async task: the executor is shut down!");
    return false;
  }

  auto* task = Aws::New<DefaultExecutorTask>(DEFAULT_EXECUTOR_LOG_TAG, std::move(fx), spThis);
  if (!task) {
    AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to allocate async task!");
    return false;
  }

  State expected;
  do {
    expected = State::Free;
    if (m_state.compare_exchange_strong(expected, State::Locked)) {
      DefaultExecutorTaskPair taskPair = DefaultExecutorTask::Launch(task);
      const auto id = taskPair.first.get_id();
      m_tasks.emplace(id, std::move(taskPair));
      m_state = State::Free;
      return true;
    }
  } while (expected != State::Shutdown);
  return false;
}

void DefaultExecutor::impl::Detach(std::thread::id id) {
  State expected;
  do {
    expected = State::Free;
    if (m_state.compare_exchange_strong(expected, State::Locked)) {
      auto it = m_tasks.find(id);
      assert(it != m_tasks.end());
      it->second.first.detach();
      m_tasks.erase(it);
      m_state = State::Free;
      return;
    }
  } while (expected != State::Shutdown);
}

void DefaultExecutor::impl::WaitUntilStopped() {
  auto expected = State::Free;
  while (!m_state.compare_exchange_strong(expected, State::Shutdown)) {
    // spin while currently detaching threads finish
    assert(expected == State::Locked);
    expected = State::Free;
  }
}

DefaultExecutor::DefaultExecutor() { pImpl = MakeShared<DefaultExecutor::impl>(DEFAULT_EXECUTOR_LOG_TAG); }

DefaultExecutor::DefaultExecutor(const DefaultExecutor& other) {
  AWS_UNREFERENCED_PARAM(other);
  pImpl = MakeShared<DefaultExecutor::impl>(DEFAULT_EXECUTOR_LOG_TAG);
}

DefaultExecutor& DefaultExecutor::operator=(const DefaultExecutor& other) {
  if (this != &other) {
    WaitUntilStopped();
    pImpl.reset();
  }
  return *this;
}

DefaultExecutor::~DefaultExecutor() {
  DefaultExecutor::WaitUntilStopped();  // virtual call is resolved at compile time
  pImpl.reset();
}

DefaultExecutor::impl::~impl() {
  const auto thisThreadId = std::this_thread::get_id();
  bool workerOwnsThis = false;

  for (auto& taskItem : m_tasks) {
    if (thisThreadId != taskItem.first) {
      taskItem.second.first.join();
    } else {
      workerOwnsThis = true;
      taskItem.second.second->DoNotDetach();  // prevent task from self-detaching from Executor
    }
  }

  if (workerOwnsThis) {
    std::thread toDetach = std::move(m_tasks[thisThreadId].first);
    AWS_LOGSTREAM_WARN(DEFAULT_EXECUTOR_LOG_TAG, "DefaultExecutor is getting destructed from one of it's worker threads!");
    AWS_LOGSTREAM_FLUSH();  // we are in UB zone and may crash soon.

    m_tasks.clear();
    toDetach.detach();
  }
}

}  // namespace Threading
}  // namespace Utils
}  // namespace Aws