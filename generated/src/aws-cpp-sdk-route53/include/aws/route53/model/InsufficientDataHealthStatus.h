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
  enum class InsufficientDataHealthStatus
  {
    NOT_SET,
    Healthy,
    Unhealthy,
    LastKnownStatus
  };

namespace InsufficientDataHealthStatusMapper
{
AWS_ROUTE53_API InsufficientDataHealthStatus GetInsufficientDataHealthStatusForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForInsufficientDataHealthStatus(InsufficientDataHealthStatus value);
} // namespace InsufficientDataHealthStatusMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
