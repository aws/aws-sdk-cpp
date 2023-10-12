/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StrategyRecommendation.h>
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
      namespace StrategyRecommendationMapper
      {

        static constexpr uint32_t recommended_HASH = ConstExprHashingUtils::HashString("recommended");
        static constexpr uint32_t viableOption_HASH = ConstExprHashingUtils::HashString("viableOption");
        static constexpr uint32_t notRecommended_HASH = ConstExprHashingUtils::HashString("notRecommended");
        static constexpr uint32_t potential_HASH = ConstExprHashingUtils::HashString("potential");


        StrategyRecommendation GetStrategyRecommendationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == recommended_HASH)
          {
            return StrategyRecommendation::recommended;
          }
          else if (hashCode == viableOption_HASH)
          {
            return StrategyRecommendation::viableOption;
          }
          else if (hashCode == notRecommended_HASH)
          {
            return StrategyRecommendation::notRecommended;
          }
          else if (hashCode == potential_HASH)
          {
            return StrategyRecommendation::potential;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StrategyRecommendation>(hashCode);
          }

          return StrategyRecommendation::NOT_SET;
        }

        Aws::String GetNameForStrategyRecommendation(StrategyRecommendation enumValue)
        {
          switch(enumValue)
          {
          case StrategyRecommendation::NOT_SET:
            return {};
          case StrategyRecommendation::recommended:
            return "recommended";
          case StrategyRecommendation::viableOption:
            return "viableOption";
          case StrategyRecommendation::notRecommended:
            return "notRecommended";
          case StrategyRecommendation::potential:
            return "potential";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StrategyRecommendationMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
