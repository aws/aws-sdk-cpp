/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/DeviceIdentifierStatus.h>
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
      namespace DeviceIdentifierStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        DeviceIdentifierStatus GetDeviceIdentifierStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DeviceIdentifierStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return DeviceIdentifierStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceIdentifierStatus>(hashCode);
          }

          return DeviceIdentifierStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceIdentifierStatus(DeviceIdentifierStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceIdentifierStatus::NOT_SET:
            return {};
          case DeviceIdentifierStatus::ACTIVE:
            return "ACTIVE";
          case DeviceIdentifierStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceIdentifierStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
