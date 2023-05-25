/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{
  enum class MetricDestination
  {
    NOT_SET,
    CloudWatch,
    Evidently
  };

namespace MetricDestinationMapper
{
AWS_CLOUDWATCHRUM_API MetricDestination GetMetricDestinationForName(const Aws::String& name);

AWS_CLOUDWATCHRUM_API Aws::String GetNameForMetricDestination(MetricDestination value);
} // namespace MetricDestinationMapper
} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
