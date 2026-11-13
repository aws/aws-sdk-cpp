/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/threading/ThreadTask.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Threading;

ThreadTask::ThreadTask(PooledThreadExecutor& executor) : m_continue(true), m_executor(executor), m_thread(std::bind(&ThreadTask::MainTaskRunner, this))
{
}

ThreadTask::~ThreadTask()
{
    StopProcessingWork();
    if (!m_detached) {
      m_thread.join();
    } else {
      m_thread.detach();
    }
}

void ThreadTask::MainTaskRunner()
{
    std::unique_lock lock(m_executor.m_queueLock);

    while (m_continue)
    {        
        if (m_executor.HasTasks())
        {      
            auto fn = m_executor.PopTask();
            lock.unlock();
            if(fn)
            {
                (*fn)();
                Aws::Delete(fn);               
            }
            lock.lock();
        }

        m_executor.m_sync.wait(lock, [this] { return !m_continue || m_executor.HasTasks(); });
    }

    if (m_detached) {
      Aws::Delete(this);
    }
}

void ThreadTask::StopProcessingWork()
{
    m_continue = false;
}

std::thread::id ThreadTask::GetThreadId() const {
  return m_thread.get_id();
}

void ThreadTask::DetachFromExecutor() {
  m_detached = true;
}

