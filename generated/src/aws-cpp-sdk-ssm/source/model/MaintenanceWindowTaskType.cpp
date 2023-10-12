/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowTaskType.h>
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
      namespace MaintenanceWindowTaskTypeMapper
      {

        static constexpr uint32_t RUN_COMMAND_HASH = ConstExprHashingUtils::HashString("RUN_COMMAND");
        static constexpr uint32_t AUTOMATION_HASH = ConstExprHashingUtils::HashString("AUTOMATION");
        static constexpr uint32_t STEP_FUNCTIONS_HASH = ConstExprHashingUtils::HashString("STEP_FUNCTIONS");
        static constexpr uint32_t LAMBDA_HASH = ConstExprHashingUtils::HashString("LAMBDA");


        MaintenanceWindowTaskType GetMaintenanceWindowTaskTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUN_COMMAND_HASH)
          {
            return MaintenanceWindowTaskType::RUN_COMMAND;
          }
          else if (hashCode == AUTOMATION_HASH)
          {
            return MaintenanceWindowTaskType::AUTOMATION;
          }
          else if (hashCode == STEP_FUNCTIONS_HASH)
          {
            return MaintenanceWindowTaskType::STEP_FUNCTIONS;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return MaintenanceWindowTaskType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowTaskType>(hashCode);
          }

          return MaintenanceWindowTaskType::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowTaskType(MaintenanceWindowTaskType enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowTaskType::NOT_SET:
            return {};
          case MaintenanceWindowTaskType::RUN_COMMAND:
            return "RUN_COMMAND";
          case MaintenanceWindowTaskType::AUTOMATION:
            return "AUTOMATION";
          case MaintenanceWindowTaskType::STEP_FUNCTIONS:
            return "STEP_FUNCTIONS";
          case MaintenanceWindowTaskType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowTaskTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
