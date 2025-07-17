/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Codec.h>
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
      namespace CodecMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int AAC_HASH = HashingUtils::HashString("AAC");
        static const int AC3_HASH = HashingUtils::HashString("AC3");
        static const int EAC3_HASH = HashingUtils::HashString("EAC3");
        static const int FLAC_HASH = HashingUtils::HashString("FLAC");
        static const int MP3_HASH = HashingUtils::HashString("MP3");
        static const int OPUS_HASH = HashingUtils::HashString("OPUS");
        static const int PCM_HASH = HashingUtils::HashString("PCM");
        static const int VORBIS_HASH = HashingUtils::HashString("VORBIS");
        static const int AV1_HASH = HashingUtils::HashString("AV1");
        static const int AVC_HASH = HashingUtils::HashString("AVC");
        static const int HEVC_HASH = HashingUtils::HashString("HEVC");
        static const int JPEG2000_HASH = HashingUtils::HashString("JPEG2000");
        static const int MJPEG_HASH = HashingUtils::HashString("MJPEG");
        static const int MP4V_HASH = HashingUtils::HashString("MP4V");
        static const int MPEG2_HASH = HashingUtils::HashString("MPEG2");
        static const int PRORES_HASH = HashingUtils::HashString("PRORES");
        static const int THEORA_HASH = HashingUtils::HashString("THEORA");
        static const int VP8_HASH = HashingUtils::HashString("VP8");
        static const int VP9_HASH = HashingUtils::HashString("VP9");
        static const int C608_HASH = HashingUtils::HashString("C608");
        static const int C708_HASH = HashingUtils::HashString("C708");
        static const int WEBVTT_HASH = HashingUtils::HashString("WEBVTT");


        Codec GetCodecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return Codec::UNKNOWN;
          }
          else if (hashCode == AAC_HASH)
          {
            return Codec::AAC;
          }
          else if (hashCode == AC3_HASH)
          {
            return Codec::AC3;
          }
          else if (hashCode == EAC3_HASH)
          {
            return Codec::EAC3;
          }
          else if (hashCode == FLAC_HASH)
          {
            return Codec::FLAC;
          }
          else if (hashCode == MP3_HASH)
          {
            return Codec::MP3;
          }
          else if (hashCode == OPUS_HASH)
          {
            return Codec::OPUS;
          }
          else if (hashCode == PCM_HASH)
          {
            return Codec::PCM;
          }
          else if (hashCode == VORBIS_HASH)
          {
            return Codec::VORBIS;
          }
          else if (hashCode == AV1_HASH)
          {
            return Codec::AV1;
          }
          else if (hashCode == AVC_HASH)
          {
            return Codec::AVC;
          }
          else if (hashCode == HEVC_HASH)
          {
            return Codec::HEVC;
          }
          else if (hashCode == JPEG2000_HASH)
          {
            return Codec::JPEG2000;
          }
          else if (hashCode == MJPEG_HASH)
          {
            return Codec::MJPEG;
          }
          else if (hashCode == MP4V_HASH)
          {
            return Codec::MP4V;
          }
          else if (hashCode == MPEG2_HASH)
          {
            return Codec::MPEG2;
          }
          else if (hashCode == PRORES_HASH)
          {
            return Codec::PRORES;
          }
          else if (hashCode == THEORA_HASH)
          {
            return Codec::THEORA;
          }
          else if (hashCode == VP8_HASH)
          {
            return Codec::VP8;
          }
          else if (hashCode == VP9_HASH)
          {
            return Codec::VP9;
          }
          else if (hashCode == C608_HASH)
          {
            return Codec::C608;
          }
          else if (hashCode == C708_HASH)
          {
            return Codec::C708;
          }
          else if (hashCode == WEBVTT_HASH)
          {
            return Codec::WEBVTT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Codec>(hashCode);
          }

          return Codec::NOT_SET;
        }

        Aws::String GetNameForCodec(Codec enumValue)
        {
          switch(enumValue)
          {
          case Codec::NOT_SET:
            return {};
          case Codec::UNKNOWN:
            return "UNKNOWN";
          case Codec::AAC:
            return "AAC";
          case Codec::AC3:
            return "AC3";
          case Codec::EAC3:
            return "EAC3";
          case Codec::FLAC:
            return "FLAC";
          case Codec::MP3:
            return "MP3";
          case Codec::OPUS:
            return "OPUS";
          case Codec::PCM:
            return "PCM";
          case Codec::VORBIS:
            return "VORBIS";
          case Codec::AV1:
            return "AV1";
          case Codec::AVC:
            return "AVC";
          case Codec::HEVC:
            return "HEVC";
          case Codec::JPEG2000:
            return "JPEG2000";
          case Codec::MJPEG:
            return "MJPEG";
          case Codec::MP4V:
            return "MP4V";
          case Codec::MPEG2:
            return "MPEG2";
          case Codec::PRORES:
            return "PRORES";
          case Codec::THEORA:
            return "THEORA";
          case Codec::VP8:
            return "VP8";
          case Codec::VP9:
            return "VP9";
          case Codec::C608:
            return "C608";
          case Codec::C708:
            return "C708";
          case Codec::WEBVTT:
            return "WEBVTT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodecMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
