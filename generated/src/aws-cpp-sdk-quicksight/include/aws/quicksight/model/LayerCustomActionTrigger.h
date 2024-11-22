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
  enum class LayerCustomActionTrigger
  {
    NOT_SET,
    DATA_POINT_CLICK,
    DATA_POINT_MENU
  };

namespace LayerCustomActionTriggerMapper
{
AWS_QUICKSIGHT_API LayerCustomActionTrigger GetLayerCustomActionTriggerForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLayerCustomActionTrigger(LayerCustomActionTrigger value);
} // namespace LayerCustomActionTriggerMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
