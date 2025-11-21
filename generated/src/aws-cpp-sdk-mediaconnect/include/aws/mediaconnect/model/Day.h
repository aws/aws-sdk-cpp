/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class Day { NOT_SET, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

namespace DayMapper {
AWS_MEDIACONNECT_API Day GetDayForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDay(Day value);
}  // namespace DayMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
