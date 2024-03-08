/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SelfManageTargetDestination.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace SelfManageTargetDestinationMapper
      {

        static const int None_specified_HASH = HashingUtils::HashString("None specified");
        static const int Amazon_Elastic_Cloud_Compute_EC2_HASH = HashingUtils::HashString("Amazon Elastic Cloud Compute (EC2)");
        static const int Amazon_Elastic_Container_Service_ECS_HASH = HashingUtils::HashString("Amazon Elastic Container Service (ECS)");
        static const int Amazon_Elastic_Kubernetes_Service_EKS_HASH = HashingUtils::HashString("Amazon Elastic Kubernetes Service (EKS)");


        SelfManageTargetDestination GetSelfManageTargetDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return SelfManageTargetDestination::None_specified;
          }
          else if (hashCode == Amazon_Elastic_Cloud_Compute_EC2_HASH)
          {
            return SelfManageTargetDestination::Amazon_Elastic_Cloud_Compute_EC2;
          }
          else if (hashCode == Amazon_Elastic_Container_Service_ECS_HASH)
          {
            return SelfManageTargetDestination::Amazon_Elastic_Container_Service_ECS;
          }
          else if (hashCode == Amazon_Elastic_Kubernetes_Service_EKS_HASH)
          {
            return SelfManageTargetDestination::Amazon_Elastic_Kubernetes_Service_EKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelfManageTargetDestination>(hashCode);
          }

          return SelfManageTargetDestination::NOT_SET;
        }

        Aws::String GetNameForSelfManageTargetDestination(SelfManageTargetDestination enumValue)
        {
          switch(enumValue)
          {
          case SelfManageTargetDestination::NOT_SET:
            return {};
          case SelfManageTargetDestination::None_specified:
            return "None specified";
          case SelfManageTargetDestination::Amazon_Elastic_Cloud_Compute_EC2:
            return "Amazon Elastic Cloud Compute (EC2)";
          case SelfManageTargetDestination::Amazon_Elastic_Container_Service_ECS:
            return "Amazon Elastic Container Service (ECS)";
          case SelfManageTargetDestination::Amazon_Elastic_Kubernetes_Service_EKS:
            return "Amazon Elastic Kubernetes Service (EKS)";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelfManageTargetDestinationMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
