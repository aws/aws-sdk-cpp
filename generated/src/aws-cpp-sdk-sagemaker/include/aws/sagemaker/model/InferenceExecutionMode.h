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
  enum class InferenceExecutionMode
  {
    NOT_SET,
    Serial,
    Direct
  };

namespace InferenceExecutionModeMapper
{
AWS_SAGEMAKER_API InferenceExecutionMode GetInferenceExecutionModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceExecutionMode(InferenceExecutionMode value);
} // namespace InferenceExecutionModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
