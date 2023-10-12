/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceStatus.h>
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
      namespace DeviceStatusMapper
      {

        static constexpr uint32_t AWAITING_PROVISIONING_HASH = ConstExprHashingUtils::HashString("AWAITING_PROVISIONING");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        DeviceStatus GetDeviceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWAITING_PROVISIONING_HASH)
          {
            return DeviceStatus::AWAITING_PROVISIONING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DeviceStatus::PENDING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DeviceStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeviceStatus::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return DeviceStatus::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DeviceStatus::DELETING;
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
          case DeviceStatus::AWAITING_PROVISIONING:
            return "AWAITING_PROVISIONING";
          case DeviceStatus::PENDING:
            return "PENDING";
          case DeviceStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DeviceStatus::FAILED:
            return "FAILED";
          case DeviceStatus::ERROR_:
            return "ERROR";
          case DeviceStatus::DELETING:
            return "DELETING";
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
  } // namespace Panorama
} // namespace Aws
