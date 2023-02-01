/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2TemporalAdaptiveQuantization.h>
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
      namespace Mpeg2TemporalAdaptiveQuantizationMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        Mpeg2TemporalAdaptiveQuantization GetMpeg2TemporalAdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Mpeg2TemporalAdaptiveQuantization::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Mpeg2TemporalAdaptiveQuantization::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2TemporalAdaptiveQuantization>(hashCode);
          }

          return Mpeg2TemporalAdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForMpeg2TemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2TemporalAdaptiveQuantization::DISABLED:
            return "DISABLED";
          case Mpeg2TemporalAdaptiveQuantization::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2TemporalAdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
