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
  enum class SortPipelineExecutionsBy
  {
    NOT_SET,
    CreationTime,
    PipelineExecutionArn
  };

namespace SortPipelineExecutionsByMapper
{
AWS_SAGEMAKER_API SortPipelineExecutionsBy GetSortPipelineExecutionsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortPipelineExecutionsBy(SortPipelineExecutionsBy value);
} // namespace SortPipelineExecutionsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
