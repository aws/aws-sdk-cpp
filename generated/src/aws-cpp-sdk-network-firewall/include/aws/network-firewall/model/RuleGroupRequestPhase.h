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
enum class RuleGroupRequestPhase { NOT_SET, PRE_DNS, PRE_REQ, POST_RES };

namespace RuleGroupRequestPhaseMapper {
AWS_NETWORKFIREWALL_API RuleGroupRequestPhase GetRuleGroupRequestPhaseForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForRuleGroupRequestPhase(RuleGroupRequestPhase value);
}  // namespace RuleGroupRequestPhaseMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
