/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NetworkInterfaceMode.h>
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
      namespace NetworkInterfaceModeMapper
      {

        static const int NAT_HASH = HashingUtils::HashString("NAT");
        static const int BRIDGE_HASH = HashingUtils::HashString("BRIDGE");


        NetworkInterfaceMode GetNetworkInterfaceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAT_HASH)
          {
            return NetworkInterfaceMode::NAT;
          }
          else if (hashCode == BRIDGE_HASH)
          {
            return NetworkInterfaceMode::BRIDGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceMode>(hashCode);
          }

          return NetworkInterfaceMode::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceMode(NetworkInterfaceMode enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceMode::NOT_SET:
            return {};
          case NetworkInterfaceMode::NAT:
            return "NAT";
          case NetworkInterfaceMode::BRIDGE:
            return "BRIDGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
