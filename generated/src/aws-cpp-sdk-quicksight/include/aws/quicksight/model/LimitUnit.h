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
enum class LimitUnit { NOT_SET, MB, GB, HOURS, DAYS };

namespace LimitUnitMapper {
AWS_QUICKSIGHT_API LimitUnit GetLimitUnitForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLimitUnit(LimitUnit value);
}  // namespace LimitUnitMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
