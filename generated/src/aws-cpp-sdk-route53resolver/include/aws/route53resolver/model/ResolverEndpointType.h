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
  enum class ResolverEndpointType
  {
    NOT_SET,
    IPV6,
    IPV4,
    DUALSTACK
  };

namespace ResolverEndpointTypeMapper
{
AWS_ROUTE53RESOLVER_API ResolverEndpointType GetResolverEndpointTypeForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverEndpointType(ResolverEndpointType value);
} // namespace ResolverEndpointTypeMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
