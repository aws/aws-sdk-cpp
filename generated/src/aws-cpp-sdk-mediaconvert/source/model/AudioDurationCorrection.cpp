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

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int TRACK_HASH = HashingUtils::HashString("TRACK");
        static const int FRAME_HASH = HashingUtils::HashString("FRAME");


        AudioDurationCorrection GetAudioDurationCorrectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
