/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeviceDeploymentStatus.h>
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
      namespace DeviceDeploymentStatusMapper
      {

        static const int READYTODEPLOY_HASH = HashingUtils::HashString("READYTODEPLOY");
        static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
        static const int DEPLOYED_HASH = HashingUtils::HashString("DEPLOYED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        DeviceDeploymentStatus GetDeviceDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READYTODEPLOY_HASH)
          {
            return DeviceDeploymentStatus::READYTODEPLOY;
          }
          else if (hashCode == INPROGRESS_HASH)
          {
            return DeviceDeploymentStatus::INPROGRESS;
          }
          else if (hashCode == DEPLOYED_HASH)
          {
            return DeviceDeploymentStatus::DEPLOYED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeviceDeploymentStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return DeviceDeploymentStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DeviceDeploymentStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceDeploymentStatus>(hashCode);
          }

          return DeviceDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceDeploymentStatus(DeviceDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceDeploymentStatus::NOT_SET:
            return {};
          case DeviceDeploymentStatus::READYTODEPLOY:
            return "READYTODEPLOY";
          case DeviceDeploymentStatus::INPROGRESS:
            return "INPROGRESS";
          case DeviceDeploymentStatus::DEPLOYED:
            return "DEPLOYED";
          case DeviceDeploymentStatus::FAILED:
            return "FAILED";
          case DeviceDeploymentStatus::STOPPING:
            return "STOPPING";
          case DeviceDeploymentStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceDeploymentStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
