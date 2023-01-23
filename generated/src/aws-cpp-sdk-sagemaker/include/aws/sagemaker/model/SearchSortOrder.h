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
  enum class SearchSortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace SearchSortOrderMapper
{
AWS_SAGEMAKER_API SearchSortOrder GetSearchSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSearchSortOrder(SearchSortOrder value);
} // namespace SearchSortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
