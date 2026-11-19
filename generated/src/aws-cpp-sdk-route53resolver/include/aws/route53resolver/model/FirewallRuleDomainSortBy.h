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
enum class FirewallRuleDomainSortBy { NOT_SET, TIME_ADDED, DAILY_TOTAL, TOTAL_REQUESTS };

namespace FirewallRuleDomainSortByMapper {
AWS_ROUTE53RESOLVER_API FirewallRuleDomainSortBy GetFirewallRuleDomainSortByForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallRuleDomainSortBy(FirewallRuleDomainSortBy value);
}  // namespace FirewallRuleDomainSortByMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
