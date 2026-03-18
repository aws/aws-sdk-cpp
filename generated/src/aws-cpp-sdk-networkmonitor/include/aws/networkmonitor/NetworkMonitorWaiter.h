/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/networkmonitor/NetworkMonitorClient.h>

#include <algorithm>

namespace Aws {
namespace NetworkMonitor {

template <typename DerivedClient = NetworkMonitorClient>
class NetworkMonitorWaiter {
 public:
};
}  // namespace NetworkMonitor
}  // namespace Aws
