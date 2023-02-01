/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class Statistic
  {
    NOT_SET,
    SampleCount,
    Average,
    Sum,
    Minimum,
    Maximum
  };

namespace StatisticMapper
{
AWS_CLOUDWATCH_API Statistic GetStatisticForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForStatistic(Statistic value);
} // namespace StatisticMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
