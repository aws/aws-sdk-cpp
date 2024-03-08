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
  enum class ColumnDataSubType
  {
    NOT_SET,
    FLOAT,
    FIXED
  };

namespace ColumnDataSubTypeMapper
{
AWS_QUICKSIGHT_API ColumnDataSubType GetColumnDataSubTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColumnDataSubType(ColumnDataSubType value);
} // namespace ColumnDataSubTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
