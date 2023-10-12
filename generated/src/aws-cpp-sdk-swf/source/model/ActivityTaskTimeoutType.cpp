/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ActivityTaskTimeoutType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace ActivityTaskTimeoutTypeMapper
      {

        static constexpr uint32_t START_TO_CLOSE_HASH = ConstExprHashingUtils::HashString("START_TO_CLOSE");
        static constexpr uint32_t SCHEDULE_TO_START_HASH = ConstExprHashingUtils::HashString("SCHEDULE_TO_START");
        static constexpr uint32_t SCHEDULE_TO_CLOSE_HASH = ConstExprHashingUtils::HashString("SCHEDULE_TO_CLOSE");
        static constexpr uint32_t HEARTBEAT_HASH = ConstExprHashingUtils::HashString("HEARTBEAT");


        ActivityTaskTimeoutType GetActivityTaskTimeoutTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_TO_CLOSE_HASH)
          {
            return ActivityTaskTimeoutType::START_TO_CLOSE;
          }
          else if (hashCode == SCHEDULE_TO_START_HASH)
          {
            return ActivityTaskTimeoutType::SCHEDULE_TO_START;
          }
          else if (hashCode == SCHEDULE_TO_CLOSE_HASH)
          {
            return ActivityTaskTimeoutType::SCHEDULE_TO_CLOSE;
          }
          else if (hashCode == HEARTBEAT_HASH)
          {
            return ActivityTaskTimeoutType::HEARTBEAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityTaskTimeoutType>(hashCode);
          }

          return ActivityTaskTimeoutType::NOT_SET;
        }

        Aws::String GetNameForActivityTaskTimeoutType(ActivityTaskTimeoutType enumValue)
        {
          switch(enumValue)
          {
          case ActivityTaskTimeoutType::NOT_SET:
            return {};
          case ActivityTaskTimeoutType::START_TO_CLOSE:
            return "START_TO_CLOSE";
          case ActivityTaskTimeoutType::SCHEDULE_TO_START:
            return "SCHEDULE_TO_START";
          case ActivityTaskTimeoutType::SCHEDULE_TO_CLOSE:
            return "SCHEDULE_TO_CLOSE";
          case ActivityTaskTimeoutType::HEARTBEAT:
            return "HEARTBEAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityTaskTimeoutTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
