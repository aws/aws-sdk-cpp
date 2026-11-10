/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class FirewallRuleAction { NOT_SET, ACCEPT, DROP, REJECT, REJECT_DST, REJECT_BOTH };

namespace FirewallRuleActionMapper {
AWS_NETWORKFIREWALL_API FirewallRuleAction GetFirewallRuleActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFirewallRuleAction(FirewallRuleAction value);
}  // namespace FirewallRuleActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
