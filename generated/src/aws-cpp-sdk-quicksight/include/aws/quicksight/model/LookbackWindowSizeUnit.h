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
enum class LookbackWindowSizeUnit { NOT_SET, HOUR, DAY, WEEK };

namespace LookbackWindowSizeUnitMapper {
AWS_QUICKSIGHT_API LookbackWindowSizeUnit GetLookbackWindowSizeUnitForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLookbackWindowSizeUnit(LookbackWindowSizeUnit value);
}  // namespace LookbackWindowSizeUnitMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
