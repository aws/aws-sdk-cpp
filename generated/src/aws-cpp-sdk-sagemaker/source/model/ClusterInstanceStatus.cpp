/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterInstanceStatus.h>
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
      namespace ClusterInstanceStatusMapper
      {

        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Failure_HASH = HashingUtils::HashString("Failure");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int ShuttingDown_HASH = HashingUtils::HashString("ShuttingDown");
        static const int SystemUpdating_HASH = HashingUtils::HashString("SystemUpdating");
        static const int DeepHealthCheckInProgress_HASH = HashingUtils::HashString("DeepHealthCheckInProgress");
        static const int NotFound_HASH = HashingUtils::HashString("NotFound");


        ClusterInstanceStatus GetClusterInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Running_HASH)
          {
            return ClusterInstanceStatus::Running;
          }
          else if (hashCode == Failure_HASH)
          {
            return ClusterInstanceStatus::Failure;
          }
          else if (hashCode == Pending_HASH)
          {
            return ClusterInstanceStatus::Pending;
          }
          else if (hashCode == ShuttingDown_HASH)
          {
            return ClusterInstanceStatus::ShuttingDown;
          }
          else if (hashCode == SystemUpdating_HASH)
          {
            return ClusterInstanceStatus::SystemUpdating;
          }
          else if (hashCode == DeepHealthCheckInProgress_HASH)
          {
            return ClusterInstanceStatus::DeepHealthCheckInProgress;
          }
          else if (hashCode == NotFound_HASH)
          {
            return ClusterInstanceStatus::NotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterInstanceStatus>(hashCode);
          }

          return ClusterInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForClusterInstanceStatus(ClusterInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterInstanceStatus::NOT_SET:
            return {};
          case ClusterInstanceStatus::Running:
            return "Running";
          case ClusterInstanceStatus::Failure:
            return "Failure";
          case ClusterInstanceStatus::Pending:
            return "Pending";
          case ClusterInstanceStatus::ShuttingDown:
            return "ShuttingDown";
          case ClusterInstanceStatus::SystemUpdating:
            return "SystemUpdating";
          case ClusterInstanceStatus::DeepHealthCheckInProgress:
            return "DeepHealthCheckInProgress";
          case ClusterInstanceStatus::NotFound:
            return "NotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterInstanceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
