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

        static constexpr uint32_t RADIO_UNIT_HASH = ConstExprHashingUtils::HashString("RADIO_UNIT");
        static constexpr uint32_t DEVICE_IDENTIFIER_HASH = ConstExprHashingUtils::HashString("DEVICE_IDENTIFIER");


        NetworkResourceDefinitionType GetNetworkResourceDefinitionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
