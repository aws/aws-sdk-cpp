/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class CategoryFilterSelectAllOptions
  {
    NOT_SET,
    FILTER_ALL_VALUES
  };

namespace CategoryFilterSelectAllOptionsMapper
{
AWS_QUICKSIGHT_API CategoryFilterSelectAllOptions GetCategoryFilterSelectAllOptionsForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCategoryFilterSelectAllOptions(CategoryFilterSelectAllOptions value);
} // namespace CategoryFilterSelectAllOptionsMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
