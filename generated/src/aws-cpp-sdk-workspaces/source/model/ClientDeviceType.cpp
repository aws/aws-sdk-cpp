/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ClientDeviceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ClientDeviceTypeMapper
      {

        static const int DeviceTypeWindows_HASH = HashingUtils::HashString("DeviceTypeWindows");
        static const int DeviceTypeOsx_HASH = HashingUtils::HashString("DeviceTypeOsx");
        static const int DeviceTypeAndroid_HASH = HashingUtils::HashString("DeviceTypeAndroid");
        static const int DeviceTypeIos_HASH = HashingUtils::HashString("DeviceTypeIos");
        static const int DeviceTypeLinux_HASH = HashingUtils::HashString("DeviceTypeLinux");
        static const int DeviceTypeWeb_HASH = HashingUtils::HashString("DeviceTypeWeb");


        ClientDeviceType GetClientDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeviceTypeWindows_HASH)
          {
            return ClientDeviceType::DeviceTypeWindows;
          }
          else if (hashCode == DeviceTypeOsx_HASH)
          {
            return ClientDeviceType::DeviceTypeOsx;
          }
          else if (hashCode == DeviceTypeAndroid_HASH)
          {
            return ClientDeviceType::DeviceTypeAndroid;
          }
          else if (hashCode == DeviceTypeIos_HASH)
          {
            return ClientDeviceType::DeviceTypeIos;
          }
          else if (hashCode == DeviceTypeLinux_HASH)
          {
            return ClientDeviceType::DeviceTypeLinux;
          }
          else if (hashCode == DeviceTypeWeb_HASH)
          {
            return ClientDeviceType::DeviceTypeWeb;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientDeviceType>(hashCode);
          }

          return ClientDeviceType::NOT_SET;
        }

        Aws::String GetNameForClientDeviceType(ClientDeviceType enumValue)
        {
          switch(enumValue)
          {
          case ClientDeviceType::NOT_SET:
            return {};
          case ClientDeviceType::DeviceTypeWindows:
            return "DeviceTypeWindows";
          case ClientDeviceType::DeviceTypeOsx:
            return "DeviceTypeOsx";
          case ClientDeviceType::DeviceTypeAndroid:
            return "DeviceTypeAndroid";
          case ClientDeviceType::DeviceTypeIos:
            return "DeviceTypeIos";
          case ClientDeviceType::DeviceTypeLinux:
            return "DeviceTypeLinux";
          case ClientDeviceType::DeviceTypeWeb:
            return "DeviceTypeWeb";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientDeviceTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
