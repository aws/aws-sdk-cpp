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
  enum class RuleTypeOption
  {
    NOT_SET,
    FORWARD,
    SYSTEM,
    RECURSIVE
  };

namespace RuleTypeOptionMapper
{
AWS_ROUTE53RESOLVER_API RuleTypeOption GetRuleTypeOptionForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForRuleTypeOption(RuleTypeOption value);
} // namespace RuleTypeOptionMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
