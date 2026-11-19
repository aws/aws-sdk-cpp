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
enum class FirewallDomainStatus { NOT_SET, OBSERVED, ALLOWED, DENIED, UNKNOWN };

namespace FirewallDomainStatusMapper {
AWS_ROUTE53RESOLVER_API FirewallDomainStatus GetFirewallDomainStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallDomainStatus(FirewallDomainStatus value);
}  // namespace FirewallDomainStatusMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
