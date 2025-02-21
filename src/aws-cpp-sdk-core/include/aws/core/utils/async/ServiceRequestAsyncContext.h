/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <mutex>
#include <condition_variable>
#include <atomic>

namespace Aws
{
namespace Utils
{
class AWS_CORE_API ServiceRequestAsyncContextWrapper final
{
public:
  class Context final {
  public:
    Context() {}
    ~Context() {}


    bool TryLock() {
      if (!isAlive) {
        return false;
      }

      ++useCount;
      return true;
    }

    void Unlock() {
      --useCount;
    }

    void Invalidate() {
      isAlive = false;
    }

    bool WaitForRelease() {
      return true;
    }

    bool isAlive = true;
    size_t useCount = 0;
  };

  ServiceRequestAsyncContextWrapper() {
    m_wrappedRequestAsyncCtx = Aws::MakeShared<Context>("ServiceRequestAsyncContextWrapper");
  }

  ~ServiceRequestAsyncContextWrapper() {
    assert(m_wrappedRequestAsyncCtx);

    m_wrappedRequestAsyncCtx->Invalidate();
    m_wrappedRequestAsyncCtx->WaitForRelease();
    m_wrappedRequestAsyncCtx.reset();
  }

  std::shared_ptr<Context>& GetContext() {
    return m_wrappedRequestAsyncCtx;
  }

private:
  std::shared_ptr<Context> m_wrappedRequestAsyncCtx;
};

class AWS_CORE_API ServiceRequestAsyncContextLock final
{
public:
  ServiceRequestAsyncContextLock(const std::weak_ptr<ServiceRequestAsyncContextWrapper::Context>& ctx)
    : m_ctx(ctx.lock()) {
    if(!m_ctx) {
      /* Context is already destroyed */
      return;
    }
    if (!m_ctx->TryLock()) {
      /* Context is still present but is already being destroyed */
      m_ctx.reset();
      return;
    }

  }
  ~ServiceRequestAsyncContextLock() {
    if(m_ctx) {
      m_ctx->Unlock();
    }
  }

  bool IsValid() const {
    return static_cast<bool>(m_ctx);
  }

private:
  std::shared_ptr<ServiceRequestAsyncContextWrapper::Context> m_ctx;
};
}
}