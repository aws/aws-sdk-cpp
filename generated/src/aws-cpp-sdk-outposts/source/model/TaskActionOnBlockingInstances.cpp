/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/TaskActionOnBlockingInstances.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace TaskActionOnBlockingInstancesMapper
      {

        static const int WAIT_FOR_EVACUATION_HASH = HashingUtils::HashString("WAIT_FOR_EVACUATION");
        static const int FAIL_TASK_HASH = HashingUtils::HashString("FAIL_TASK");


        TaskActionOnBlockingInstances GetTaskActionOnBlockingInstancesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAIT_FOR_EVACUATION_HASH)
          {
            return TaskActionOnBlockingInstances::WAIT_FOR_EVACUATION;
          }
          else if (hashCode == FAIL_TASK_HASH)
          {
            return TaskActionOnBlockingInstances::FAIL_TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskActionOnBlockingInstances>(hashCode);
          }

          return TaskActionOnBlockingInstances::NOT_SET;
        }

        Aws::String GetNameForTaskActionOnBlockingInstances(TaskActionOnBlockingInstances enumValue)
        {
          switch(enumValue)
          {
          case TaskActionOnBlockingInstances::NOT_SET:
            return {};
          case TaskActionOnBlockingInstances::WAIT_FOR_EVACUATION:
            return "WAIT_FOR_EVACUATION";
          case TaskActionOnBlockingInstances::FAIL_TASK:
            return "FAIL_TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskActionOnBlockingInstancesMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
