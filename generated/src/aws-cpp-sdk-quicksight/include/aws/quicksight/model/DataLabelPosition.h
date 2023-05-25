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
  enum class DataLabelPosition
  {
    NOT_SET,
    INSIDE,
    OUTSIDE,
    LEFT,
    TOP,
    BOTTOM,
    RIGHT
  };

namespace DataLabelPositionMapper
{
AWS_QUICKSIGHT_API DataLabelPosition GetDataLabelPositionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataLabelPosition(DataLabelPosition value);
} // namespace DataLabelPositionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
