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
enum class FirewallRulesFailOpenType { NOT_SET, ENABLED, DISABLED };

namespace FirewallRulesFailOpenTypeMapper {
AWS_ROUTE53GLOBALRESOLVER_API FirewallRulesFailOpenType GetFirewallRulesFailOpenTypeForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForFirewallRulesFailOpenType(FirewallRulesFailOpenType value);
}  // namespace FirewallRulesFailOpenTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
