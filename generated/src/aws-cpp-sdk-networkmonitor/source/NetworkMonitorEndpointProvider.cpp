/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/NetworkMonitorEndpointProvider.h>
#include <aws/networkmonitor/internal/NetworkMonitorEndpointRules.h>

namespace Aws {
namespace NetworkMonitor {
namespace Endpoint {
NetworkMonitorEndpointProvider::NetworkMonitorEndpointProvider()
    : NetworkMonitorDefaultEpProviderBase(Aws::NetworkMonitor::NetworkMonitorEndpointRules::GetRulesBlob(),
                                          Aws::NetworkMonitor::NetworkMonitorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NetworkMonitor
}  // namespace Aws
