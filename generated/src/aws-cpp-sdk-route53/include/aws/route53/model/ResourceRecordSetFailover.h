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
  enum class ResourceRecordSetFailover
  {
    NOT_SET,
    PRIMARY,
    SECONDARY
  };

namespace ResourceRecordSetFailoverMapper
{
AWS_ROUTE53_API ResourceRecordSetFailover GetResourceRecordSetFailoverForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForResourceRecordSetFailover(ResourceRecordSetFailover value);
} // namespace ResourceRecordSetFailoverMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
