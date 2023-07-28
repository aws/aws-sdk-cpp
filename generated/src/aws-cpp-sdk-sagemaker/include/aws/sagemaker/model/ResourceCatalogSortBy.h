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
  enum class ResourceCatalogSortBy
  {
    NOT_SET,
    CreationTime
  };

namespace ResourceCatalogSortByMapper
{
AWS_SAGEMAKER_API ResourceCatalogSortBy GetResourceCatalogSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForResourceCatalogSortBy(ResourceCatalogSortBy value);
} // namespace ResourceCatalogSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
