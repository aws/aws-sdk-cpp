/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/DeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace DeviceStatusMapper
      {

        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
        static const int DEREGISTERED_HASH = HashingUtils::HashString("DEREGISTERED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        DeviceStatus GetDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERED_HASH)
          {
            return DeviceStatus::REGISTERED;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return DeviceStatus::DEREGISTERING;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return DeviceStatus::DEREGISTERED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return DeviceStatus::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceStatus>(hashCode);
          }

          return DeviceStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceStatus(DeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceStatus::NOT_SET:
            return {};
          case DeviceStatus::REGISTERED:
            return "REGISTERED";
          case DeviceStatus::DEREGISTERING:
            return "DEREGISTERING";
          case DeviceStatus::DEREGISTERED:
            return "DEREGISTERED";
          case DeviceStatus::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStatusMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
