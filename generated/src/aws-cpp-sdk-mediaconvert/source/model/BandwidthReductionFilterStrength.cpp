/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BandwidthReductionFilterStrength.h>
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
      namespace BandwidthReductionFilterStrengthMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");


        BandwidthReductionFilterStrength GetBandwidthReductionFilterStrengthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return BandwidthReductionFilterStrength::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return BandwidthReductionFilterStrength::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return BandwidthReductionFilterStrength::HIGH;
          }
          else if (hashCode == AUTO_HASH)
          {
            return BandwidthReductionFilterStrength::AUTO;
          }
          else if (hashCode == OFF_HASH)
          {
            return BandwidthReductionFilterStrength::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BandwidthReductionFilterStrength>(hashCode);
          }

          return BandwidthReductionFilterStrength::NOT_SET;
        }

        Aws::String GetNameForBandwidthReductionFilterStrength(BandwidthReductionFilterStrength enumValue)
        {
          switch(enumValue)
          {
          case BandwidthReductionFilterStrength::NOT_SET:
            return {};
          case BandwidthReductionFilterStrength::LOW:
            return "LOW";
          case BandwidthReductionFilterStrength::MEDIUM:
            return "MEDIUM";
          case BandwidthReductionFilterStrength::HIGH:
            return "HIGH";
          case BandwidthReductionFilterStrength::AUTO:
            return "AUTO";
          case BandwidthReductionFilterStrength::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BandwidthReductionFilterStrengthMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
