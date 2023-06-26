/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class MetricSetSource
  {
    NOT_SET,
    Train,
    Validation,
    Test
  };

namespace MetricSetSourceMapper
{
AWS_SAGEMAKER_API MetricSetSource GetMetricSetSourceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMetricSetSource(MetricSetSource value);
} // namespace MetricSetSourceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
