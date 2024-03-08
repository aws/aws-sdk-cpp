/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkResourceDefinitionType.h>
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
      namespace NetworkResourceDefinitionTypeMapper
      {

        static const int RADIO_UNIT_HASH = HashingUtils::HashString("RADIO_UNIT");
        static const int DEVICE_IDENTIFIER_HASH = HashingUtils::HashString("DEVICE_IDENTIFIER");


        NetworkResourceDefinitionType GetNetworkResourceDefinitionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RADIO_UNIT_HASH)
          {
            return NetworkResourceDefinitionType::RADIO_UNIT;
          }
          else if (hashCode == DEVICE_IDENTIFIER_HASH)
          {
            return NetworkResourceDefinitionType::DEVICE_IDENTIFIER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkResourceDefinitionType>(hashCode);
          }

          return NetworkResourceDefinitionType::NOT_SET;
        }

        Aws::String GetNameForNetworkResourceDefinitionType(NetworkResourceDefinitionType enumValue)
        {
          switch(enumValue)
          {
          case NetworkResourceDefinitionType::NOT_SET:
            return {};
          case NetworkResourceDefinitionType::RADIO_UNIT:
            return "RADIO_UNIT";
          case NetworkResourceDefinitionType::DEVICE_IDENTIFIER:
            return "DEVICE_IDENTIFIER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkResourceDefinitionTypeMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
