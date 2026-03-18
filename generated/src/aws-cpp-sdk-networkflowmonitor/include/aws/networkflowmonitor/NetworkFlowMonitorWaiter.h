/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorClient.h>

#include <algorithm>

namespace Aws {
namespace NetworkFlowMonitor {

template <typename DerivedClient = NetworkFlowMonitorClient>
class NetworkFlowMonitorWaiter {
 public:
};
}  // namespace NetworkFlowMonitor
}  // namespace Aws
