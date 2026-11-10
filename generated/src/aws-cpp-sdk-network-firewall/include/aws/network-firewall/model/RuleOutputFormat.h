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
enum class RuleOutputFormat { NOT_SET, FIREWALL_RULES, RULES_STRING };

namespace RuleOutputFormatMapper {
AWS_NETWORKFIREWALL_API RuleOutputFormat GetRuleOutputFormatForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForRuleOutputFormat(RuleOutputFormat value);
}  // namespace RuleOutputFormatMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
