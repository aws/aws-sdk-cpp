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
  enum class CategoryFilterMatchOperator
  {
    NOT_SET,
    EQUALS,
    DOES_NOT_EQUAL,
    CONTAINS,
    DOES_NOT_CONTAIN,
    STARTS_WITH,
    ENDS_WITH
  };

namespace CategoryFilterMatchOperatorMapper
{
AWS_QUICKSIGHT_API CategoryFilterMatchOperator GetCategoryFilterMatchOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCategoryFilterMatchOperator(CategoryFilterMatchOperator value);
} // namespace CategoryFilterMatchOperatorMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
