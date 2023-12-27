/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AwsManagedTargetDestination.h>
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
      namespace AwsManagedTargetDestinationMapper
      {

        static const int None_specified_HASH = HashingUtils::HashString("None specified");
        static const int AWS_Elastic_BeanStalk_HASH = HashingUtils::HashString("AWS Elastic BeanStalk");
        static const int AWS_Fargate_HASH = HashingUtils::HashString("AWS Fargate");


        AwsManagedTargetDestination GetAwsManagedTargetDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return AwsManagedTargetDestination::None_specified;
          }
          else if (hashCode == AWS_Elastic_BeanStalk_HASH)
          {
            return AwsManagedTargetDestination::AWS_Elastic_BeanStalk;
          }
          else if (hashCode == AWS_Fargate_HASH)
          {
            return AwsManagedTargetDestination::AWS_Fargate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsManagedTargetDestination>(hashCode);
          }

          return AwsManagedTargetDestination::NOT_SET;
        }

        Aws::String GetNameForAwsManagedTargetDestination(AwsManagedTargetDestination enumValue)
        {
          switch(enumValue)
          {
          case AwsManagedTargetDestination::NOT_SET:
            return {};
          case AwsManagedTargetDestination::None_specified:
            return "None specified";
          case AwsManagedTargetDestination::AWS_Elastic_BeanStalk:
            return "AWS Elastic BeanStalk";
          case AwsManagedTargetDestination::AWS_Fargate:
            return "AWS Fargate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsManagedTargetDestinationMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
