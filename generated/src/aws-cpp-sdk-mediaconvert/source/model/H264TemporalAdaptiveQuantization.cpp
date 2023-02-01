/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264TemporalAdaptiveQuantization.h>
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
      namespace H264TemporalAdaptiveQuantizationMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H264TemporalAdaptiveQuantization GetH264TemporalAdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264TemporalAdaptiveQuantization::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264TemporalAdaptiveQuantization::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264TemporalAdaptiveQuantization>(hashCode);
          }

          return H264TemporalAdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForH264TemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case H264TemporalAdaptiveQuantization::DISABLED:
            return "DISABLED";
          case H264TemporalAdaptiveQuantization::ENABLED:
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

      } // namespace H264TemporalAdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
