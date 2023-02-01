/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace TaskStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TaskStatus::PENDING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return TaskStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return TaskStatus::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return TaskStatus::STOPPING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TaskStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return TaskStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TaskStatus::FAILED;
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
          case TaskStatus::PENDING:
            return "PENDING";
          case TaskStatus::STARTING:
            return "STARTING";
          case TaskStatus::RUNNING:
            return "RUNNING";
          case TaskStatus::STOPPING:
            return "STOPPING";
          case TaskStatus::COMPLETED:
            return "COMPLETED";
          case TaskStatus::CANCELLED:
            return "CANCELLED";
          case TaskStatus::FAILED:
            return "FAILED";
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
  } // namespace Omics
} // namespace Aws
