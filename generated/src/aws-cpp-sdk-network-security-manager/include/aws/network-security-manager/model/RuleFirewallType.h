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
enum class RuleFirewallType { NOT_SET, WAF };

namespace RuleFirewallTypeMapper {
AWS_NETWORKSECURITYMANAGER_API RuleFirewallType GetRuleFirewallTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForRuleFirewallType(RuleFirewallType value);
}  // namespace RuleFirewallTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
