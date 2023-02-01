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
  enum class SelectedTooltipType
  {
    NOT_SET,
    BASIC,
    DETAILED
  };

namespace SelectedTooltipTypeMapper
{
AWS_QUICKSIGHT_API SelectedTooltipType GetSelectedTooltipTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSelectedTooltipType(SelectedTooltipType value);
} // namespace SelectedTooltipTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
