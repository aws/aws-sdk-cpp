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
enum class FirewallPolicyErrorCode { NOT_SET, DNS_FIREWALL_RULE_GROUP_UNAVAILABLE, ROUTE53_RESOLVED_IP_VALIDATION_MISSING };

namespace FirewallPolicyErrorCodeMapper {
AWS_NETWORKFIREWALL_API FirewallPolicyErrorCode GetFirewallPolicyErrorCodeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFirewallPolicyErrorCode(FirewallPolicyErrorCode value);
}  // namespace FirewallPolicyErrorCodeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
