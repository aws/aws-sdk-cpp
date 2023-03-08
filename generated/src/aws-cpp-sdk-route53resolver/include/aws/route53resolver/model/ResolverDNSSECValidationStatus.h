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
  enum class ResolverDNSSECValidationStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED,
    UPDATING_TO_USE_LOCAL_RESOURCE_SETTING,
    USE_LOCAL_RESOURCE_SETTING
  };

namespace ResolverDNSSECValidationStatusMapper
{
AWS_ROUTE53RESOLVER_API ResolverDNSSECValidationStatus GetResolverDNSSECValidationStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverDNSSECValidationStatus(ResolverDNSSECValidationStatus value);
} // namespace ResolverDNSSECValidationStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
