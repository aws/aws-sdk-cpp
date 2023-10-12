/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioNormalizationAlgorithm.h>
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
      namespace AudioNormalizationAlgorithmMapper
      {

        static constexpr uint32_t ITU_BS_1770_1_HASH = ConstExprHashingUtils::HashString("ITU_BS_1770_1");
        static constexpr uint32_t ITU_BS_1770_2_HASH = ConstExprHashingUtils::HashString("ITU_BS_1770_2");
        static constexpr uint32_t ITU_BS_1770_3_HASH = ConstExprHashingUtils::HashString("ITU_BS_1770_3");
        static constexpr uint32_t ITU_BS_1770_4_HASH = ConstExprHashingUtils::HashString("ITU_BS_1770_4");


        AudioNormalizationAlgorithm GetAudioNormalizationAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ITU_BS_1770_1_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_1;
          }
          else if (hashCode == ITU_BS_1770_2_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_2;
          }
          else if (hashCode == ITU_BS_1770_3_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_3;
          }
          else if (hashCode == ITU_BS_1770_4_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationAlgorithm>(hashCode);
          }

          return AudioNormalizationAlgorithm::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationAlgorithm(AudioNormalizationAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationAlgorithm::NOT_SET:
            return {};
          case AudioNormalizationAlgorithm::ITU_BS_1770_1:
            return "ITU_BS_1770_1";
          case AudioNormalizationAlgorithm::ITU_BS_1770_2:
            return "ITU_BS_1770_2";
          case AudioNormalizationAlgorithm::ITU_BS_1770_3:
            return "ITU_BS_1770_3";
          case AudioNormalizationAlgorithm::ITU_BS_1770_4:
            return "ITU_BS_1770_4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
