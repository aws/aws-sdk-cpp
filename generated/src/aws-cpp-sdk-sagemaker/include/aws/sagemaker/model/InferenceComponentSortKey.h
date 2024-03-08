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
  enum class InferenceComponentSortKey
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace InferenceComponentSortKeyMapper
{
AWS_SAGEMAKER_API InferenceComponentSortKey GetInferenceComponentSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceComponentSortKey(InferenceComponentSortKey value);
} // namespace InferenceComponentSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
