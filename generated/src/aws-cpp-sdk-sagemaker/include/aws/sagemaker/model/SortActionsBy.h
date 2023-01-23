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
  enum class SortActionsBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace SortActionsByMapper
{
AWS_SAGEMAKER_API SortActionsBy GetSortActionsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortActionsBy(SortActionsBy value);
} // namespace SortActionsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
