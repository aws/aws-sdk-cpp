﻿/**
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
  enum class VisualHighlightTrigger
  {
    NOT_SET,
    DATA_POINT_CLICK,
    DATA_POINT_HOVER,
    NONE
  };

namespace VisualHighlightTriggerMapper
{
AWS_QUICKSIGHT_API VisualHighlightTrigger GetVisualHighlightTriggerForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVisualHighlightTrigger(VisualHighlightTrigger value);
} // namespace VisualHighlightTriggerMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
