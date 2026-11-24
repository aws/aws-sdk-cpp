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
enum class FirewallType { NOT_SET, FIREWALL, IGW_FIREWALL };

namespace FirewallTypeMapper {
AWS_NETWORKFIREWALL_API FirewallType GetFirewallTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFirewallType(FirewallType value);
}  // namespace FirewallTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
