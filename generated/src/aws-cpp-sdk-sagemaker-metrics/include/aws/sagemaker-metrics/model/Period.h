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
  enum class Period
  {
    NOT_SET,
    OneMinute,
    FiveMinute,
    OneHour,
    IterationNumber
  };

namespace PeriodMapper
{
AWS_SAGEMAKERMETRICS_API Period GetPeriodForName(const Aws::String& name);

AWS_SAGEMAKERMETRICS_API Aws::String GetNameForPeriod(Period value);
} // namespace PeriodMapper
} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
