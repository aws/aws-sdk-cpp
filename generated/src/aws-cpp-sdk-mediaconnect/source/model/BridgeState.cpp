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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int DEPLOYING_HASH = HashingUtils::HashString("DEPLOYING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int START_FAILED_HASH = HashingUtils::HashString("START_FAILED");
        static const int START_PENDING_HASH = HashingUtils::HashString("START_PENDING");
        static const int STOP_FAILED_HASH = HashingUtils::HashString("STOP_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        BridgeState GetBridgeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
