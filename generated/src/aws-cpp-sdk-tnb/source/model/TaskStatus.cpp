/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace TaskStatusMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return TaskStatus::SCHEDULED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return TaskStatus::STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TaskStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TaskStatus::COMPLETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TaskStatus::ERROR_;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return TaskStatus::SKIPPED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return TaskStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskStatus>(hashCode);
          }

          return TaskStatus::NOT_SET;
        }

        Aws::String GetNameForTaskStatus(TaskStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskStatus::NOT_SET:
            return {};
          case TaskStatus::SCHEDULED:
            return "SCHEDULED";
          case TaskStatus::STARTED:
            return "STARTED";
          case TaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case TaskStatus::COMPLETED:
            return "COMPLETED";
          case TaskStatus::ERROR_:
            return "ERROR";
          case TaskStatus::SKIPPED:
            return "SKIPPED";
          case TaskStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskStatusMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
