/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/scheduler/SchedulerClient.h>

#include <algorithm>

namespace Aws {
namespace Scheduler {

template <typename DerivedClient = SchedulerClient>
class SchedulerWaiter {
 public:
};
}  // namespace Scheduler
}  // namespace Aws
