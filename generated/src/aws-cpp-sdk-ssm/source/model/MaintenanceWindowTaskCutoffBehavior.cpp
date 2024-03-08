/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowTaskCutoffBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace MaintenanceWindowTaskCutoffBehaviorMapper
      {

        static const int CONTINUE_TASK_HASH = HashingUtils::HashString("CONTINUE_TASK");
        static const int CANCEL_TASK_HASH = HashingUtils::HashString("CANCEL_TASK");


        MaintenanceWindowTaskCutoffBehavior GetMaintenanceWindowTaskCutoffBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_TASK_HASH)
          {
            return MaintenanceWindowTaskCutoffBehavior::CONTINUE_TASK;
          }
          else if (hashCode == CANCEL_TASK_HASH)
          {
            return MaintenanceWindowTaskCutoffBehavior::CANCEL_TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowTaskCutoffBehavior>(hashCode);
          }

          return MaintenanceWindowTaskCutoffBehavior::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowTaskCutoffBehavior(MaintenanceWindowTaskCutoffBehavior enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowTaskCutoffBehavior::NOT_SET:
            return {};
          case MaintenanceWindowTaskCutoffBehavior::CONTINUE_TASK:
            return "CONTINUE_TASK";
          case MaintenanceWindowTaskCutoffBehavior::CANCEL_TASK:
            return "CANCEL_TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowTaskCutoffBehaviorMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
