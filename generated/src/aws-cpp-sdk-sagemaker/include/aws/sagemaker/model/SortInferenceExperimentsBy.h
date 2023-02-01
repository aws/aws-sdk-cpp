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
  enum class SortInferenceExperimentsBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace SortInferenceExperimentsByMapper
{
AWS_SAGEMAKER_API SortInferenceExperimentsBy GetSortInferenceExperimentsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortInferenceExperimentsBy(SortInferenceExperimentsBy value);
} // namespace SortInferenceExperimentsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
