/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
enum class FirewallRuleAction { NOT_SET, ALLOW, ALERT, BLOCK };

namespace FirewallRuleActionMapper {
AWS_ROUTE53GLOBALRESOLVER_API FirewallRuleAction GetFirewallRuleActionForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForFirewallRuleAction(FirewallRuleAction value);
}  // namespace FirewallRuleActionMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
