/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ScheduleActivityTaskFailedCause.h>
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
      namespace ScheduleActivityTaskFailedCauseMapper
      {

        static constexpr uint32_t ACTIVITY_TYPE_DEPRECATED_HASH = ConstExprHashingUtils::HashString("ACTIVITY_TYPE_DEPRECATED");
        static constexpr uint32_t ACTIVITY_TYPE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ACTIVITY_TYPE_DOES_NOT_EXIST");
        static constexpr uint32_t ACTIVITY_ID_ALREADY_IN_USE_HASH = ConstExprHashingUtils::HashString("ACTIVITY_ID_ALREADY_IN_USE");
        static constexpr uint32_t OPEN_ACTIVITIES_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OPEN_ACTIVITIES_LIMIT_EXCEEDED");
        static constexpr uint32_t ACTIVITY_CREATION_RATE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ACTIVITY_CREATION_RATE_EXCEEDED");
        static constexpr uint32_t DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED");
        static constexpr uint32_t DEFAULT_TASK_LIST_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_TASK_LIST_UNDEFINED");
        static constexpr uint32_t DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED");
        static constexpr uint32_t DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED");
        static constexpr uint32_t DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED");
        static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OPERATION_NOT_PERMITTED");


        ScheduleActivityTaskFailedCause GetScheduleActivityTaskFailedCauseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVITY_TYPE_DEPRECATED_HASH)
          {
            return ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DEPRECATED;
          }
          else if (hashCode == ACTIVITY_TYPE_DOES_NOT_EXIST_HASH)
          {
            return ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DOES_NOT_EXIST;
          }
          else if (hashCode == ACTIVITY_ID_ALREADY_IN_USE_HASH)
          {
            return ScheduleActivityTaskFailedCause::ACTIVITY_ID_ALREADY_IN_USE;
          }
          else if (hashCode == OPEN_ACTIVITIES_LIMIT_EXCEEDED_HASH)
          {
            return ScheduleActivityTaskFailedCause::OPEN_ACTIVITIES_LIMIT_EXCEEDED;
          }
          else if (hashCode == ACTIVITY_CREATION_RATE_EXCEEDED_HASH)
          {
            return ScheduleActivityTaskFailedCause::ACTIVITY_CREATION_RATE_EXCEEDED;
          }
          else if (hashCode == DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
          {
            return ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_TASK_LIST_UNDEFINED_HASH)
          {
            return ScheduleActivityTaskFailedCause::DEFAULT_TASK_LIST_UNDEFINED;
          }
          else if (hashCode == DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED_HASH)
          {
            return ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
          {
            return ScheduleActivityTaskFailedCause::DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED_HASH)
          {
            return ScheduleActivityTaskFailedCause::DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return ScheduleActivityTaskFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleActivityTaskFailedCause>(hashCode);
          }

          return ScheduleActivityTaskFailedCause::NOT_SET;
        }

        Aws::String GetNameForScheduleActivityTaskFailedCause(ScheduleActivityTaskFailedCause enumValue)
        {
          switch(enumValue)
          {
          case ScheduleActivityTaskFailedCause::NOT_SET:
            return {};
          case ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DEPRECATED:
            return "ACTIVITY_TYPE_DEPRECATED";
          case ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DOES_NOT_EXIST:
            return "ACTIVITY_TYPE_DOES_NOT_EXIST";
          case ScheduleActivityTaskFailedCause::ACTIVITY_ID_ALREADY_IN_USE:
            return "ACTIVITY_ID_ALREADY_IN_USE";
          case ScheduleActivityTaskFailedCause::OPEN_ACTIVITIES_LIMIT_EXCEEDED:
            return "OPEN_ACTIVITIES_LIMIT_EXCEEDED";
          case ScheduleActivityTaskFailedCause::ACTIVITY_CREATION_RATE_EXCEEDED:
            return "ACTIVITY_CREATION_RATE_EXCEEDED";
          case ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED:
            return "DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED";
          case ScheduleActivityTaskFailedCause::DEFAULT_TASK_LIST_UNDEFINED:
            return "DEFAULT_TASK_LIST_UNDEFINED";
          case ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED:
            return "DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED";
          case ScheduleActivityTaskFailedCause::DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED:
            return "DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED";
          case ScheduleActivityTaskFailedCause::DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED:
            return "DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED";
          case ScheduleActivityTaskFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleActivityTaskFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
