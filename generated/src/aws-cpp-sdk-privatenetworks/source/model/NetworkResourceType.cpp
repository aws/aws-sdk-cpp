/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace NetworkResourceTypeMapper
      {

        static const int RADIO_UNIT_HASH = HashingUtils::HashString("RADIO_UNIT");


        NetworkResourceType GetNetworkResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RADIO_UNIT_HASH)
          {
            return NetworkResourceType::RADIO_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkResourceType>(hashCode);
          }

          return NetworkResourceType::NOT_SET;
        }

        Aws::String GetNameForNetworkResourceType(NetworkResourceType enumValue)
        {
          switch(enumValue)
          {
          case NetworkResourceType::NOT_SET:
            return {};
          case NetworkResourceType::RADIO_UNIT:
            return "RADIO_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkResourceTypeMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
