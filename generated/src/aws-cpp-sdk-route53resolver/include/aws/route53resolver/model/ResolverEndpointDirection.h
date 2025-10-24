﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

namespace Aws {
namespace Route53Resolver {
namespace Model {
enum class ResolverEndpointDirection { NOT_SET, INBOUND, OUTBOUND, INBOUND_DELEGATION };

namespace ResolverEndpointDirectionMapper {
AWS_ROUTE53RESOLVER_API ResolverEndpointDirection GetResolverEndpointDirectionForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverEndpointDirection(ResolverEndpointDirection value);
}  // namespace ResolverEndpointDirectionMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
