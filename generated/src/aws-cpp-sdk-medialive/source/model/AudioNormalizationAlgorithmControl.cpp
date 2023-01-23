/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioNormalizationAlgorithmControl.h>
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
      namespace AudioNormalizationAlgorithmControlMapper
      {

        static const int CORRECT_AUDIO_HASH = HashingUtils::HashString("CORRECT_AUDIO");


        AudioNormalizationAlgorithmControl GetAudioNormalizationAlgorithmControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CORRECT_AUDIO_HASH)
          {
            return AudioNormalizationAlgorithmControl::CORRECT_AUDIO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationAlgorithmControl>(hashCode);
          }

          return AudioNormalizationAlgorithmControl::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationAlgorithmControl(AudioNormalizationAlgorithmControl enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationAlgorithmControl::CORRECT_AUDIO:
            return "CORRECT_AUDIO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationAlgorithmControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
