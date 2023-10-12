/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace ConnectPeerStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ConnectPeerState GetConnectPeerStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConnectPeerState::CREATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectPeerState::FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ConnectPeerState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectPeerState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectPeerState>(hashCode);
          }

          return ConnectPeerState::NOT_SET;
        }

        Aws::String GetNameForConnectPeerState(ConnectPeerState enumValue)
        {
          switch(enumValue)
          {
          case ConnectPeerState::NOT_SET:
            return {};
          case ConnectPeerState::CREATING:
            return "CREATING";
          case ConnectPeerState::FAILED:
            return "FAILED";
          case ConnectPeerState::AVAILABLE:
            return "AVAILABLE";
          case ConnectPeerState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectPeerStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
