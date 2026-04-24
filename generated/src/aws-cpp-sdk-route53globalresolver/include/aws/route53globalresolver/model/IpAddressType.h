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
enum class IpAddressType { NOT_SET, IPV4, IPV6 };

namespace IpAddressTypeMapper {
AWS_ROUTE53GLOBALRESOLVER_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForIpAddressType(IpAddressType value);
}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
