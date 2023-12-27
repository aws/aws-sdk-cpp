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
  enum class MetricStreamOutputFormat
  {
    NOT_SET,
    json,
    opentelemetry0_7,
    opentelemetry1_0
  };

namespace MetricStreamOutputFormatMapper
{
AWS_CLOUDWATCH_API MetricStreamOutputFormat GetMetricStreamOutputFormatForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForMetricStreamOutputFormat(MetricStreamOutputFormat value);
} // namespace MetricStreamOutputFormatMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
