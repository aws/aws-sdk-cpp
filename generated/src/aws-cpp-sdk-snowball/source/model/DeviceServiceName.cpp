/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DeviceServiceName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace DeviceServiceNameMapper
      {

        static const int NFS_ON_DEVICE_SERVICE_HASH = HashingUtils::HashString("NFS_ON_DEVICE_SERVICE");
        static const int S3_ON_DEVICE_SERVICE_HASH = HashingUtils::HashString("S3_ON_DEVICE_SERVICE");


        DeviceServiceName GetDeviceServiceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NFS_ON_DEVICE_SERVICE_HASH)
          {
            return DeviceServiceName::NFS_ON_DEVICE_SERVICE;
          }
          else if (hashCode == S3_ON_DEVICE_SERVICE_HASH)
          {
            return DeviceServiceName::S3_ON_DEVICE_SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceServiceName>(hashCode);
          }

          return DeviceServiceName::NOT_SET;
        }

        Aws::String GetNameForDeviceServiceName(DeviceServiceName enumValue)
        {
          switch(enumValue)
          {
          case DeviceServiceName::NOT_SET:
            return {};
          case DeviceServiceName::NFS_ON_DEVICE_SERVICE:
            return "NFS_ON_DEVICE_SERVICE";
          case DeviceServiceName::S3_ON_DEVICE_SERVICE:
            return "S3_ON_DEVICE_SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceServiceNameMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
