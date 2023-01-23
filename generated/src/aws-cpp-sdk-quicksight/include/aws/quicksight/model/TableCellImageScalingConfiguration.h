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
  enum class TableCellImageScalingConfiguration
  {
    NOT_SET,
    FIT_TO_CELL_HEIGHT,
    FIT_TO_CELL_WIDTH,
    DO_NOT_SCALE
  };

namespace TableCellImageScalingConfigurationMapper
{
AWS_QUICKSIGHT_API TableCellImageScalingConfiguration GetTableCellImageScalingConfigurationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTableCellImageScalingConfiguration(TableCellImageScalingConfiguration value);
} // namespace TableCellImageScalingConfigurationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
