/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociationState.h>
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
      namespace TransitGatewayConnectPeerAssociationStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        TransitGatewayConnectPeerAssociationState GetTransitGatewayConnectPeerAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TransitGatewayConnectPeerAssociationState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return TransitGatewayConnectPeerAssociationState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TransitGatewayConnectPeerAssociationState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return TransitGatewayConnectPeerAssociationState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayConnectPeerAssociationState>(hashCode);
          }

          return TransitGatewayConnectPeerAssociationState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayConnectPeerAssociationState(TransitGatewayConnectPeerAssociationState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayConnectPeerAssociationState::NOT_SET:
            return {};
          case TransitGatewayConnectPeerAssociationState::PENDING:
            return "PENDING";
          case TransitGatewayConnectPeerAssociationState::AVAILABLE:
            return "AVAILABLE";
          case TransitGatewayConnectPeerAssociationState::DELETING:
            return "DELETING";
          case TransitGatewayConnectPeerAssociationState::DELETED:
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

      } // namespace TransitGatewayConnectPeerAssociationStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
