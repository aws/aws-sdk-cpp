/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdAudioDuration.h>
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
      namespace MpdAudioDurationMapper
      {

        static const int DEFAULT_CODEC_DURATION_HASH = HashingUtils::HashString("DEFAULT_CODEC_DURATION");
        static const int MATCH_VIDEO_DURATION_HASH = HashingUtils::HashString("MATCH_VIDEO_DURATION");


        MpdAudioDuration GetMpdAudioDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_CODEC_DURATION_HASH)
          {
            return MpdAudioDuration::DEFAULT_CODEC_DURATION;
          }
          else if (hashCode == MATCH_VIDEO_DURATION_HASH)
          {
            return MpdAudioDuration::MATCH_VIDEO_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdAudioDuration>(hashCode);
          }

          return MpdAudioDuration::NOT_SET;
        }

        Aws::String GetNameForMpdAudioDuration(MpdAudioDuration enumValue)
        {
          switch(enumValue)
          {
          case MpdAudioDuration::DEFAULT_CODEC_DURATION:
            return "DEFAULT_CODEC_DURATION";
          case MpdAudioDuration::MATCH_VIDEO_DURATION:
            return "MATCH_VIDEO_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdAudioDurationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
