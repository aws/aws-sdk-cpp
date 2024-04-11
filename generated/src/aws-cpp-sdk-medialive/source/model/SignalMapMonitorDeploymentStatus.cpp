/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SignalMapMonitorDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace SignalMapMonitorDeploymentStatusMapper
      {

        static const int NOT_DEPLOYED_HASH = HashingUtils::HashString("NOT_DEPLOYED");
        static const int DRY_RUN_DEPLOYMENT_COMPLETE_HASH = HashingUtils::HashString("DRY_RUN_DEPLOYMENT_COMPLETE");
        static const int DRY_RUN_DEPLOYMENT_FAILED_HASH = HashingUtils::HashString("DRY_RUN_DEPLOYMENT_FAILED");
        static const int DRY_RUN_DEPLOYMENT_IN_PROGRESS_HASH = HashingUtils::HashString("DRY_RUN_DEPLOYMENT_IN_PROGRESS");
        static const int DEPLOYMENT_COMPLETE_HASH = HashingUtils::HashString("DEPLOYMENT_COMPLETE");
        static const int DEPLOYMENT_FAILED_HASH = HashingUtils::HashString("DEPLOYMENT_FAILED");
        static const int DEPLOYMENT_IN_PROGRESS_HASH = HashingUtils::HashString("DEPLOYMENT_IN_PROGRESS");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");


        SignalMapMonitorDeploymentStatus GetSignalMapMonitorDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_DEPLOYED_HASH)
          {
            return SignalMapMonitorDeploymentStatus::NOT_DEPLOYED;
          }
          else if (hashCode == DRY_RUN_DEPLOYMENT_COMPLETE_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DRY_RUN_DEPLOYMENT_COMPLETE;
          }
          else if (hashCode == DRY_RUN_DEPLOYMENT_FAILED_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DRY_RUN_DEPLOYMENT_FAILED;
          }
          else if (hashCode == DRY_RUN_DEPLOYMENT_IN_PROGRESS_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DRY_RUN_DEPLOYMENT_IN_PROGRESS;
          }
          else if (hashCode == DEPLOYMENT_COMPLETE_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DEPLOYMENT_COMPLETE;
          }
          else if (hashCode == DEPLOYMENT_FAILED_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DEPLOYMENT_FAILED;
          }
          else if (hashCode == DEPLOYMENT_IN_PROGRESS_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DEPLOYMENT_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return SignalMapMonitorDeploymentStatus::DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalMapMonitorDeploymentStatus>(hashCode);
          }

          return SignalMapMonitorDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForSignalMapMonitorDeploymentStatus(SignalMapMonitorDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case SignalMapMonitorDeploymentStatus::NOT_SET:
            return {};
          case SignalMapMonitorDeploymentStatus::NOT_DEPLOYED:
            return "NOT_DEPLOYED";
          case SignalMapMonitorDeploymentStatus::DRY_RUN_DEPLOYMENT_COMPLETE:
            return "DRY_RUN_DEPLOYMENT_COMPLETE";
          case SignalMapMonitorDeploymentStatus::DRY_RUN_DEPLOYMENT_FAILED:
            return "DRY_RUN_DEPLOYMENT_FAILED";
          case SignalMapMonitorDeploymentStatus::DRY_RUN_DEPLOYMENT_IN_PROGRESS:
            return "DRY_RUN_DEPLOYMENT_IN_PROGRESS";
          case SignalMapMonitorDeploymentStatus::DEPLOYMENT_COMPLETE:
            return "DEPLOYMENT_COMPLETE";
          case SignalMapMonitorDeploymentStatus::DEPLOYMENT_FAILED:
            return "DEPLOYMENT_FAILED";
          case SignalMapMonitorDeploymentStatus::DEPLOYMENT_IN_PROGRESS:
            return "DEPLOYMENT_IN_PROGRESS";
          case SignalMapMonitorDeploymentStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case SignalMapMonitorDeploymentStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case SignalMapMonitorDeploymentStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalMapMonitorDeploymentStatusMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
