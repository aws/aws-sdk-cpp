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
  enum class ListOptimizationJobsSortBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace ListOptimizationJobsSortByMapper
{
AWS_SAGEMAKER_API ListOptimizationJobsSortBy GetListOptimizationJobsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListOptimizationJobsSortBy(ListOptimizationJobsSortBy value);
} // namespace ListOptimizationJobsSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
