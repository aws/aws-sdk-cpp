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
  enum class SortPipelinesBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace SortPipelinesByMapper
{
AWS_SAGEMAKER_API SortPipelinesBy GetSortPipelinesByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortPipelinesBy(SortPipelinesBy value);
} // namespace SortPipelinesByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
