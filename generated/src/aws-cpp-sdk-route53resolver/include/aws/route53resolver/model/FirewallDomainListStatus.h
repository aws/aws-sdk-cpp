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
enum class FirewallDomainListStatus { NOT_SET, COMPLETE, COMPLETE_IMPORT_FAILED, IMPORTING, DELETING, UPDATING };

namespace FirewallDomainListStatusMapper {
AWS_ROUTE53RESOLVER_API FirewallDomainListStatus GetFirewallDomainListStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallDomainListStatus(FirewallDomainListStatus value);
}  // namespace FirewallDomainListStatusMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
