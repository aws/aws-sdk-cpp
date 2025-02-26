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
  enum class InferenceComponentCapacitySizeType
  {
    NOT_SET,
    COPY_COUNT,
    CAPACITY_PERCENT
  };

namespace InferenceComponentCapacitySizeTypeMapper
{
AWS_SAGEMAKER_API InferenceComponentCapacitySizeType GetInferenceComponentCapacitySizeTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceComponentCapacitySizeType(InferenceComponentCapacitySizeType value);
} // namespace InferenceComponentCapacitySizeTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
