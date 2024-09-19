/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BandwidthReductionFilterStrength.h>
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
      namespace BandwidthReductionFilterStrengthMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int STRENGTH_1_HASH = HashingUtils::HashString("STRENGTH_1");
        static const int STRENGTH_2_HASH = HashingUtils::HashString("STRENGTH_2");
        static const int STRENGTH_3_HASH = HashingUtils::HashString("STRENGTH_3");
        static const int STRENGTH_4_HASH = HashingUtils::HashString("STRENGTH_4");


        BandwidthReductionFilterStrength GetBandwidthReductionFilterStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return BandwidthReductionFilterStrength::AUTO;
          }
          else if (hashCode == STRENGTH_1_HASH)
          {
            return BandwidthReductionFilterStrength::STRENGTH_1;
          }
          else if (hashCode == STRENGTH_2_HASH)
          {
            return BandwidthReductionFilterStrength::STRENGTH_2;
          }
          else if (hashCode == STRENGTH_3_HASH)
          {
            return BandwidthReductionFilterStrength::STRENGTH_3;
          }
          else if (hashCode == STRENGTH_4_HASH)
          {
            return BandwidthReductionFilterStrength::STRENGTH_4;
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
          case BandwidthReductionFilterStrength::AUTO:
            return "AUTO";
          case BandwidthReductionFilterStrength::STRENGTH_1:
            return "STRENGTH_1";
          case BandwidthReductionFilterStrength::STRENGTH_2:
            return "STRENGTH_2";
          case BandwidthReductionFilterStrength::STRENGTH_3:
            return "STRENGTH_3";
          case BandwidthReductionFilterStrength::STRENGTH_4:
            return "STRENGTH_4";
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
  } // namespace MediaLive
} // namespace Aws
