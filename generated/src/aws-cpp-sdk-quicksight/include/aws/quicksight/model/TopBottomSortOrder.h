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
  enum class TopBottomSortOrder
  {
    NOT_SET,
    PERCENT_DIFFERENCE,
    ABSOLUTE_DIFFERENCE
  };

namespace TopBottomSortOrderMapper
{
AWS_QUICKSIGHT_API TopBottomSortOrder GetTopBottomSortOrderForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopBottomSortOrder(TopBottomSortOrder value);
} // namespace TopBottomSortOrderMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
