/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PeeringErrorCode.h>
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
      namespace PeeringErrorCodeMapper
      {

        static const int TRANSIT_GATEWAY_NOT_FOUND_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_NOT_FOUND");
        static const int TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED");
        static const int MISSING_PERMISSIONS_HASH = HashingUtils::HashString("MISSING_PERMISSIONS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int EDGE_LOCATION_PEER_DUPLICATE_HASH = HashingUtils::HashString("EDGE_LOCATION_PEER_DUPLICATE");
        static const int INVALID_TRANSIT_GATEWAY_STATE_HASH = HashingUtils::HashString("INVALID_TRANSIT_GATEWAY_STATE");


        PeeringErrorCode GetPeeringErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSIT_GATEWAY_NOT_FOUND_HASH)
          {
            return PeeringErrorCode::TRANSIT_GATEWAY_NOT_FOUND;
          }
          else if (hashCode == TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED_HASH)
          {
            return PeeringErrorCode::TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED;
          }
          else if (hashCode == MISSING_PERMISSIONS_HASH)
          {
            return PeeringErrorCode::MISSING_PERMISSIONS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return PeeringErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == EDGE_LOCATION_PEER_DUPLICATE_HASH)
          {
            return PeeringErrorCode::EDGE_LOCATION_PEER_DUPLICATE;
          }
          else if (hashCode == INVALID_TRANSIT_GATEWAY_STATE_HASH)
          {
            return PeeringErrorCode::INVALID_TRANSIT_GATEWAY_STATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeeringErrorCode>(hashCode);
          }

          return PeeringErrorCode::NOT_SET;
        }

        Aws::String GetNameForPeeringErrorCode(PeeringErrorCode enumValue)
        {
          switch(enumValue)
          {
          case PeeringErrorCode::NOT_SET:
            return {};
          case PeeringErrorCode::TRANSIT_GATEWAY_NOT_FOUND:
            return "TRANSIT_GATEWAY_NOT_FOUND";
          case PeeringErrorCode::TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED:
            return "TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED";
          case PeeringErrorCode::MISSING_PERMISSIONS:
            return "MISSING_PERMISSIONS";
          case PeeringErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case PeeringErrorCode::EDGE_LOCATION_PEER_DUPLICATE:
            return "EDGE_LOCATION_PEER_DUPLICATE";
          case PeeringErrorCode::INVALID_TRANSIT_GATEWAY_STATE:
            return "INVALID_TRANSIT_GATEWAY_STATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeeringErrorCodeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
