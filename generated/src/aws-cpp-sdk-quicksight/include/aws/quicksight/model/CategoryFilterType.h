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
  enum class CategoryFilterType
  {
    NOT_SET,
    CUSTOM_FILTER,
    CUSTOM_FILTER_LIST,
    FILTER_LIST
  };

namespace CategoryFilterTypeMapper
{
AWS_QUICKSIGHT_API CategoryFilterType GetCategoryFilterTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCategoryFilterType(CategoryFilterType value);
} // namespace CategoryFilterTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
