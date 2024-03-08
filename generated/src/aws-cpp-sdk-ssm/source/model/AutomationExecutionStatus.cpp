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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Waiting_HASH = HashingUtils::HashString("Waiting");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int PendingApproval_HASH = HashingUtils::HashString("PendingApproval");
        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int RunbookInProgress_HASH = HashingUtils::HashString("RunbookInProgress");
        static const int PendingChangeCalendarOverride_HASH = HashingUtils::HashString("PendingChangeCalendarOverride");
        static const int ChangeCalendarOverrideApproved_HASH = HashingUtils::HashString("ChangeCalendarOverrideApproved");
        static const int ChangeCalendarOverrideRejected_HASH = HashingUtils::HashString("ChangeCalendarOverrideRejected");
        static const int CompletedWithSuccess_HASH = HashingUtils::HashString("CompletedWithSuccess");
        static const int CompletedWithFailure_HASH = HashingUtils::HashString("CompletedWithFailure");
        static const int Exited_HASH = HashingUtils::HashString("Exited");


        AutomationExecutionStatus GetAutomationExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Exited_HASH)
          {
            return AutomationExecutionStatus::Exited;
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
          case AutomationExecutionStatus::Exited:
            return "Exited";
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
