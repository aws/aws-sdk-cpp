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

        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STOP_ERROR_HASH = HashingUtils::HashString("STOP_ERROR");
        static const int REMOVAL_FAILED_HASH = HashingUtils::HashString("REMOVAL_FAILED");
        static const int REMOVAL_IN_PROGRESS_HASH = HashingUtils::HashString("REMOVAL_IN_PROGRESS");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int INSTALL_ERROR_HASH = HashingUtils::HashString("INSTALL_ERROR");
        static const int LAUNCHED_HASH = HashingUtils::HashString("LAUNCHED");
        static const int LAUNCH_ERROR_HASH = HashingUtils::HashString("LAUNCH_ERROR");
        static const int INSTALL_IN_PROGRESS_HASH = HashingUtils::HashString("INSTALL_IN_PROGRESS");


        DeviceReportedStatus GetDeviceReportedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
