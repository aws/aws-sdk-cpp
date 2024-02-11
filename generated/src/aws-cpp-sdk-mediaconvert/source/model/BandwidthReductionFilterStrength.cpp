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

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        BandwidthReductionFilterStrength GetBandwidthReductionFilterStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
