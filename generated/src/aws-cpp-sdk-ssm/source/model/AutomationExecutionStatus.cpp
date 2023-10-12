/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationExecutionStatus.h>
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
      namespace AutomationExecutionStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Waiting_HASH = ConstExprHashingUtils::HashString("Waiting");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t PendingApproval_HASH = ConstExprHashingUtils::HashString("PendingApproval");
        static constexpr uint32_t Approved_HASH = ConstExprHashingUtils::HashString("Approved");
        static constexpr uint32_t Rejected_HASH = ConstExprHashingUtils::HashString("Rejected");
        static constexpr uint32_t Scheduled_HASH = ConstExprHashingUtils::HashString("Scheduled");
        static constexpr uint32_t RunbookInProgress_HASH = ConstExprHashingUtils::HashString("RunbookInProgress");
        static constexpr uint32_t PendingChangeCalendarOverride_HASH = ConstExprHashingUtils::HashString("PendingChangeCalendarOverride");
        static constexpr uint32_t ChangeCalendarOverrideApproved_HASH = ConstExprHashingUtils::HashString("ChangeCalendarOverrideApproved");
        static constexpr uint32_t ChangeCalendarOverrideRejected_HASH = ConstExprHashingUtils::HashString("ChangeCalendarOverrideRejected");
        static constexpr uint32_t CompletedWithSuccess_HASH = ConstExprHashingUtils::HashString("CompletedWithSuccess");
        static constexpr uint32_t CompletedWithFailure_HASH = ConstExprHashingUtils::HashString("CompletedWithFailure");


        AutomationExecutionStatus GetAutomationExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return AutomationExecutionStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AutomationExecutionStatus::InProgress;
          }
          else if (hashCode == Waiting_HASH)
          {
            return AutomationExecutionStatus::Waiting;
          }
          else if (hashCode == Success_HASH)
          {
            return AutomationExecutionStatus::Success;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return AutomationExecutionStatus::TimedOut;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return AutomationExecutionStatus::Cancelling;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return AutomationExecutionStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutomationExecutionStatus::Failed;
          }
          else if (hashCode == PendingApproval_HASH)
          {
            return AutomationExecutionStatus::PendingApproval;
          }
          else if (hashCode == Approved_HASH)
          {
            return AutomationExecutionStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return AutomationExecutionStatus::Rejected;
          }
          else if (hashCode == Scheduled_HASH)
          {
            return AutomationExecutionStatus::Scheduled;
          }
          else if (hashCode == RunbookInProgress_HASH)
          {
            return AutomationExecutionStatus::RunbookInProgress;
          }
          else if (hashCode == PendingChangeCalendarOverride_HASH)
          {
            return AutomationExecutionStatus::PendingChangeCalendarOverride;
          }
          else if (hashCode == ChangeCalendarOverrideApproved_HASH)
          {
            return AutomationExecutionStatus::ChangeCalendarOverrideApproved;
          }
          else if (hashCode == ChangeCalendarOverrideRejected_HASH)
          {
            return AutomationExecutionStatus::ChangeCalendarOverrideRejected;
          }
          else if (hashCode == CompletedWithSuccess_HASH)
          {
            return AutomationExecutionStatus::CompletedWithSuccess;
          }
          else if (hashCode == CompletedWithFailure_HASH)
          {
            return AutomationExecutionStatus::CompletedWithFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationExecutionStatus>(hashCode);
          }

          return AutomationExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForAutomationExecutionStatus(AutomationExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomationExecutionStatus::NOT_SET:
            return {};
          case AutomationExecutionStatus::Pending:
            return "Pending";
          case AutomationExecutionStatus::InProgress:
            return "InProgress";
          case AutomationExecutionStatus::Waiting:
            return "Waiting";
          case AutomationExecutionStatus::Success:
            return "Success";
          case AutomationExecutionStatus::TimedOut:
            return "TimedOut";
          case AutomationExecutionStatus::Cancelling:
            return "Cancelling";
          case AutomationExecutionStatus::Cancelled:
            return "Cancelled";
          case AutomationExecutionStatus::Failed:
            return "Failed";
          case AutomationExecutionStatus::PendingApproval:
            return "PendingApproval";
          case AutomationExecutionStatus::Approved:
            return "Approved";
          case AutomationExecutionStatus::Rejected:
            return "Rejected";
          case AutomationExecutionStatus::Scheduled:
            return "Scheduled";
          case AutomationExecutionStatus::RunbookInProgress:
            return "RunbookInProgress";
          case AutomationExecutionStatus::PendingChangeCalendarOverride:
            return "PendingChangeCalendarOverride";
          case AutomationExecutionStatus::ChangeCalendarOverrideApproved:
            return "ChangeCalendarOverrideApproved";
          case AutomationExecutionStatus::ChangeCalendarOverrideRejected:
            return "ChangeCalendarOverrideRejected";
          case AutomationExecutionStatus::CompletedWithSuccess:
            return "CompletedWithSuccess";
          case AutomationExecutionStatus::CompletedWithFailure:
            return "CompletedWithFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationExecutionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
