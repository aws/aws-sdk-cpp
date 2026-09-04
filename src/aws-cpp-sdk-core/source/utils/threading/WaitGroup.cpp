/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/threading/WaitGroup.h>

#include <condition_variable>
#include <mutex>

namespace {
const char WAIT_GROUP_TAG[] = "WaitGroup";
}

namespace Aws {
namespace Utils {
namespace Threading {
struct WaitGroup::WaitGroupImpl {
  void Add(size_t delta) {
    std::lock_guard<std::mutex> lock(mutex);
    count += delta;
  }

  void Done() {
    std::lock_guard<std::mutex> lock(mutex);
    if (count > 0) {
      --count;
    }
    if (count == 0) {
      syncPoint.notify_all();
    }
  }

  void Wait() {
    std::unique_lock<std::mutex> lock(mutex);
    syncPoint.wait(lock, [this]() { return count == 0; });
  }

  std::mutex mutex;
  std::condition_variable syncPoint;
  size_t count{0};
};

WaitGroup::WaitGroup() : m_impl(Aws::MakeUnique<WaitGroupImpl>(WAIT_GROUP_TAG)) {}

WaitGroup::~WaitGroup() = default;

void WaitGroup::Add(size_t count) { m_impl->Add(count); }

void WaitGroup::Done() { m_impl->Done(); }

void WaitGroup::Wait() { m_impl->Wait(); }
}  // namespace Threading
}  // namespace Utils
}  // namespace Aws
