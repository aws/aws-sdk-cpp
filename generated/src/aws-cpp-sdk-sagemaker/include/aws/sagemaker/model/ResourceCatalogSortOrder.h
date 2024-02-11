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
  enum class ResourceCatalogSortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace ResourceCatalogSortOrderMapper
{
AWS_SAGEMAKER_API ResourceCatalogSortOrder GetResourceCatalogSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForResourceCatalogSortOrder(ResourceCatalogSortOrder value);
} // namespace ResourceCatalogSortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
