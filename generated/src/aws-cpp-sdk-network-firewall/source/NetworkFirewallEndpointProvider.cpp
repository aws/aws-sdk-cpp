/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/NetworkFirewallEndpointProvider.h>
#include <aws/network-firewall/internal/NetworkFirewallEndpointRules.h>

namespace Aws {
namespace NetworkFirewall {
namespace Endpoint {
NetworkFirewallEndpointProvider::NetworkFirewallEndpointProvider()
    : NetworkFirewallDefaultEpProviderBase(Aws::NetworkFirewall::NetworkFirewallEndpointRules::GetRulesBlob(),
                                           Aws::NetworkFirewall::NetworkFirewallEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NetworkFirewall
}  // namespace Aws
