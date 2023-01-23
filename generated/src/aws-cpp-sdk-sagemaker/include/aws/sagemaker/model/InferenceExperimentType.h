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
  enum class InferenceExperimentType
  {
    NOT_SET,
    ShadowMode
  };

namespace InferenceExperimentTypeMapper
{
AWS_SAGEMAKER_API InferenceExperimentType GetInferenceExperimentTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceExperimentType(InferenceExperimentType value);
} // namespace InferenceExperimentTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
