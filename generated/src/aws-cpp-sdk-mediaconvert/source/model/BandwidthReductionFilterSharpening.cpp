/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BandwidthReductionFilterSharpening.h>
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
      namespace BandwidthReductionFilterSharpeningMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");


        BandwidthReductionFilterSharpening GetBandwidthReductionFilterSharpeningForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return BandwidthReductionFilterSharpening::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return BandwidthReductionFilterSharpening::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return BandwidthReductionFilterSharpening::HIGH;
          }
          else if (hashCode == OFF_HASH)
          {
            return BandwidthReductionFilterSharpening::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BandwidthReductionFilterSharpening>(hashCode);
          }

          return BandwidthReductionFilterSharpening::NOT_SET;
        }

        Aws::String GetNameForBandwidthReductionFilterSharpening(BandwidthReductionFilterSharpening enumValue)
        {
          switch(enumValue)
          {
          case BandwidthReductionFilterSharpening::NOT_SET:
            return {};
          case BandwidthReductionFilterSharpening::LOW:
            return "LOW";
          case BandwidthReductionFilterSharpening::MEDIUM:
            return "MEDIUM";
          case BandwidthReductionFilterSharpening::HIGH:
            return "HIGH";
          case BandwidthReductionFilterSharpening::OFF:
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

      } // namespace BandwidthReductionFilterSharpeningMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
