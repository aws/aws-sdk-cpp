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
  enum class AnomalyDetectorType
  {
    NOT_SET,
    SINGLE_METRIC,
    METRIC_MATH
  };

namespace AnomalyDetectorTypeMapper
{
AWS_CLOUDWATCH_API AnomalyDetectorType GetAnomalyDetectorTypeForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForAnomalyDetectorType(AnomalyDetectorType value);
} // namespace AnomalyDetectorTypeMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
