/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NoiseFilterPostTemporalSharpeningStrength.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace NoiseFilterPostTemporalSharpeningStrengthMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");


        NoiseFilterPostTemporalSharpeningStrength GetNoiseFilterPostTemporalSharpeningStrengthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return NoiseFilterPostTemporalSharpeningStrength::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return NoiseFilterPostTemporalSharpeningStrength::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return NoiseFilterPostTemporalSharpeningStrength::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoiseFilterPostTemporalSharpeningStrength>(hashCode);
          }

          return NoiseFilterPostTemporalSharpeningStrength::NOT_SET;
        }

        Aws::String GetNameForNoiseFilterPostTemporalSharpeningStrength(NoiseFilterPostTemporalSharpeningStrength enumValue)
        {
          switch(enumValue)
          {
          case NoiseFilterPostTemporalSharpeningStrength::NOT_SET:
            return {};
          case NoiseFilterPostTemporalSharpeningStrength::LOW:
            return "LOW";
          case NoiseFilterPostTemporalSharpeningStrength::MEDIUM:
            return "MEDIUM";
          case NoiseFilterPostTemporalSharpeningStrength::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NoiseFilterPostTemporalSharpeningStrengthMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
