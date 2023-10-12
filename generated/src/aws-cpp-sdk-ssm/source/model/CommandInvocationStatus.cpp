/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CommandInvocationStatus.h>
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
      namespace CommandInvocationStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Delayed_HASH = ConstExprHashingUtils::HashString("Delayed");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");


        CommandInvocationStatus GetCommandInvocationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return CommandInvocationStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return CommandInvocationStatus::InProgress;
          }
          else if (hashCode == Delayed_HASH)
          {
            return CommandInvocationStatus::Delayed;
          }
          else if (hashCode == Success_HASH)
          {
            return CommandInvocationStatus::Success;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return CommandInvocationStatus::Cancelled;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return CommandInvocationStatus::TimedOut;
          }
          else if (hashCode == Failed_HASH)
          {
            return CommandInvocationStatus::Failed;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return CommandInvocationStatus::Cancelling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandInvocationStatus>(hashCode);
          }

          return CommandInvocationStatus::NOT_SET;
        }

        Aws::String GetNameForCommandInvocationStatus(CommandInvocationStatus enumValue)
        {
          switch(enumValue)
          {
          case CommandInvocationStatus::NOT_SET:
            return {};
          case CommandInvocationStatus::Pending:
            return "Pending";
          case CommandInvocationStatus::InProgress:
            return "InProgress";
          case CommandInvocationStatus::Delayed:
            return "Delayed";
          case CommandInvocationStatus::Success:
            return "Success";
          case CommandInvocationStatus::Cancelled:
            return "Cancelled";
          case CommandInvocationStatus::TimedOut:
            return "TimedOut";
          case CommandInvocationStatus::Failed:
            return "Failed";
          case CommandInvocationStatus::Cancelling:
            return "Cancelling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommandInvocationStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
