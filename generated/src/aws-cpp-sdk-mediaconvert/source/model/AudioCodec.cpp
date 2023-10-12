/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioCodec.h>
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
      namespace AudioCodecMapper
      {

        static constexpr uint32_t AAC_HASH = ConstExprHashingUtils::HashString("AAC");
        static constexpr uint32_t MP2_HASH = ConstExprHashingUtils::HashString("MP2");
        static constexpr uint32_t MP3_HASH = ConstExprHashingUtils::HashString("MP3");
        static constexpr uint32_t WAV_HASH = ConstExprHashingUtils::HashString("WAV");
        static constexpr uint32_t AIFF_HASH = ConstExprHashingUtils::HashString("AIFF");
        static constexpr uint32_t AC3_HASH = ConstExprHashingUtils::HashString("AC3");
        static constexpr uint32_t EAC3_HASH = ConstExprHashingUtils::HashString("EAC3");
        static constexpr uint32_t EAC3_ATMOS_HASH = ConstExprHashingUtils::HashString("EAC3_ATMOS");
        static constexpr uint32_t VORBIS_HASH = ConstExprHashingUtils::HashString("VORBIS");
        static constexpr uint32_t OPUS_HASH = ConstExprHashingUtils::HashString("OPUS");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");
        static constexpr uint32_t FLAC_HASH = ConstExprHashingUtils::HashString("FLAC");


        AudioCodec GetAudioCodecForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AAC_HASH)
          {
            return AudioCodec::AAC;
          }
          else if (hashCode == MP2_HASH)
          {
            return AudioCodec::MP2;
          }
          else if (hashCode == MP3_HASH)
          {
            return AudioCodec::MP3;
          }
          else if (hashCode == WAV_HASH)
          {
            return AudioCodec::WAV;
          }
          else if (hashCode == AIFF_HASH)
          {
            return AudioCodec::AIFF;
          }
          else if (hashCode == AC3_HASH)
          {
            return AudioCodec::AC3;
          }
          else if (hashCode == EAC3_HASH)
          {
            return AudioCodec::EAC3;
          }
          else if (hashCode == EAC3_ATMOS_HASH)
          {
            return AudioCodec::EAC3_ATMOS;
          }
          else if (hashCode == VORBIS_HASH)
          {
            return AudioCodec::VORBIS;
          }
          else if (hashCode == OPUS_HASH)
          {
            return AudioCodec::OPUS;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return AudioCodec::PASSTHROUGH;
          }
          else if (hashCode == FLAC_HASH)
          {
            return AudioCodec::FLAC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioCodec>(hashCode);
          }

          return AudioCodec::NOT_SET;
        }

        Aws::String GetNameForAudioCodec(AudioCodec enumValue)
        {
          switch(enumValue)
          {
          case AudioCodec::NOT_SET:
            return {};
          case AudioCodec::AAC:
            return "AAC";
          case AudioCodec::MP2:
            return "MP2";
          case AudioCodec::MP3:
            return "MP3";
          case AudioCodec::WAV:
            return "WAV";
          case AudioCodec::AIFF:
            return "AIFF";
          case AudioCodec::AC3:
            return "AC3";
          case AudioCodec::EAC3:
            return "EAC3";
          case AudioCodec::EAC3_ATMOS:
            return "EAC3_ATMOS";
          case AudioCodec::VORBIS:
            return "VORBIS";
          case AudioCodec::OPUS:
            return "OPUS";
          case AudioCodec::PASSTHROUGH:
            return "PASSTHROUGH";
          case AudioCodec::FLAC:
            return "FLAC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioCodecMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
