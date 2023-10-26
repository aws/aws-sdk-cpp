/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/NoPreferenceTargetDestination.h>
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
      namespace NoPreferenceTargetDestinationMapper
      {

        static const int None_specified_HASH = HashingUtils::HashString("None specified");
        static const int AWS_Elastic_BeanStalk_HASH = HashingUtils::HashString("AWS Elastic BeanStalk");
        static const int AWS_Fargate_HASH = HashingUtils::HashString("AWS Fargate");
        static const int Amazon_Elastic_Cloud_Compute_EC2_HASH = HashingUtils::HashString("Amazon Elastic Cloud Compute (EC2)");
        static const int Amazon_Elastic_Container_Service_ECS_HASH = HashingUtils::HashString("Amazon Elastic Container Service (ECS)");
        static const int Amazon_Elastic_Kubernetes_Service_EKS_HASH = HashingUtils::HashString("Amazon Elastic Kubernetes Service (EKS)");


        NoPreferenceTargetDestination GetNoPreferenceTargetDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return NoPreferenceTargetDestination::None_specified;
          }
          else if (hashCode == AWS_Elastic_BeanStalk_HASH)
          {
            return NoPreferenceTargetDestination::AWS_Elastic_BeanStalk;
          }
          else if (hashCode == AWS_Fargate_HASH)
          {
            return NoPreferenceTargetDestination::AWS_Fargate;
          }
          else if (hashCode == Amazon_Elastic_Cloud_Compute_EC2_HASH)
          {
            return NoPreferenceTargetDestination::Amazon_Elastic_Cloud_Compute_EC2;
          }
          else if (hashCode == Amazon_Elastic_Container_Service_ECS_HASH)
          {
            return NoPreferenceTargetDestination::Amazon_Elastic_Container_Service_ECS;
          }
          else if (hashCode == Amazon_Elastic_Kubernetes_Service_EKS_HASH)
          {
            return NoPreferenceTargetDestination::Amazon_Elastic_Kubernetes_Service_EKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoPreferenceTargetDestination>(hashCode);
          }

          return NoPreferenceTargetDestination::NOT_SET;
        }

        Aws::String GetNameForNoPreferenceTargetDestination(NoPreferenceTargetDestination enumValue)
        {
          switch(enumValue)
          {
          case NoPreferenceTargetDestination::NOT_SET:
            return {};
          case NoPreferenceTargetDestination::None_specified:
            return "None specified";
          case NoPreferenceTargetDestination::AWS_Elastic_BeanStalk:
            return "AWS Elastic BeanStalk";
          case NoPreferenceTargetDestination::AWS_Fargate:
            return "AWS Fargate";
          case NoPreferenceTargetDestination::Amazon_Elastic_Cloud_Compute_EC2:
            return "Amazon Elastic Cloud Compute (EC2)";
          case NoPreferenceTargetDestination::Amazon_Elastic_Container_Service_ECS:
            return "Amazon Elastic Container Service (ECS)";
          case NoPreferenceTargetDestination::Amazon_Elastic_Kubernetes_Service_EKS:
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

      } // namespace NoPreferenceTargetDestinationMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
