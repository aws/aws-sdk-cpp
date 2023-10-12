/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
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
      namespace MaintenanceWindowExecutionStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t SKIPPED_OVERLAPPING_HASH = ConstExprHashingUtils::HashString("SKIPPED_OVERLAPPING");


        MaintenanceWindowExecutionStatus GetMaintenanceWindowExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MaintenanceWindowExecutionStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MaintenanceWindowExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return MaintenanceWindowExecutionStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MaintenanceWindowExecutionStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return MaintenanceWindowExecutionStatus::TIMED_OUT;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return MaintenanceWindowExecutionStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return MaintenanceWindowExecutionStatus::CANCELLED;
          }
          else if (hashCode == SKIPPED_OVERLAPPING_HASH)
          {
            return MaintenanceWindowExecutionStatus::SKIPPED_OVERLAPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowExecutionStatus>(hashCode);
          }

          return MaintenanceWindowExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowExecutionStatus(MaintenanceWindowExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowExecutionStatus::NOT_SET:
            return {};
          case MaintenanceWindowExecutionStatus::PENDING:
            return "PENDING";
          case MaintenanceWindowExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MaintenanceWindowExecutionStatus::SUCCESS:
            return "SUCCESS";
          case MaintenanceWindowExecutionStatus::FAILED:
            return "FAILED";
          case MaintenanceWindowExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          case MaintenanceWindowExecutionStatus::CANCELLING:
            return "CANCELLING";
          case MaintenanceWindowExecutionStatus::CANCELLED:
            return "CANCELLED";
          case MaintenanceWindowExecutionStatus::SKIPPED_OVERLAPPING:
            return "SKIPPED_OVERLAPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowExecutionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
