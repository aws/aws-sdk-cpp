/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceConnectionStatus.h>
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
      namespace DeviceConnectionStatusMapper
      {

        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");
        static const int AWAITING_CREDENTIALS_HASH = HashingUtils::HashString("AWAITING_CREDENTIALS");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        DeviceConnectionStatus GetDeviceConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_HASH)
          {
            return DeviceConnectionStatus::ONLINE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return DeviceConnectionStatus::OFFLINE;
          }
          else if (hashCode == AWAITING_CREDENTIALS_HASH)
          {
            return DeviceConnectionStatus::AWAITING_CREDENTIALS;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return DeviceConnectionStatus::NOT_AVAILABLE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return DeviceConnectionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceConnectionStatus>(hashCode);
          }

          return DeviceConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceConnectionStatus(DeviceConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceConnectionStatus::NOT_SET:
            return {};
          case DeviceConnectionStatus::ONLINE:
            return "ONLINE";
          case DeviceConnectionStatus::OFFLINE:
            return "OFFLINE";
          case DeviceConnectionStatus::AWAITING_CREDENTIALS:
            return "AWAITING_CREDENTIALS";
          case DeviceConnectionStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          case DeviceConnectionStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceConnectionStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
