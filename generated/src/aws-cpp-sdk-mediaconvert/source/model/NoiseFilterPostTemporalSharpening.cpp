/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NoiseFilterPostTemporalSharpening.h>
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
      namespace NoiseFilterPostTemporalSharpeningMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        NoiseFilterPostTemporalSharpening GetNoiseFilterPostTemporalSharpeningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return NoiseFilterPostTemporalSharpening::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return NoiseFilterPostTemporalSharpening::ENABLED;
          }
          else if (hashCode == AUTO_HASH)
          {
            return NoiseFilterPostTemporalSharpening::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoiseFilterPostTemporalSharpening>(hashCode);
          }

          return NoiseFilterPostTemporalSharpening::NOT_SET;
        }

        Aws::String GetNameForNoiseFilterPostTemporalSharpening(NoiseFilterPostTemporalSharpening enumValue)
        {
          switch(enumValue)
          {
          case NoiseFilterPostTemporalSharpening::DISABLED:
            return "DISABLED";
          case NoiseFilterPostTemporalSharpening::ENABLED:
            return "ENABLED";
          case NoiseFilterPostTemporalSharpening::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NoiseFilterPostTemporalSharpeningMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
