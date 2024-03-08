/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterStatus.h>
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
      namespace ClusterStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int RollingBack_HASH = HashingUtils::HashString("RollingBack");
        static const int SystemUpdating_HASH = HashingUtils::HashString("SystemUpdating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");


        ClusterStatus GetClusterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return ClusterStatus::Creating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ClusterStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return ClusterStatus::Failed;
          }
          else if (hashCode == InService_HASH)
          {
            return ClusterStatus::InService;
          }
          else if (hashCode == RollingBack_HASH)
          {
            return ClusterStatus::RollingBack;
          }
          else if (hashCode == SystemUpdating_HASH)
          {
            return ClusterStatus::SystemUpdating;
          }
          else if (hashCode == Updating_HASH)
          {
            return ClusterStatus::Updating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterStatus>(hashCode);
          }

          return ClusterStatus::NOT_SET;
        }

        Aws::String GetNameForClusterStatus(ClusterStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterStatus::NOT_SET:
            return {};
          case ClusterStatus::Creating:
            return "Creating";
          case ClusterStatus::Deleting:
            return "Deleting";
          case ClusterStatus::Failed:
            return "Failed";
          case ClusterStatus::InService:
            return "InService";
          case ClusterStatus::RollingBack:
            return "RollingBack";
          case ClusterStatus::SystemUpdating:
            return "SystemUpdating";
          case ClusterStatus::Updating:
            return "Updating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
