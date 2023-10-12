/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CommandStatus.h>
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
      namespace CommandStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");


        CommandStatus GetCommandStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return CommandStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return CommandStatus::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return CommandStatus::Success;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return CommandStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return CommandStatus::Failed;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return CommandStatus::TimedOut;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return CommandStatus::Cancelling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandStatus>(hashCode);
          }

          return CommandStatus::NOT_SET;
        }

        Aws::String GetNameForCommandStatus(CommandStatus enumValue)
        {
          switch(enumValue)
          {
          case CommandStatus::NOT_SET:
            return {};
          case CommandStatus::Pending:
            return "Pending";
          case CommandStatus::InProgress:
            return "InProgress";
          case CommandStatus::Success:
            return "Success";
          case CommandStatus::Cancelled:
            return "Cancelled";
          case CommandStatus::Failed:
            return "Failed";
          case CommandStatus::TimedOut:
            return "TimedOut";
          case CommandStatus::Cancelling:
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

      } // namespace CommandStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
