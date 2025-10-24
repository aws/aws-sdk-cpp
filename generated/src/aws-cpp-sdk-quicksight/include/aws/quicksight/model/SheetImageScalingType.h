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
enum class SheetImageScalingType { NOT_SET, SCALE_TO_WIDTH, SCALE_TO_HEIGHT, SCALE_TO_CONTAINER, SCALE_NONE };

namespace SheetImageScalingTypeMapper {
AWS_QUICKSIGHT_API SheetImageScalingType GetSheetImageScalingTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSheetImageScalingType(SheetImageScalingType value);
}  // namespace SheetImageScalingTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
