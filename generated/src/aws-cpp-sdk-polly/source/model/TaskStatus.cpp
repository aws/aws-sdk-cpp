/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace TaskStatusMapper
      {

        static const int scheduled_HASH = HashingUtils::HashString("scheduled");
        static const int inProgress_HASH = HashingUtils::HashString("inProgress");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int failed_HASH = HashingUtils::HashString("failed");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == scheduled_HASH)
          {
            return TaskStatus::scheduled;
          }
          else if (hashCode == inProgress_HASH)
          {
            return TaskStatus::inProgress;
          }
          else if (hashCode == completed_HASH)
          {
            return TaskStatus::completed;
          }
          else if (hashCode == failed_HASH)
          {
            return TaskStatus::failed;
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
          case TaskStatus::scheduled:
            return "scheduled";
          case TaskStatus::inProgress:
            return "inProgress";
          case TaskStatus::completed:
            return "completed";
          case TaskStatus::failed:
            return "failed";
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
  } // namespace Polly
} // namespace Aws
