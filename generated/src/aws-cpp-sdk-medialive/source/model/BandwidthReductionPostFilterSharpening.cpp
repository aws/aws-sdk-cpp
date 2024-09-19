/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BandwidthReductionPostFilterSharpening.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace BandwidthReductionPostFilterSharpeningMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SHARPENING_1_HASH = HashingUtils::HashString("SHARPENING_1");
        static const int SHARPENING_2_HASH = HashingUtils::HashString("SHARPENING_2");
        static const int SHARPENING_3_HASH = HashingUtils::HashString("SHARPENING_3");


        BandwidthReductionPostFilterSharpening GetBandwidthReductionPostFilterSharpeningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return BandwidthReductionPostFilterSharpening::DISABLED;
          }
          else if (hashCode == SHARPENING_1_HASH)
          {
            return BandwidthReductionPostFilterSharpening::SHARPENING_1;
          }
          else if (hashCode == SHARPENING_2_HASH)
          {
            return BandwidthReductionPostFilterSharpening::SHARPENING_2;
          }
          else if (hashCode == SHARPENING_3_HASH)
          {
            return BandwidthReductionPostFilterSharpening::SHARPENING_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BandwidthReductionPostFilterSharpening>(hashCode);
          }

          return BandwidthReductionPostFilterSharpening::NOT_SET;
        }

        Aws::String GetNameForBandwidthReductionPostFilterSharpening(BandwidthReductionPostFilterSharpening enumValue)
        {
          switch(enumValue)
          {
          case BandwidthReductionPostFilterSharpening::NOT_SET:
            return {};
          case BandwidthReductionPostFilterSharpening::DISABLED:
            return "DISABLED";
          case BandwidthReductionPostFilterSharpening::SHARPENING_1:
            return "SHARPENING_1";
          case BandwidthReductionPostFilterSharpening::SHARPENING_2:
            return "SHARPENING_2";
          case BandwidthReductionPostFilterSharpening::SHARPENING_3:
            return "SHARPENING_3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BandwidthReductionPostFilterSharpeningMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
