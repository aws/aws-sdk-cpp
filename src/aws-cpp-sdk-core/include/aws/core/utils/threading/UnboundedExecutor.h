/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/threading/Executor.h>

#include <functional>

namespace Aws {
namespace Utils {
namespace Threading {
/**
 * Runs each task on a new thread of its own, with no limit on how many run at once. Clients default to a
 * PooledThreadExecutor instead. Use this one to get a thread per call.
 */
class AWS_CORE_API UnboundedExecutor : public Executor {
  // API contract
 public:
  UnboundedExecutor();
  UnboundedExecutor(const UnboundedExecutor& other);
  UnboundedExecutor& operator=(const UnboundedExecutor&);
  UnboundedExecutor(UnboundedExecutor&& other) = default;
  UnboundedExecutor& operator=(UnboundedExecutor&&) = default;

  virtual ~UnboundedExecutor();

  void WaitUntilStopped() override;

  const char* GetUserAgentName() const override { return "unbounded"; }

 protected:
  bool SubmitToThread(std::function<void()>&&) override;

  // implementation details
 public:
  struct impl;

 private:
  std::shared_ptr<impl> pImpl;
};
}  // namespace Threading
}  // namespace Utils
}  // namespace Aws
