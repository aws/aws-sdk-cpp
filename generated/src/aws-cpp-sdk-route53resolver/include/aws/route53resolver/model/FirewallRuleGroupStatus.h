/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{
  enum class FirewallRuleGroupStatus
  {
    NOT_SET,
    COMPLETE,
    DELETING,
    UPDATING
  };

namespace FirewallRuleGroupStatusMapper
{
AWS_ROUTE53RESOLVER_API FirewallRuleGroupStatus GetFirewallRuleGroupStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallRuleGroupStatus(FirewallRuleGroupStatus value);
} // namespace FirewallRuleGroupStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
