/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ConfigRecommendationOptimizationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ConfigRecommendationOptimizationTypeMapper
      {

        static const int LeastCost_HASH = HashingUtils::HashString("LeastCost");
        static const int LeastChange_HASH = HashingUtils::HashString("LeastChange");
        static const int BestAZRecovery_HASH = HashingUtils::HashString("BestAZRecovery");
        static const int LeastErrors_HASH = HashingUtils::HashString("LeastErrors");
        static const int BestAttainable_HASH = HashingUtils::HashString("BestAttainable");
        static const int BestRegionRecovery_HASH = HashingUtils::HashString("BestRegionRecovery");


        ConfigRecommendationOptimizationType GetConfigRecommendationOptimizationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LeastCost_HASH)
          {
            return ConfigRecommendationOptimizationType::LeastCost;
          }
          else if (hashCode == LeastChange_HASH)
          {
            return ConfigRecommendationOptimizationType::LeastChange;
          }
          else if (hashCode == BestAZRecovery_HASH)
          {
            return ConfigRecommendationOptimizationType::BestAZRecovery;
          }
          else if (hashCode == LeastErrors_HASH)
          {
            return ConfigRecommendationOptimizationType::LeastErrors;
          }
          else if (hashCode == BestAttainable_HASH)
          {
            return ConfigRecommendationOptimizationType::BestAttainable;
          }
          else if (hashCode == BestRegionRecovery_HASH)
          {
            return ConfigRecommendationOptimizationType::BestRegionRecovery;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigRecommendationOptimizationType>(hashCode);
          }

          return ConfigRecommendationOptimizationType::NOT_SET;
        }

        Aws::String GetNameForConfigRecommendationOptimizationType(ConfigRecommendationOptimizationType enumValue)
        {
          switch(enumValue)
          {
          case ConfigRecommendationOptimizationType::LeastCost:
            return "LeastCost";
          case ConfigRecommendationOptimizationType::LeastChange:
            return "LeastChange";
          case ConfigRecommendationOptimizationType::BestAZRecovery:
            return "BestAZRecovery";
          case ConfigRecommendationOptimizationType::LeastErrors:
            return "LeastErrors";
          case ConfigRecommendationOptimizationType::BestAttainable:
            return "BestAttainable";
          case ConfigRecommendationOptimizationType::BestRegionRecovery:
            return "BestRegionRecovery";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigRecommendationOptimizationTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
