/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/TaskState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace TaskStateMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        TaskState GetTaskStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return TaskState::IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return TaskState::CANCELED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TaskState::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskState>(hashCode);
          }

          return TaskState::NOT_SET;
        }

        Aws::String GetNameForTaskState(TaskState enumValue)
        {
          switch(enumValue)
          {
          case TaskState::NOT_SET:
            return {};
          case TaskState::IN_PROGRESS:
            return "IN_PROGRESS";
          case TaskState::CANCELED:
            return "CANCELED";
          case TaskState::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskStateMapper
    } // namespace Model
  } // namespace SnowDeviceManagement
} // namespace Aws
