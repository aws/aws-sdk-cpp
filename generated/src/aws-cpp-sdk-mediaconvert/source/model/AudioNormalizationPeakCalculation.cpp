/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioNormalizationPeakCalculation.h>
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
      namespace AudioNormalizationPeakCalculationMapper
      {

        static constexpr uint32_t TRUE_PEAK_HASH = ConstExprHashingUtils::HashString("TRUE_PEAK");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        AudioNormalizationPeakCalculation GetAudioNormalizationPeakCalculationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_PEAK_HASH)
          {
            return AudioNormalizationPeakCalculation::TRUE_PEAK;
          }
          else if (hashCode == NONE_HASH)
          {
            return AudioNormalizationPeakCalculation::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationPeakCalculation>(hashCode);
          }

          return AudioNormalizationPeakCalculation::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationPeakCalculation(AudioNormalizationPeakCalculation enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationPeakCalculation::NOT_SET:
            return {};
          case AudioNormalizationPeakCalculation::TRUE_PEAK:
            return "TRUE_PEAK";
          case AudioNormalizationPeakCalculation::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationPeakCalculationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
