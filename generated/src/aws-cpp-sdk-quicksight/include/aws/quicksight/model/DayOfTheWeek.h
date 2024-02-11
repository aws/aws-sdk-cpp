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
  enum class DayOfTheWeek
  {
    NOT_SET,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };

namespace DayOfTheWeekMapper
{
AWS_QUICKSIGHT_API DayOfTheWeek GetDayOfTheWeekForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDayOfTheWeek(DayOfTheWeek value);
} // namespace DayOfTheWeekMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
