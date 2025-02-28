/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/threading/DefaultExecutor.h>
#include <aws/core/utils/threading/ThreadTask.h>
#include <aws/crt/Optional.h>

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
  std::mutex m_mutex;
  std::condition_variable m_cv;
  State m_state = State::Free;
  Aws::UnorderedMap<std::thread::id, DefaultExecutorTaskPair> m_tasks;
};

class DefaultExecutorTask {
 public:
  DefaultExecutorTask(std::function<void()>&& task, const std::shared_ptr<DefaultExecutor::impl>& pExecutor)
      : m_task(std::move(task)), m_impl(pExecutor) {
    assert(m_task);
  }
  DefaultExecutorTask(const DefaultExecutorTask&) = delete;
  DefaultExecutorTask& operator=(const DefaultExecutorTask&) = delete;
  DefaultExecutorTask(DefaultExecutorTask&&) = default;

  /**
   * Detaches the task from the executor
   */
  void DoNotDetach() { m_impl.reset(); }
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
    if (const auto spExecutor = m_impl.lock()) {
      spExecutor->Detach(std::this_thread::get_id());
    }
    Aws::Delete(this);
  }

  std::function<void()> m_task;
  std::weak_ptr<DefaultExecutor::impl> m_impl;
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
  // allocate outside critical section
  auto* task = Aws::New<DefaultExecutorTask>(DEFAULT_EXECUTOR_LOG_TAG, std::move(fx), spThis);
  if (!task) {
    AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to allocate async task!");
    return false;
  }

  // lock and launch task
  std::unique_lock<std::mutex> lock(m_mutex);
  if (State::Shutdown == m_state) {
    AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to submit async task: the executor is shut down!");
    Aws::Delete(task);
    return false;
  }

  DefaultExecutorTaskPair taskPair = DefaultExecutorTask::Launch(task);
  const auto id = taskPair.first.get_id();
  m_tasks.emplace(id, std::move(taskPair));
  m_state = State::Free;
  return true;
}

void DefaultExecutor::impl::Detach(std::thread::id id) {
  std::unique_lock<std::mutex> lock(m_mutex);
  if (State::Shutdown == m_state) {
    AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to Detach async task: the executor is shut down!");
  }
  auto it = m_tasks.find(id);
  assert(it != m_tasks.end());
  it->second.first.detach();
  m_tasks.erase(it);
  m_cv.notify_one();
}

void DefaultExecutor::impl::WaitUntilStopped() {
  std::unique_lock<std::mutex> lock(m_mutex);
  m_state = State::Shutdown;

  // if worker thread in m_tasks is actually this thread running the Executor Shutdown - detach it after waiting for all other threads
  Crt::Optional<std::thread> toDetach = [&]() {
    Crt::Optional<std::thread> ret;
    const auto thisWorkerThreadIt = m_tasks.find(std::this_thread::get_id());
    if (thisWorkerThreadIt != m_tasks.end()) {
      thisWorkerThreadIt->second.second->DoNotDetach();
      ret.emplace(std::move(thisWorkerThreadIt->second.first));
      m_tasks.erase(std::this_thread::get_id());
    }
    return ret;
  }();

  // wait for all running tasks to finish and detach themselves
  m_cv.wait(lock, [this]() { return m_tasks.empty(); });

  if (toDetach) {
    AWS_LOGSTREAM_WARN(DEFAULT_EXECUTOR_LOG_TAG, "DefaultExecutor is getting destructed from one of it's worker threads!");
    AWS_LOGSTREAM_FLUSH();  // we are in UB zone and may crash soon.

    toDetach->detach();
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
    pImpl = MakeShared<DefaultExecutor::impl>(DEFAULT_EXECUTOR_LOG_TAG);
  }
  return *this;
}

DefaultExecutor::~DefaultExecutor() {
  DefaultExecutor::WaitUntilStopped();
  pImpl.reset();
}

DefaultExecutor::impl::~impl() {
  WaitUntilStopped();
  assert(m_state == State::Shutdown && m_tasks.empty());
}

}  // namespace Threading
}  // namespace Utils
}  // namespace Aws