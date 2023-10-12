/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicTimeGranularity.h>
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
      namespace TopicTimeGranularityMapper
      {

        static constexpr uint32_t SECOND_HASH = ConstExprHashingUtils::HashString("SECOND");
        static constexpr uint32_t MINUTE_HASH = ConstExprHashingUtils::HashString("MINUTE");
        static constexpr uint32_t HOUR_HASH = ConstExprHashingUtils::HashString("HOUR");
        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");
        static constexpr uint32_t WEEK_HASH = ConstExprHashingUtils::HashString("WEEK");
        static constexpr uint32_t MONTH_HASH = ConstExprHashingUtils::HashString("MONTH");
        static constexpr uint32_t QUARTER_HASH = ConstExprHashingUtils::HashString("QUARTER");
        static constexpr uint32_t YEAR_HASH = ConstExprHashingUtils::HashString("YEAR");


        TopicTimeGranularity GetTopicTimeGranularityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECOND_HASH)
          {
            return TopicTimeGranularity::SECOND;
          }
          else if (hashCode == MINUTE_HASH)
          {
            return TopicTimeGranularity::MINUTE;
          }
          else if (hashCode == HOUR_HASH)
          {
            return TopicTimeGranularity::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return TopicTimeGranularity::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return TopicTimeGranularity::WEEK;
          }
          else if (hashCode == MONTH_HASH)
          {
            return TopicTimeGranularity::MONTH;
          }
          else if (hashCode == QUARTER_HASH)
          {
            return TopicTimeGranularity::QUARTER;
          }
          else if (hashCode == YEAR_HASH)
          {
            return TopicTimeGranularity::YEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicTimeGranularity>(hashCode);
          }

          return TopicTimeGranularity::NOT_SET;
        }

        Aws::String GetNameForTopicTimeGranularity(TopicTimeGranularity enumValue)
        {
          switch(enumValue)
          {
          case TopicTimeGranularity::NOT_SET:
            return {};
          case TopicTimeGranularity::SECOND:
            return "SECOND";
          case TopicTimeGranularity::MINUTE:
            return "MINUTE";
          case TopicTimeGranularity::HOUR:
            return "HOUR";
          case TopicTimeGranularity::DAY:
            return "DAY";
          case TopicTimeGranularity::WEEK:
            return "WEEK";
          case TopicTimeGranularity::MONTH:
            return "MONTH";
          case TopicTimeGranularity::QUARTER:
            return "QUARTER";
          case TopicTimeGranularity::YEAR:
            return "YEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicTimeGranularityMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
