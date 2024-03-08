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
  enum class TooltipTarget
  {
    NOT_SET,
    BOTH,
    BAR,
    LINE
  };

namespace TooltipTargetMapper
{
AWS_QUICKSIGHT_API TooltipTarget GetTooltipTargetForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTooltipTarget(TooltipTarget value);
} // namespace TooltipTargetMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
