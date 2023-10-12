/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MediaFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace MediaFormatMapper
      {

        static constexpr uint32_t mp3_HASH = ConstExprHashingUtils::HashString("mp3");
        static constexpr uint32_t mp4_HASH = ConstExprHashingUtils::HashString("mp4");
        static constexpr uint32_t wav_HASH = ConstExprHashingUtils::HashString("wav");
        static constexpr uint32_t flac_HASH = ConstExprHashingUtils::HashString("flac");
        static constexpr uint32_t ogg_HASH = ConstExprHashingUtils::HashString("ogg");
        static constexpr uint32_t amr_HASH = ConstExprHashingUtils::HashString("amr");
        static constexpr uint32_t webm_HASH = ConstExprHashingUtils::HashString("webm");
        static constexpr uint32_t m4a_HASH = ConstExprHashingUtils::HashString("m4a");


        MediaFormat GetMediaFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == mp3_HASH)
          {
            return MediaFormat::mp3;
          }
          else if (hashCode == mp4_HASH)
          {
            return MediaFormat::mp4;
          }
          else if (hashCode == wav_HASH)
          {
            return MediaFormat::wav;
          }
          else if (hashCode == flac_HASH)
          {
            return MediaFormat::flac;
          }
          else if (hashCode == ogg_HASH)
          {
            return MediaFormat::ogg;
          }
          else if (hashCode == amr_HASH)
          {
            return MediaFormat::amr;
          }
          else if (hashCode == webm_HASH)
          {
            return MediaFormat::webm;
          }
          else if (hashCode == m4a_HASH)
          {
            return MediaFormat::m4a;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaFormat>(hashCode);
          }

          return MediaFormat::NOT_SET;
        }

        Aws::String GetNameForMediaFormat(MediaFormat enumValue)
        {
          switch(enumValue)
          {
          case MediaFormat::NOT_SET:
            return {};
          case MediaFormat::mp3:
            return "mp3";
          case MediaFormat::mp4:
            return "mp4";
          case MediaFormat::wav:
            return "wav";
          case MediaFormat::flac:
            return "flac";
          case MediaFormat::ogg:
            return "ogg";
          case MediaFormat::amr:
            return "amr";
          case MediaFormat::webm:
            return "webm";
          case MediaFormat::m4a:
            return "m4a";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaFormatMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
