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

        static constexpr uint32_t YEAR_HASH = ConstExprHashingUtils::HashString("YEAR");
        static constexpr uint32_t QUARTER_HASH = ConstExprHashingUtils::HashString("QUARTER");
        static constexpr uint32_t MONTH_HASH = ConstExprHashingUtils::HashString("MONTH");
        static constexpr uint32_t WEEK_HASH = ConstExprHashingUtils::HashString("WEEK");
        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");
        static constexpr uint32_t HOUR_HASH = ConstExprHashingUtils::HashString("HOUR");
        static constexpr uint32_t MINUTE_HASH = ConstExprHashingUtils::HashString("MINUTE");
        static constexpr uint32_t SECOND_HASH = ConstExprHashingUtils::HashString("SECOND");
        static constexpr uint32_t MILLISECOND_HASH = ConstExprHashingUtils::HashString("MILLISECOND");


        TimeGranularity GetTimeGranularityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case TimeGranularity::NOT_SET:
            return {};
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
