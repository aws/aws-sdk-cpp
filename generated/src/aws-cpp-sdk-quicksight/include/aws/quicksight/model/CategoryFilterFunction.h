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
  enum class CategoryFilterFunction
  {
    NOT_SET,
    EXACT,
    CONTAINS
  };

namespace CategoryFilterFunctionMapper
{
AWS_QUICKSIGHT_API CategoryFilterFunction GetCategoryFilterFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCategoryFilterFunction(CategoryFilterFunction value);
} // namespace CategoryFilterFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
