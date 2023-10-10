/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerAssociationState.h>
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
      namespace ConnectPeerAssociationStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ConnectPeerAssociationState GetConnectPeerAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ConnectPeerAssociationState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ConnectPeerAssociationState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectPeerAssociationState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ConnectPeerAssociationState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectPeerAssociationState>(hashCode);
          }

          return ConnectPeerAssociationState::NOT_SET;
        }

        Aws::String GetNameForConnectPeerAssociationState(ConnectPeerAssociationState enumValue)
        {
          switch(enumValue)
          {
          case ConnectPeerAssociationState::NOT_SET:
            return {};
          case ConnectPeerAssociationState::PENDING:
            return "PENDING";
          case ConnectPeerAssociationState::AVAILABLE:
            return "AVAILABLE";
          case ConnectPeerAssociationState::DELETING:
            return "DELETING";
          case ConnectPeerAssociationState::DELETED:
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

      } // namespace ConnectPeerAssociationStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
