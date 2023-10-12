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

        static constexpr uint32_t Open_HASH = ConstExprHashingUtils::HashString("Open");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Resolved_HASH = ConstExprHashingUtils::HashString("Resolved");
        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t CompletedWithSuccess_HASH = ConstExprHashingUtils::HashString("CompletedWithSuccess");
        static constexpr uint32_t CompletedWithFailure_HASH = ConstExprHashingUtils::HashString("CompletedWithFailure");
        static constexpr uint32_t Scheduled_HASH = ConstExprHashingUtils::HashString("Scheduled");
        static constexpr uint32_t RunbookInProgress_HASH = ConstExprHashingUtils::HashString("RunbookInProgress");
        static constexpr uint32_t PendingChangeCalendarOverride_HASH = ConstExprHashingUtils::HashString("PendingChangeCalendarOverride");
        static constexpr uint32_t ChangeCalendarOverrideApproved_HASH = ConstExprHashingUtils::HashString("ChangeCalendarOverrideApproved");
        static constexpr uint32_t ChangeCalendarOverrideRejected_HASH = ConstExprHashingUtils::HashString("ChangeCalendarOverrideRejected");
        static constexpr uint32_t PendingApproval_HASH = ConstExprHashingUtils::HashString("PendingApproval");
        static constexpr uint32_t Approved_HASH = ConstExprHashingUtils::HashString("Approved");
        static constexpr uint32_t Rejected_HASH = ConstExprHashingUtils::HashString("Rejected");
        static constexpr uint32_t Closed_HASH = ConstExprHashingUtils::HashString("Closed");


        OpsItemStatus GetOpsItemStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
