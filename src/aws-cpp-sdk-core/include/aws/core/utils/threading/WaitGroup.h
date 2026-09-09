/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <cstddef>

namespace Aws {
namespace Utils {
namespace Threading {
class AWS_CORE_API WaitGroup {
 public:
  WaitGroup();
  ~WaitGroup();
  void Add(size_t count = 1);
  void Done();
  void Wait();

 private:
  struct WaitGroupImpl;
  Aws::UniquePtr<WaitGroupImpl> m_impl;
};
}  // namespace Threading
}  // namespace Utils
}  // namespace Aws
