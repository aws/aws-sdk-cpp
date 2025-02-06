/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/threading/DefaultExecutor.h>
#include <aws/core/utils/threading/ThreadTask.h>

#include <cassert>

using namespace Aws::Utils::Threading;

static const char DEFAULT_EXECUTOR_LOG_TAG[] = "DefaultExecutor";


DefaultExecutor::DefaultExecutorTask::DefaultExecutorTask(std::function<void()>&& task, DefaultExecutor* executor)
    : m_task(std::move(task)), m_executor(executor) {
  assert(m_task);
}

void DefaultExecutor::DefaultExecutorTask::Execute() {
  assert(m_task);
  m_task();
  if (m_executor) {
    m_executor->Detach(std::this_thread::get_id());
  }
  Aws::Delete(this);
}

void DefaultExecutor::DefaultExecutorTask::DoNotDetach() {
  m_executor = nullptr;
}

std::pair<std::thread, DefaultExecutor::DefaultExecutorTask*> DefaultExecutor::DefaultExecutorTask::Launch(DefaultExecutorTask* task) {
  if(!task) {
    assert(task);
    AWS_LOGSTREAM_FATAL(DEFAULT_EXECUTOR_LOG_TAG, "Attempted to launch a nullptr task");
    return {};
  }
  return {std::thread(&DefaultExecutorTask::Execute, task), task};
}

bool DefaultExecutor::SubmitToThread(std::function<void()>&& fx)
{
    if(State::Shutdown == m_state.load()) {
      AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to submit async task: the executor is shut down!");
      return false;
    }

    auto* task = Aws::New<DefaultExecutorTask>(DEFAULT_EXECUTOR_LOG_TAG, std::move(fx), this);
    if(!task) {
      AWS_LOGSTREAM_ERROR(DEFAULT_EXECUTOR_LOG_TAG, "Unable to allocate async task!");
      return false;
    }

    State expected;
    do
    {
        expected = State::Free;
        if(m_state.compare_exchange_strong(expected, State::Locked))
        {
            DefaultExecutorTaskPair taskPair = DefaultExecutorTask::Launch(task);
            const auto id = taskPair.first.get_id();
            m_tasks.emplace(id, std::move(taskPair));
            m_state = State::Free;
            return true;
        }
    }
    while(expected != State::Shutdown);
    return false;
}

void DefaultExecutor::Detach(std::thread::id id)
{
    State expected;
    do
    {
        expected = State::Free;
        if(m_state.compare_exchange_strong(expected, State::Locked))
        {
            auto it = m_tasks.find(id);
            assert(it != m_tasks.end());
            it->second.first.detach();
            m_tasks.erase(it);
            m_state = State::Free;
            return;
        }
    } 
    while(expected != State::Shutdown);
}

void DefaultExecutor::WaitUntilStopped()
{
    auto expected = State::Free;
    while(!m_state.compare_exchange_strong(expected, State::Shutdown))
    {
        //spin while currently detaching threads finish
        assert(expected == State::Locked);
        expected = State::Free;
    }
}

DefaultExecutor::~DefaultExecutor()
{
    DefaultExecutor::WaitUntilStopped(); // virtual call is resolved at compile time
    const auto thisThreadId = std::this_thread::get_id();
    bool workerOwnsThis = false;

    for(auto& taskItem : m_tasks) {
      if (thisThreadId != taskItem.first) {
        taskItem.second.first.join();
      } else {
        workerOwnsThis = true;
        taskItem.second.second->DoNotDetach();  // prevent task from self-detaching from Executor
      }
    }

    if(workerOwnsThis) {
      std::thread toDetach = std::move(m_tasks[thisThreadId].first);
      AWS_LOGSTREAM_WARN(DEFAULT_EXECUTOR_LOG_TAG, "DefaultExecutor is getting destructed from one of it's worker threads!");
      AWS_LOGSTREAM_FLUSH(); // we are in UB zone and may crash soon.

      m_tasks.clear();
      toDetach.detach();
    }
}
