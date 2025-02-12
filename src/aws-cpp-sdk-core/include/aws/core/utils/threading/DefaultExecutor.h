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
 * Default Executor implementation. Simply spawns a thread and detaches it.
 */
class AWS_CORE_API DefaultExecutor : public Executor {
  // API contract
 public:
  DefaultExecutor();
  DefaultExecutor(const DefaultExecutor& other);
  DefaultExecutor& operator=(const DefaultExecutor&);
  DefaultExecutor(DefaultExecutor&& other) = default;
  DefaultExecutor& operator=(DefaultExecutor&&) = default;

  virtual ~DefaultExecutor();

  void WaitUntilStopped() override;

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
