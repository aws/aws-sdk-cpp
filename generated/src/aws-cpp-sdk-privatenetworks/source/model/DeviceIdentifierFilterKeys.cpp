/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/DeviceIdentifierFilterKeys.h>
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
      namespace DeviceIdentifierFilterKeysMapper
      {

        static constexpr uint32_t STATUS_HASH = ConstExprHashingUtils::HashString("STATUS");
        static constexpr uint32_t ORDER_HASH = ConstExprHashingUtils::HashString("ORDER");
        static constexpr uint32_t TRAFFIC_GROUP_HASH = ConstExprHashingUtils::HashString("TRAFFIC_GROUP");


        DeviceIdentifierFilterKeys GetDeviceIdentifierFilterKeysForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return DeviceIdentifierFilterKeys::STATUS;
          }
          else if (hashCode == ORDER_HASH)
          {
            return DeviceIdentifierFilterKeys::ORDER;
          }
          else if (hashCode == TRAFFIC_GROUP_HASH)
          {
            return DeviceIdentifierFilterKeys::TRAFFIC_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceIdentifierFilterKeys>(hashCode);
          }

          return DeviceIdentifierFilterKeys::NOT_SET;
        }

        Aws::String GetNameForDeviceIdentifierFilterKeys(DeviceIdentifierFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case DeviceIdentifierFilterKeys::NOT_SET:
            return {};
          case DeviceIdentifierFilterKeys::STATUS:
            return "STATUS";
          case DeviceIdentifierFilterKeys::ORDER:
            return "ORDER";
          case DeviceIdentifierFilterKeys::TRAFFIC_GROUP:
            return "TRAFFIC_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceIdentifierFilterKeysMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
