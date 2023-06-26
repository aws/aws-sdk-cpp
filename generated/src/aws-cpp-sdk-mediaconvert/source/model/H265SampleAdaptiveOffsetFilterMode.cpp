/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265SampleAdaptiveOffsetFilterMode.h>
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
      namespace H265SampleAdaptiveOffsetFilterModeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ADAPTIVE_HASH = HashingUtils::HashString("ADAPTIVE");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        H265SampleAdaptiveOffsetFilterMode GetH265SampleAdaptiveOffsetFilterModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return H265SampleAdaptiveOffsetFilterMode::DEFAULT;
          }
          else if (hashCode == ADAPTIVE_HASH)
          {
            return H265SampleAdaptiveOffsetFilterMode::ADAPTIVE;
          }
          else if (hashCode == OFF_HASH)
          {
            return H265SampleAdaptiveOffsetFilterMode::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265SampleAdaptiveOffsetFilterMode>(hashCode);
          }

          return H265SampleAdaptiveOffsetFilterMode::NOT_SET;
        }

        Aws::String GetNameForH265SampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode enumValue)
        {
          switch(enumValue)
          {
          case H265SampleAdaptiveOffsetFilterMode::DEFAULT:
            return "DEFAULT";
          case H265SampleAdaptiveOffsetFilterMode::ADAPTIVE:
            return "ADAPTIVE";
          case H265SampleAdaptiveOffsetFilterMode::OFF:
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

      } // namespace H265SampleAdaptiveOffsetFilterModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
