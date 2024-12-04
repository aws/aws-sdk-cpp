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
  enum class SortClusterSchedulerConfigBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace SortClusterSchedulerConfigByMapper
{
AWS_SAGEMAKER_API SortClusterSchedulerConfigBy GetSortClusterSchedulerConfigByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortClusterSchedulerConfigBy(SortClusterSchedulerConfigBy value);
} // namespace SortClusterSchedulerConfigByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
