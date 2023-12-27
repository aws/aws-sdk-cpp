/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicScheduleType.h>
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
      namespace TopicScheduleTypeMapper
      {

        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        TopicScheduleType GetTopicScheduleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURLY_HASH)
          {
            return TopicScheduleType::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return TopicScheduleType::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return TopicScheduleType::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return TopicScheduleType::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicScheduleType>(hashCode);
          }

          return TopicScheduleType::NOT_SET;
        }

        Aws::String GetNameForTopicScheduleType(TopicScheduleType enumValue)
        {
          switch(enumValue)
          {
          case TopicScheduleType::NOT_SET:
            return {};
          case TopicScheduleType::HOURLY:
            return "HOURLY";
          case TopicScheduleType::DAILY:
            return "DAILY";
          case TopicScheduleType::WEEKLY:
            return "WEEKLY";
          case TopicScheduleType::MONTHLY:
            return "MONTHLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicScheduleTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
