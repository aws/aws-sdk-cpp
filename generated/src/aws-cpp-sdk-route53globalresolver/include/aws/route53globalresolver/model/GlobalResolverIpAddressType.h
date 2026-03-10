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
enum class GlobalResolverIpAddressType { NOT_SET, IPV4, DUAL_STACK };

namespace GlobalResolverIpAddressTypeMapper {
AWS_ROUTE53GLOBALRESOLVER_API GlobalResolverIpAddressType GetGlobalResolverIpAddressTypeForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForGlobalResolverIpAddressType(GlobalResolverIpAddressType value);
}  // namespace GlobalResolverIpAddressTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
