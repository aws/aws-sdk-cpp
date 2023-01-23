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
  enum class LegendPosition
  {
    NOT_SET,
    AUTO,
    RIGHT,
    BOTTOM,
    TOP
  };

namespace LegendPositionMapper
{
AWS_QUICKSIGHT_API LegendPosition GetLegendPositionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLegendPosition(LegendPosition value);
} // namespace LegendPositionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
