/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/Strategy.h>
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
      namespace StrategyMapper
      {

        static constexpr uint32_t Rehost_HASH = ConstExprHashingUtils::HashString("Rehost");
        static constexpr uint32_t Retirement_HASH = ConstExprHashingUtils::HashString("Retirement");
        static constexpr uint32_t Refactor_HASH = ConstExprHashingUtils::HashString("Refactor");
        static constexpr uint32_t Replatform_HASH = ConstExprHashingUtils::HashString("Replatform");
        static constexpr uint32_t Retain_HASH = ConstExprHashingUtils::HashString("Retain");
        static constexpr uint32_t Relocate_HASH = ConstExprHashingUtils::HashString("Relocate");
        static constexpr uint32_t Repurchase_HASH = ConstExprHashingUtils::HashString("Repurchase");


        Strategy GetStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Rehost_HASH)
          {
            return Strategy::Rehost;
          }
          else if (hashCode == Retirement_HASH)
          {
            return Strategy::Retirement;
          }
          else if (hashCode == Refactor_HASH)
          {
            return Strategy::Refactor;
          }
          else if (hashCode == Replatform_HASH)
          {
            return Strategy::Replatform;
          }
          else if (hashCode == Retain_HASH)
          {
            return Strategy::Retain;
          }
          else if (hashCode == Relocate_HASH)
          {
            return Strategy::Relocate;
          }
          else if (hashCode == Repurchase_HASH)
          {
            return Strategy::Repurchase;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Strategy>(hashCode);
          }

          return Strategy::NOT_SET;
        }

        Aws::String GetNameForStrategy(Strategy enumValue)
        {
          switch(enumValue)
          {
          case Strategy::NOT_SET:
            return {};
          case Strategy::Rehost:
            return "Rehost";
          case Strategy::Retirement:
            return "Retirement";
          case Strategy::Refactor:
            return "Refactor";
          case Strategy::Replatform:
            return "Replatform";
          case Strategy::Retain:
            return "Retain";
          case Strategy::Relocate:
            return "Relocate";
          case Strategy::Repurchase:
            return "Repurchase";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StrategyMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
