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
  enum class PanelBorderStyle
  {
    NOT_SET,
    SOLID,
    DASHED,
    DOTTED
  };

namespace PanelBorderStyleMapper
{
AWS_QUICKSIGHT_API PanelBorderStyle GetPanelBorderStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPanelBorderStyle(PanelBorderStyle value);
} // namespace PanelBorderStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
