/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class HostedZoneLimitType
  {
    NOT_SET,
    MAX_RRSETS_BY_ZONE,
    MAX_VPCS_ASSOCIATED_BY_ZONE
  };

namespace HostedZoneLimitTypeMapper
{
AWS_ROUTE53_API HostedZoneLimitType GetHostedZoneLimitTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForHostedZoneLimitType(HostedZoneLimitType value);
} // namespace HostedZoneLimitTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
