/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ForecastComputationSeasonality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ForecastComputationSeasonalityMapper
      {

        static constexpr uint32_t AUTOMATIC_HASH = ConstExprHashingUtils::HashString("AUTOMATIC");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        ForecastComputationSeasonality GetForecastComputationSeasonalityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return ForecastComputationSeasonality::AUTOMATIC;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ForecastComputationSeasonality::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ForecastComputationSeasonality>(hashCode);
          }

          return ForecastComputationSeasonality::NOT_SET;
        }

        Aws::String GetNameForForecastComputationSeasonality(ForecastComputationSeasonality enumValue)
        {
          switch(enumValue)
          {
          case ForecastComputationSeasonality::NOT_SET:
            return {};
          case ForecastComputationSeasonality::AUTOMATIC:
            return "AUTOMATIC";
          case ForecastComputationSeasonality::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ForecastComputationSeasonalityMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
