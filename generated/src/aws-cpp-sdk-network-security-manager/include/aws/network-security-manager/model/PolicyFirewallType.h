/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class PolicyFirewallType { NOT_SET, WAF, SHIELD_ADVANCED };

namespace PolicyFirewallTypeMapper {
AWS_NETWORKSECURITYMANAGER_API PolicyFirewallType GetPolicyFirewallTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForPolicyFirewallType(PolicyFirewallType value);
}  // namespace PolicyFirewallTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
