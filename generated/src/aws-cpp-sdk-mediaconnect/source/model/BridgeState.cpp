/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BridgeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace BridgeStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t STANDBY_HASH = ConstExprHashingUtils::HashString("STANDBY");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t DEPLOYING_HASH = ConstExprHashingUtils::HashString("DEPLOYING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t START_FAILED_HASH = ConstExprHashingUtils::HashString("START_FAILED");
        static constexpr uint32_t START_PENDING_HASH = ConstExprHashingUtils::HashString("START_PENDING");
        static constexpr uint32_t STOP_FAILED_HASH = ConstExprHashingUtils::HashString("STOP_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        BridgeState GetBridgeStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return BridgeState::CREATING;
          }
          else if (hashCode == STANDBY_HASH)
          {
            return BridgeState::STANDBY;
          }
          else if (hashCode == STARTING_HASH)
          {
            return BridgeState::STARTING;
          }
          else if (hashCode == DEPLOYING_HASH)
          {
            return BridgeState::DEPLOYING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return BridgeState::ACTIVE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return BridgeState::STOPPING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return BridgeState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BridgeState::DELETED;
          }
          else if (hashCode == START_FAILED_HASH)
          {
            return BridgeState::START_FAILED;
          }
          else if (hashCode == START_PENDING_HASH)
          {
            return BridgeState::START_PENDING;
          }
          else if (hashCode == STOP_FAILED_HASH)
          {
            return BridgeState::STOP_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return BridgeState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BridgeState>(hashCode);
          }

          return BridgeState::NOT_SET;
        }

        Aws::String GetNameForBridgeState(BridgeState enumValue)
        {
          switch(enumValue)
          {
          case BridgeState::NOT_SET:
            return {};
          case BridgeState::CREATING:
            return "CREATING";
          case BridgeState::STANDBY:
            return "STANDBY";
          case BridgeState::STARTING:
            return "STARTING";
          case BridgeState::DEPLOYING:
            return "DEPLOYING";
          case BridgeState::ACTIVE:
            return "ACTIVE";
          case BridgeState::STOPPING:
            return "STOPPING";
          case BridgeState::DELETING:
            return "DELETING";
          case BridgeState::DELETED:
            return "DELETED";
          case BridgeState::START_FAILED:
            return "START_FAILED";
          case BridgeState::START_PENDING:
            return "START_PENDING";
          case BridgeState::STOP_FAILED:
            return "STOP_FAILED";
          case BridgeState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BridgeStateMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
