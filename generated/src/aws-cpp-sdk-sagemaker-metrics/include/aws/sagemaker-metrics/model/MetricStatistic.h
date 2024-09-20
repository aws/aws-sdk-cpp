/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{
  enum class MetricStatistic
  {
    NOT_SET,
    Min,
    Max,
    Avg,
    Count,
    StdDev,
    Last
  };

namespace MetricStatisticMapper
{
AWS_SAGEMAKERMETRICS_API MetricStatistic GetMetricStatisticForName(const Aws::String& name);

AWS_SAGEMAKERMETRICS_API Aws::String GetNameForMetricStatistic(MetricStatistic value);
} // namespace MetricStatisticMapper
} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
