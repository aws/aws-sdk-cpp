/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterAutoScalingStatus.h>
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
      namespace ClusterAutoScalingStatusMapper
      {

        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        ClusterAutoScalingStatus GetClusterAutoScalingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InService_HASH)
          {
            return ClusterAutoScalingStatus::InService;
          }
          else if (hashCode == Failed_HASH)
          {
            return ClusterAutoScalingStatus::Failed;
          }
          else if (hashCode == Creating_HASH)
          {
            return ClusterAutoScalingStatus::Creating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ClusterAutoScalingStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterAutoScalingStatus>(hashCode);
          }

          return ClusterAutoScalingStatus::NOT_SET;
        }

        Aws::String GetNameForClusterAutoScalingStatus(ClusterAutoScalingStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterAutoScalingStatus::NOT_SET:
            return {};
          case ClusterAutoScalingStatus::InService:
            return "InService";
          case ClusterAutoScalingStatus::Failed:
            return "Failed";
          case ClusterAutoScalingStatus::Creating:
            return "Creating";
          case ClusterAutoScalingStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterAutoScalingStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
