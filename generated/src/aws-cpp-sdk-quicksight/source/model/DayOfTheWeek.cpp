/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DayOfTheWeek.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DayOfTheWeekMapper
      {

        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");
        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");


        DayOfTheWeek GetDayOfTheWeekForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUNDAY_HASH)
          {
            return DayOfTheWeek::SUNDAY;
          }
          else if (hashCode == MONDAY_HASH)
          {
            return DayOfTheWeek::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return DayOfTheWeek::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return DayOfTheWeek::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return DayOfTheWeek::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return DayOfTheWeek::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return DayOfTheWeek::SATURDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DayOfTheWeek>(hashCode);
          }

          return DayOfTheWeek::NOT_SET;
        }

        Aws::String GetNameForDayOfTheWeek(DayOfTheWeek enumValue)
        {
          switch(enumValue)
          {
          case DayOfTheWeek::NOT_SET:
            return {};
          case DayOfTheWeek::SUNDAY:
            return "SUNDAY";
          case DayOfTheWeek::MONDAY:
            return "MONDAY";
          case DayOfTheWeek::TUESDAY:
            return "TUESDAY";
          case DayOfTheWeek::WEDNESDAY:
            return "WEDNESDAY";
          case DayOfTheWeek::THURSDAY:
            return "THURSDAY";
          case DayOfTheWeek::FRIDAY:
            return "FRIDAY";
          case DayOfTheWeek::SATURDAY:
            return "SATURDAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DayOfTheWeekMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
