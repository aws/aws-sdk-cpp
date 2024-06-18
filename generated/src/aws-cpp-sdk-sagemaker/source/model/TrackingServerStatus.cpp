/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrackingServerStatus.h>
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
      namespace TrackingServerStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Updated_HASH = HashingUtils::HashString("Updated");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int StopFailed_HASH = HashingUtils::HashString("StopFailed");
        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int Started_HASH = HashingUtils::HashString("Started");
        static const int StartFailed_HASH = HashingUtils::HashString("StartFailed");
        static const int MaintenanceInProgress_HASH = HashingUtils::HashString("MaintenanceInProgress");
        static const int MaintenanceComplete_HASH = HashingUtils::HashString("MaintenanceComplete");
        static const int MaintenanceFailed_HASH = HashingUtils::HashString("MaintenanceFailed");


        TrackingServerStatus GetTrackingServerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return TrackingServerStatus::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return TrackingServerStatus::Created;
          }
          else if (hashCode == CreateFailed_HASH)
          {
            return TrackingServerStatus::CreateFailed;
          }
          else if (hashCode == Updating_HASH)
          {
            return TrackingServerStatus::Updating;
          }
          else if (hashCode == Updated_HASH)
          {
            return TrackingServerStatus::Updated;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return TrackingServerStatus::UpdateFailed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TrackingServerStatus::Deleting;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return TrackingServerStatus::DeleteFailed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return TrackingServerStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return TrackingServerStatus::Stopped;
          }
          else if (hashCode == StopFailed_HASH)
          {
            return TrackingServerStatus::StopFailed;
          }
          else if (hashCode == Starting_HASH)
          {
            return TrackingServerStatus::Starting;
          }
          else if (hashCode == Started_HASH)
          {
            return TrackingServerStatus::Started;
          }
          else if (hashCode == StartFailed_HASH)
          {
            return TrackingServerStatus::StartFailed;
          }
          else if (hashCode == MaintenanceInProgress_HASH)
          {
            return TrackingServerStatus::MaintenanceInProgress;
          }
          else if (hashCode == MaintenanceComplete_HASH)
          {
            return TrackingServerStatus::MaintenanceComplete;
          }
          else if (hashCode == MaintenanceFailed_HASH)
          {
            return TrackingServerStatus::MaintenanceFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrackingServerStatus>(hashCode);
          }

          return TrackingServerStatus::NOT_SET;
        }

        Aws::String GetNameForTrackingServerStatus(TrackingServerStatus enumValue)
        {
          switch(enumValue)
          {
          case TrackingServerStatus::NOT_SET:
            return {};
          case TrackingServerStatus::Creating:
            return "Creating";
          case TrackingServerStatus::Created:
            return "Created";
          case TrackingServerStatus::CreateFailed:
            return "CreateFailed";
          case TrackingServerStatus::Updating:
            return "Updating";
          case TrackingServerStatus::Updated:
            return "Updated";
          case TrackingServerStatus::UpdateFailed:
            return "UpdateFailed";
          case TrackingServerStatus::Deleting:
            return "Deleting";
          case TrackingServerStatus::DeleteFailed:
            return "DeleteFailed";
          case TrackingServerStatus::Stopping:
            return "Stopping";
          case TrackingServerStatus::Stopped:
            return "Stopped";
          case TrackingServerStatus::StopFailed:
            return "StopFailed";
          case TrackingServerStatus::Starting:
            return "Starting";
          case TrackingServerStatus::Started:
            return "Started";
          case TrackingServerStatus::StartFailed:
            return "StartFailed";
          case TrackingServerStatus::MaintenanceInProgress:
            return "MaintenanceInProgress";
          case TrackingServerStatus::MaintenanceComplete:
            return "MaintenanceComplete";
          case TrackingServerStatus::MaintenanceFailed:
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

      } // namespace TrackingServerStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
