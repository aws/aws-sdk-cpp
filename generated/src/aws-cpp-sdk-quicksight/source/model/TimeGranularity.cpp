/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TimeGranularity.h>
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
      namespace TimeGranularityMapper
      {

        static const int YEAR_HASH = HashingUtils::HashString("YEAR");
        static const int QUARTER_HASH = HashingUtils::HashString("QUARTER");
        static const int MONTH_HASH = HashingUtils::HashString("MONTH");
        static const int WEEK_HASH = HashingUtils::HashString("WEEK");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int MINUTE_HASH = HashingUtils::HashString("MINUTE");
        static const int SECOND_HASH = HashingUtils::HashString("SECOND");
        static const int MILLISECOND_HASH = HashingUtils::HashString("MILLISECOND");


        TimeGranularity GetTimeGranularityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YEAR_HASH)
          {
            return TimeGranularity::YEAR;
          }
          else if (hashCode == QUARTER_HASH)
          {
            return TimeGranularity::QUARTER;
          }
          else if (hashCode == MONTH_HASH)
          {
            return TimeGranularity::MONTH;
          }
          else if (hashCode == WEEK_HASH)
          {
            return TimeGranularity::WEEK;
          }
          else if (hashCode == DAY_HASH)
          {
            return TimeGranularity::DAY;
          }
          else if (hashCode == HOUR_HASH)
          {
            return TimeGranularity::HOUR;
          }
          else if (hashCode == MINUTE_HASH)
          {
            return TimeGranularity::MINUTE;
          }
          else if (hashCode == SECOND_HASH)
          {
            return TimeGranularity::SECOND;
          }
          else if (hashCode == MILLISECOND_HASH)
          {
            return TimeGranularity::MILLISECOND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeGranularity>(hashCode);
          }

          return TimeGranularity::NOT_SET;
        }

        Aws::String GetNameForTimeGranularity(TimeGranularity enumValue)
        {
          switch(enumValue)
          {
          case TimeGranularity::YEAR:
            return "YEAR";
          case TimeGranularity::QUARTER:
            return "QUARTER";
          case TimeGranularity::MONTH:
            return "MONTH";
          case TimeGranularity::WEEK:
            return "WEEK";
          case TimeGranularity::DAY:
            return "DAY";
          case TimeGranularity::HOUR:
            return "HOUR";
          case TimeGranularity::MINUTE:
            return "MINUTE";
          case TimeGranularity::SECOND:
            return "SECOND";
          case TimeGranularity::MILLISECOND:
            return "MILLISECOND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeGranularityMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
