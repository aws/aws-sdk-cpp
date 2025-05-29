/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrackingServerMaintenanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TrackingServerMaintenanceStatusMapper
      {

        static const int MaintenanceInProgress_HASH = HashingUtils::HashString("MaintenanceInProgress");
        static const int MaintenanceComplete_HASH = HashingUtils::HashString("MaintenanceComplete");
        static const int MaintenanceFailed_HASH = HashingUtils::HashString("MaintenanceFailed");


        TrackingServerMaintenanceStatus GetTrackingServerMaintenanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MaintenanceInProgress_HASH)
          {
            return TrackingServerMaintenanceStatus::MaintenanceInProgress;
          }
          else if (hashCode == MaintenanceComplete_HASH)
          {
            return TrackingServerMaintenanceStatus::MaintenanceComplete;
          }
          else if (hashCode == MaintenanceFailed_HASH)
          {
            return TrackingServerMaintenanceStatus::MaintenanceFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrackingServerMaintenanceStatus>(hashCode);
          }

          return TrackingServerMaintenanceStatus::NOT_SET;
        }

        Aws::String GetNameForTrackingServerMaintenanceStatus(TrackingServerMaintenanceStatus enumValue)
        {
          switch(enumValue)
          {
          case TrackingServerMaintenanceStatus::NOT_SET:
            return {};
          case TrackingServerMaintenanceStatus::MaintenanceInProgress:
            return "MaintenanceInProgress";
          case TrackingServerMaintenanceStatus::MaintenanceComplete:
            return "MaintenanceComplete";
          case TrackingServerMaintenanceStatus::MaintenanceFailed:
            return "MaintenanceFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrackingServerMaintenanceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
