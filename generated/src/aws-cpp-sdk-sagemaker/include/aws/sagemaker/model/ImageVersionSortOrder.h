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
  enum class ImageVersionSortOrder
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace ImageVersionSortOrderMapper
{
AWS_SAGEMAKER_API ImageVersionSortOrder GetImageVersionSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForImageVersionSortOrder(ImageVersionSortOrder value);
} // namespace ImageVersionSortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
