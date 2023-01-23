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
  enum class SortTrialComponentsBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace SortTrialComponentsByMapper
{
AWS_SAGEMAKER_API SortTrialComponentsBy GetSortTrialComponentsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortTrialComponentsBy(SortTrialComponentsBy value);
} // namespace SortTrialComponentsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
