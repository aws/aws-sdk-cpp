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
  enum class IpAddressStatus
  {
    NOT_SET,
    CREATING,
    FAILED_CREATION,
    ATTACHING,
    ATTACHED,
    REMAP_DETACHING,
    REMAP_ATTACHING,
    DETACHING,
    FAILED_RESOURCE_GONE,
    DELETING,
    DELETE_FAILED_FAS_EXPIRED
  };

namespace IpAddressStatusMapper
{
AWS_ROUTE53RESOLVER_API IpAddressStatus GetIpAddressStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForIpAddressStatus(IpAddressStatus value);
} // namespace IpAddressStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
