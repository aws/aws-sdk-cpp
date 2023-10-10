/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemStatus.h>
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
      namespace OpsItemStatusMapper
      {

        static const int Open_HASH = HashingUtils::HashString("Open");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Resolved_HASH = HashingUtils::HashString("Resolved");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int CompletedWithSuccess_HASH = HashingUtils::HashString("CompletedWithSuccess");
        static const int CompletedWithFailure_HASH = HashingUtils::HashString("CompletedWithFailure");
        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int RunbookInProgress_HASH = HashingUtils::HashString("RunbookInProgress");
        static const int PendingChangeCalendarOverride_HASH = HashingUtils::HashString("PendingChangeCalendarOverride");
        static const int ChangeCalendarOverrideApproved_HASH = HashingUtils::HashString("ChangeCalendarOverrideApproved");
        static const int ChangeCalendarOverrideRejected_HASH = HashingUtils::HashString("ChangeCalendarOverrideRejected");
        static const int PendingApproval_HASH = HashingUtils::HashString("PendingApproval");
        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int Closed_HASH = HashingUtils::HashString("Closed");


        OpsItemStatus GetOpsItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Open_HASH)
          {
            return OpsItemStatus::Open;
          }
          else if (hashCode == InProgress_HASH)
          {
            return OpsItemStatus::InProgress;
          }
          else if (hashCode == Resolved_HASH)
          {
            return OpsItemStatus::Resolved;
          }
          else if (hashCode == Pending_HASH)
          {
            return OpsItemStatus::Pending;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return OpsItemStatus::TimedOut;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return OpsItemStatus::Cancelling;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return OpsItemStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return OpsItemStatus::Failed;
          }
          else if (hashCode == CompletedWithSuccess_HASH)
          {
            return OpsItemStatus::CompletedWithSuccess;
          }
          else if (hashCode == CompletedWithFailure_HASH)
          {
            return OpsItemStatus::CompletedWithFailure;
          }
          else if (hashCode == Scheduled_HASH)
          {
            return OpsItemStatus::Scheduled;
          }
          else if (hashCode == RunbookInProgress_HASH)
          {
            return OpsItemStatus::RunbookInProgress;
          }
          else if (hashCode == PendingChangeCalendarOverride_HASH)
          {
            return OpsItemStatus::PendingChangeCalendarOverride;
          }
          else if (hashCode == ChangeCalendarOverrideApproved_HASH)
          {
            return OpsItemStatus::ChangeCalendarOverrideApproved;
          }
          else if (hashCode == ChangeCalendarOverrideRejected_HASH)
          {
            return OpsItemStatus::ChangeCalendarOverrideRejected;
          }
          else if (hashCode == PendingApproval_HASH)
          {
            return OpsItemStatus::PendingApproval;
          }
          else if (hashCode == Approved_HASH)
          {
            return OpsItemStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return OpsItemStatus::Rejected;
          }
          else if (hashCode == Closed_HASH)
          {
            return OpsItemStatus::Closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemStatus>(hashCode);
          }

          return OpsItemStatus::NOT_SET;
        }

        Aws::String GetNameForOpsItemStatus(OpsItemStatus enumValue)
        {
          switch(enumValue)
          {
          case OpsItemStatus::NOT_SET:
            return {};
          case OpsItemStatus::Open:
            return "Open";
          case OpsItemStatus::InProgress:
            return "InProgress";
          case OpsItemStatus::Resolved:
            return "Resolved";
          case OpsItemStatus::Pending:
            return "Pending";
          case OpsItemStatus::TimedOut:
            return "TimedOut";
          case OpsItemStatus::Cancelling:
            return "Cancelling";
          case OpsItemStatus::Cancelled:
            return "Cancelled";
          case OpsItemStatus::Failed:
            return "Failed";
          case OpsItemStatus::CompletedWithSuccess:
            return "CompletedWithSuccess";
          case OpsItemStatus::CompletedWithFailure:
            return "CompletedWithFailure";
          case OpsItemStatus::Scheduled:
            return "Scheduled";
          case OpsItemStatus::RunbookInProgress:
            return "RunbookInProgress";
          case OpsItemStatus::PendingChangeCalendarOverride:
            return "PendingChangeCalendarOverride";
          case OpsItemStatus::ChangeCalendarOverrideApproved:
            return "ChangeCalendarOverrideApproved";
          case OpsItemStatus::ChangeCalendarOverrideRejected:
            return "ChangeCalendarOverrideRejected";
          case OpsItemStatus::PendingApproval:
            return "PendingApproval";
          case OpsItemStatus::Approved:
            return "Approved";
          case OpsItemStatus::Rejected:
            return "Rejected";
          case OpsItemStatus::Closed:
            return "Closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
