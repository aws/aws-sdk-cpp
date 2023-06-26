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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Delayed_HASH = HashingUtils::HashString("Delayed");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");


        CommandInvocationStatus GetCommandInvocationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
