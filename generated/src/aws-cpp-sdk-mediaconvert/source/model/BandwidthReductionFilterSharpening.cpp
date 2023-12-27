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

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        BandwidthReductionFilterSharpening GetBandwidthReductionFilterSharpeningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
