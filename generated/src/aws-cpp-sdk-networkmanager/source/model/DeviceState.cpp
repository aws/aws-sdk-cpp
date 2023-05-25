/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DeviceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace DeviceStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        DeviceState GetDeviceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DeviceState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DeviceState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DeviceState::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DeviceState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceState>(hashCode);
          }

          return DeviceState::NOT_SET;
        }

        Aws::String GetNameForDeviceState(DeviceState enumValue)
        {
          switch(enumValue)
          {
          case DeviceState::PENDING:
            return "PENDING";
          case DeviceState::AVAILABLE:
            return "AVAILABLE";
          case DeviceState::DELETING:
            return "DELETING";
          case DeviceState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
