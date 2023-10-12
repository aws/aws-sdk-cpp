/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceReportedStatus.h>
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
      namespace DeviceReportedStatusMapper
      {

        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t STOP_ERROR_HASH = ConstExprHashingUtils::HashString("STOP_ERROR");
        static constexpr uint32_t REMOVAL_FAILED_HASH = ConstExprHashingUtils::HashString("REMOVAL_FAILED");
        static constexpr uint32_t REMOVAL_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("REMOVAL_IN_PROGRESS");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t INSTALL_ERROR_HASH = ConstExprHashingUtils::HashString("INSTALL_ERROR");
        static constexpr uint32_t LAUNCHED_HASH = ConstExprHashingUtils::HashString("LAUNCHED");
        static constexpr uint32_t LAUNCH_ERROR_HASH = ConstExprHashingUtils::HashString("LAUNCH_ERROR");
        static constexpr uint32_t INSTALL_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("INSTALL_IN_PROGRESS");


        DeviceReportedStatus GetDeviceReportedStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPING_HASH)
          {
            return DeviceReportedStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DeviceReportedStatus::STOPPED;
          }
          else if (hashCode == STOP_ERROR_HASH)
          {
            return DeviceReportedStatus::STOP_ERROR;
          }
          else if (hashCode == REMOVAL_FAILED_HASH)
          {
            return DeviceReportedStatus::REMOVAL_FAILED;
          }
          else if (hashCode == REMOVAL_IN_PROGRESS_HASH)
          {
            return DeviceReportedStatus::REMOVAL_IN_PROGRESS;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DeviceReportedStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return DeviceReportedStatus::RUNNING;
          }
          else if (hashCode == INSTALL_ERROR_HASH)
          {
            return DeviceReportedStatus::INSTALL_ERROR;
          }
          else if (hashCode == LAUNCHED_HASH)
          {
            return DeviceReportedStatus::LAUNCHED;
          }
          else if (hashCode == LAUNCH_ERROR_HASH)
          {
            return DeviceReportedStatus::LAUNCH_ERROR;
          }
          else if (hashCode == INSTALL_IN_PROGRESS_HASH)
          {
            return DeviceReportedStatus::INSTALL_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceReportedStatus>(hashCode);
          }

          return DeviceReportedStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceReportedStatus(DeviceReportedStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceReportedStatus::NOT_SET:
            return {};
          case DeviceReportedStatus::STOPPING:
            return "STOPPING";
          case DeviceReportedStatus::STOPPED:
            return "STOPPED";
          case DeviceReportedStatus::STOP_ERROR:
            return "STOP_ERROR";
          case DeviceReportedStatus::REMOVAL_FAILED:
            return "REMOVAL_FAILED";
          case DeviceReportedStatus::REMOVAL_IN_PROGRESS:
            return "REMOVAL_IN_PROGRESS";
          case DeviceReportedStatus::STARTING:
            return "STARTING";
          case DeviceReportedStatus::RUNNING:
            return "RUNNING";
          case DeviceReportedStatus::INSTALL_ERROR:
            return "INSTALL_ERROR";
          case DeviceReportedStatus::LAUNCHED:
            return "LAUNCHED";
          case DeviceReportedStatus::LAUNCH_ERROR:
            return "LAUNCH_ERROR";
          case DeviceReportedStatus::INSTALL_IN_PROGRESS:
            return "INSTALL_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceReportedStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
