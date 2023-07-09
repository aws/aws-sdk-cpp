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
  enum class AggregationTransformationValue
  {
    NOT_SET,
    sum,
    avg,
    first,
    min,
    max
  };

namespace AggregationTransformationValueMapper
{
AWS_SAGEMAKER_API AggregationTransformationValue GetAggregationTransformationValueForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAggregationTransformationValue(AggregationTransformationValue value);
} // namespace AggregationTransformationValueMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
