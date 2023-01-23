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
  enum class ResolverEndpointStatus
  {
    NOT_SET,
    CREATING,
    OPERATIONAL,
    UPDATING,
    AUTO_RECOVERING,
    ACTION_NEEDED,
    DELETING
  };

namespace ResolverEndpointStatusMapper
{
AWS_ROUTE53RESOLVER_API ResolverEndpointStatus GetResolverEndpointStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverEndpointStatus(ResolverEndpointStatus value);
} // namespace ResolverEndpointStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
