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
  enum class BoxPlotFillStyle
  {
    NOT_SET,
    SOLID,
    TRANSPARENT
  };

namespace BoxPlotFillStyleMapper
{
AWS_QUICKSIGHT_API BoxPlotFillStyle GetBoxPlotFillStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForBoxPlotFillStyle(BoxPlotFillStyle value);
} // namespace BoxPlotFillStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
