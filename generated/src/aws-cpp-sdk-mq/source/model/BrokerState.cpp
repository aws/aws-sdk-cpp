/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BrokerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace BrokerStateMapper
      {

        static constexpr uint32_t CREATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATION_IN_PROGRESS");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t DELETION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETION_IN_PROGRESS");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t REBOOT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("REBOOT_IN_PROGRESS");
        static constexpr uint32_t CRITICAL_ACTION_REQUIRED_HASH = ConstExprHashingUtils::HashString("CRITICAL_ACTION_REQUIRED");
        static constexpr uint32_t REPLICA_HASH = ConstExprHashingUtils::HashString("REPLICA");


        BrokerState GetBrokerStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return BrokerState::CREATION_IN_PROGRESS;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return BrokerState::CREATION_FAILED;
          }
          else if (hashCode == DELETION_IN_PROGRESS_HASH)
          {
            return BrokerState::DELETION_IN_PROGRESS;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return BrokerState::RUNNING;
          }
          else if (hashCode == REBOOT_IN_PROGRESS_HASH)
          {
            return BrokerState::REBOOT_IN_PROGRESS;
          }
          else if (hashCode == CRITICAL_ACTION_REQUIRED_HASH)
          {
            return BrokerState::CRITICAL_ACTION_REQUIRED;
          }
          else if (hashCode == REPLICA_HASH)
          {
            return BrokerState::REPLICA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrokerState>(hashCode);
          }

          return BrokerState::NOT_SET;
        }

        Aws::String GetNameForBrokerState(BrokerState enumValue)
        {
          switch(enumValue)
          {
          case BrokerState::NOT_SET:
            return {};
          case BrokerState::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case BrokerState::CREATION_FAILED:
            return "CREATION_FAILED";
          case BrokerState::DELETION_IN_PROGRESS:
            return "DELETION_IN_PROGRESS";
          case BrokerState::RUNNING:
            return "RUNNING";
          case BrokerState::REBOOT_IN_PROGRESS:
            return "REBOOT_IN_PROGRESS";
          case BrokerState::CRITICAL_ACTION_REQUIRED:
            return "CRITICAL_ACTION_REQUIRED";
          case BrokerState::REPLICA:
            return "REPLICA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrokerStateMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
