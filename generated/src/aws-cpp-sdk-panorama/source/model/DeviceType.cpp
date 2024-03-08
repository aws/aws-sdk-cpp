/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace DeviceTypeMapper
      {

        static const int PANORAMA_APPLIANCE_DEVELOPER_KIT_HASH = HashingUtils::HashString("PANORAMA_APPLIANCE_DEVELOPER_KIT");
        static const int PANORAMA_APPLIANCE_HASH = HashingUtils::HashString("PANORAMA_APPLIANCE");


        DeviceType GetDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PANORAMA_APPLIANCE_DEVELOPER_KIT_HASH)
          {
            return DeviceType::PANORAMA_APPLIANCE_DEVELOPER_KIT;
          }
          else if (hashCode == PANORAMA_APPLIANCE_HASH)
          {
            return DeviceType::PANORAMA_APPLIANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceType>(hashCode);
          }

          return DeviceType::NOT_SET;
        }

        Aws::String GetNameForDeviceType(DeviceType enumValue)
        {
          switch(enumValue)
          {
          case DeviceType::NOT_SET:
            return {};
          case DeviceType::PANORAMA_APPLIANCE_DEVELOPER_KIT:
            return "PANORAMA_APPLIANCE_DEVELOPER_KIT";
          case DeviceType::PANORAMA_APPLIANCE:
            return "PANORAMA_APPLIANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceTypeMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
