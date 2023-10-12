/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioDurationCorrection.h>
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
      namespace AudioDurationCorrectionMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t TRACK_HASH = ConstExprHashingUtils::HashString("TRACK");
        static constexpr uint32_t FRAME_HASH = ConstExprHashingUtils::HashString("FRAME");


        AudioDurationCorrection GetAudioDurationCorrectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return AudioDurationCorrection::DISABLED;
          }
          else if (hashCode == AUTO_HASH)
          {
            return AudioDurationCorrection::AUTO;
          }
          else if (hashCode == TRACK_HASH)
          {
            return AudioDurationCorrection::TRACK;
          }
          else if (hashCode == FRAME_HASH)
          {
            return AudioDurationCorrection::FRAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioDurationCorrection>(hashCode);
          }

          return AudioDurationCorrection::NOT_SET;
        }

        Aws::String GetNameForAudioDurationCorrection(AudioDurationCorrection enumValue)
        {
          switch(enumValue)
          {
          case AudioDurationCorrection::NOT_SET:
            return {};
          case AudioDurationCorrection::DISABLED:
            return "DISABLED";
          case AudioDurationCorrection::AUTO:
            return "AUTO";
          case AudioDurationCorrection::TRACK:
            return "TRACK";
          case AudioDurationCorrection::FRAME:
            return "FRAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioDurationCorrectionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
