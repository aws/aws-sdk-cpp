/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

namespace Aws {
namespace Route53Resolver {
namespace Model {
enum class FirewallRuleDomainSortOrder { NOT_SET, ASC, DESC };

namespace FirewallRuleDomainSortOrderMapper {
AWS_ROUTE53RESOLVER_API FirewallRuleDomainSortOrder GetFirewallRuleDomainSortOrderForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallRuleDomainSortOrder(FirewallRuleDomainSortOrder value);
}  // namespace FirewallRuleDomainSortOrderMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
