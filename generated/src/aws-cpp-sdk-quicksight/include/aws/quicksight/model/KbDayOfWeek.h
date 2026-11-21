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
enum class KbDayOfWeek { NOT_SET, SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

namespace KbDayOfWeekMapper {
AWS_QUICKSIGHT_API KbDayOfWeek GetKbDayOfWeekForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForKbDayOfWeek(KbDayOfWeek value);
}  // namespace KbDayOfWeekMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
