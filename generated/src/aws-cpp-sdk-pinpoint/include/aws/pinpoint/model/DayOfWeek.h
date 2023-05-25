/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class DayOfWeek
  {
    NOT_SET,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
  };

namespace DayOfWeekMapper
{
AWS_PINPOINT_API DayOfWeek GetDayOfWeekForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForDayOfWeek(DayOfWeek value);
} // namespace DayOfWeekMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
