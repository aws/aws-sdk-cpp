/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class VisualCustomActionTrigger { NOT_SET, DATA_POINT_CLICK, DATA_POINT_MENU };

namespace VisualCustomActionTriggerMapper {
AWS_QUICKSIGHT_API VisualCustomActionTrigger GetVisualCustomActionTriggerForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVisualCustomActionTrigger(VisualCustomActionTrigger value);
}  // namespace VisualCustomActionTriggerMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
