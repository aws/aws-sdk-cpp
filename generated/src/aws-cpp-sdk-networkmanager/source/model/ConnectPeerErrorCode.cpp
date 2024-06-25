/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerErrorCode.h>
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
      namespace ConnectPeerErrorCodeMapper
      {

        static const int EDGE_LOCATION_NO_FREE_IPS_HASH = HashingUtils::HashString("EDGE_LOCATION_NO_FREE_IPS");
        static const int EDGE_LOCATION_PEER_DUPLICATE_HASH = HashingUtils::HashString("EDGE_LOCATION_PEER_DUPLICATE");
        static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");
        static const int IP_OUTSIDE_SUBNET_CIDR_RANGE_HASH = HashingUtils::HashString("IP_OUTSIDE_SUBNET_CIDR_RANGE");
        static const int INVALID_INSIDE_CIDR_BLOCK_HASH = HashingUtils::HashString("INVALID_INSIDE_CIDR_BLOCK");
        static const int NO_ASSOCIATED_CIDR_BLOCK_HASH = HashingUtils::HashString("NO_ASSOCIATED_CIDR_BLOCK");


        ConnectPeerErrorCode GetConnectPeerErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EDGE_LOCATION_NO_FREE_IPS_HASH)
          {
            return ConnectPeerErrorCode::EDGE_LOCATION_NO_FREE_IPS;
          }
          else if (hashCode == EDGE_LOCATION_PEER_DUPLICATE_HASH)
          {
            return ConnectPeerErrorCode::EDGE_LOCATION_PEER_DUPLICATE;
          }
          else if (hashCode == SUBNET_NOT_FOUND_HASH)
          {
            return ConnectPeerErrorCode::SUBNET_NOT_FOUND;
          }
          else if (hashCode == IP_OUTSIDE_SUBNET_CIDR_RANGE_HASH)
          {
            return ConnectPeerErrorCode::IP_OUTSIDE_SUBNET_CIDR_RANGE;
          }
          else if (hashCode == INVALID_INSIDE_CIDR_BLOCK_HASH)
          {
            return ConnectPeerErrorCode::INVALID_INSIDE_CIDR_BLOCK;
          }
          else if (hashCode == NO_ASSOCIATED_CIDR_BLOCK_HASH)
          {
            return ConnectPeerErrorCode::NO_ASSOCIATED_CIDR_BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectPeerErrorCode>(hashCode);
          }

          return ConnectPeerErrorCode::NOT_SET;
        }

        Aws::String GetNameForConnectPeerErrorCode(ConnectPeerErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ConnectPeerErrorCode::NOT_SET:
            return {};
          case ConnectPeerErrorCode::EDGE_LOCATION_NO_FREE_IPS:
            return "EDGE_LOCATION_NO_FREE_IPS";
          case ConnectPeerErrorCode::EDGE_LOCATION_PEER_DUPLICATE:
            return "EDGE_LOCATION_PEER_DUPLICATE";
          case ConnectPeerErrorCode::SUBNET_NOT_FOUND:
            return "SUBNET_NOT_FOUND";
          case ConnectPeerErrorCode::IP_OUTSIDE_SUBNET_CIDR_RANGE:
            return "IP_OUTSIDE_SUBNET_CIDR_RANGE";
          case ConnectPeerErrorCode::INVALID_INSIDE_CIDR_BLOCK:
            return "INVALID_INSIDE_CIDR_BLOCK";
          case ConnectPeerErrorCode::NO_ASSOCIATED_CIDR_BLOCK:
            return "NO_ASSOCIATED_CIDR_BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectPeerErrorCodeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
