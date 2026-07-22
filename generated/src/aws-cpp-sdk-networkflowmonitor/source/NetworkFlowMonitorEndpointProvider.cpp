/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointProvider.h>
#include <aws/networkflowmonitor/internal/NetworkFlowMonitorEndpointRules.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Endpoint {
NetworkFlowMonitorEndpointProvider::NetworkFlowMonitorEndpointProvider()
    : NetworkFlowMonitorDefaultEpProviderBase(Aws::NetworkFlowMonitor::NetworkFlowMonitorEndpointRules::GetRulesBlob(),
                                              Aws::NetworkFlowMonitor::NetworkFlowMonitorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NetworkFlowMonitor
}  // namespace Aws
