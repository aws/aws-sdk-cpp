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
  enum class ColumnOrderingType
  {
    NOT_SET,
    GREATER_IS_BETTER,
    LESSER_IS_BETTER,
    SPECIFIED
  };

namespace ColumnOrderingTypeMapper
{
AWS_QUICKSIGHT_API ColumnOrderingType GetColumnOrderingTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColumnOrderingType(ColumnOrderingType value);
} // namespace ColumnOrderingTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
