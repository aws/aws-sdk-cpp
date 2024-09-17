/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NetworkState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace NetworkStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        NetworkState GetNetworkStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NetworkState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return NetworkState::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return NetworkState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NetworkState::DELETING;
          }
          else if (hashCode == IDLE_HASH)
          {
            return NetworkState::IDLE;
          }
          else if (hashCode == IN_USE_HASH)
          {
            return NetworkState::IN_USE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return NetworkState::UPDATING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return NetworkState::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkState>(hashCode);
          }

          return NetworkState::NOT_SET;
        }

        Aws::String GetNameForNetworkState(NetworkState enumValue)
        {
          switch(enumValue)
          {
          case NetworkState::NOT_SET:
            return {};
          case NetworkState::CREATING:
            return "CREATING";
          case NetworkState::CREATE_FAILED:
            return "CREATE_FAILED";
          case NetworkState::ACTIVE:
            return "ACTIVE";
          case NetworkState::DELETING:
            return "DELETING";
          case NetworkState::IDLE:
            return "IDLE";
          case NetworkState::IN_USE:
            return "IN_USE";
          case NetworkState::UPDATING:
            return "UPDATING";
          case NetworkState::DELETE_FAILED:
            return "DELETE_FAILED";
          case NetworkState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
