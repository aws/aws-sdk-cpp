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
  enum class ResolverRuleAssociationStatus
  {
    NOT_SET,
    CREATING,
    COMPLETE,
    DELETING,
    FAILED,
    OVERRIDDEN
  };

namespace ResolverRuleAssociationStatusMapper
{
AWS_ROUTE53RESOLVER_API ResolverRuleAssociationStatus GetResolverRuleAssociationStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverRuleAssociationStatus(ResolverRuleAssociationStatus value);
} // namespace ResolverRuleAssociationStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
