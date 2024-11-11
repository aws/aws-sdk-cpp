/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class AWSServiceName
  {
    NOT_SET,
    AWS,
    EC2,
    ELASTICACHE,
    ELB,
    RDS,
    ROUTE53
  };

namespace AWSServiceNameMapper
{
AWS_OUTPOSTS_API AWSServiceName GetAWSServiceNameForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForAWSServiceName(AWSServiceName value);
} // namespace AWSServiceNameMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
