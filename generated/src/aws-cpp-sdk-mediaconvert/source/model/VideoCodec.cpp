/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoCodec.h>
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
      namespace VideoCodecMapper
      {

        static constexpr uint32_t AV1_HASH = ConstExprHashingUtils::HashString("AV1");
        static constexpr uint32_t AVC_INTRA_HASH = ConstExprHashingUtils::HashString("AVC_INTRA");
        static constexpr uint32_t FRAME_CAPTURE_HASH = ConstExprHashingUtils::HashString("FRAME_CAPTURE");
        static constexpr uint32_t H_264_HASH = ConstExprHashingUtils::HashString("H_264");
        static constexpr uint32_t H_265_HASH = ConstExprHashingUtils::HashString("H_265");
        static constexpr uint32_t MPEG2_HASH = ConstExprHashingUtils::HashString("MPEG2");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");
        static constexpr uint32_t PRORES_HASH = ConstExprHashingUtils::HashString("PRORES");
        static constexpr uint32_t VC3_HASH = ConstExprHashingUtils::HashString("VC3");
        static constexpr uint32_t VP8_HASH = ConstExprHashingUtils::HashString("VP8");
        static constexpr uint32_t VP9_HASH = ConstExprHashingUtils::HashString("VP9");
        static constexpr uint32_t XAVC_HASH = ConstExprHashingUtils::HashString("XAVC");


        VideoCodec GetVideoCodecForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AV1_HASH)
          {
            return VideoCodec::AV1;
          }
          else if (hashCode == AVC_INTRA_HASH)
          {
            return VideoCodec::AVC_INTRA;
          }
          else if (hashCode == FRAME_CAPTURE_HASH)
          {
            return VideoCodec::FRAME_CAPTURE;
          }
          else if (hashCode == H_264_HASH)
          {
            return VideoCodec::H_264;
          }
          else if (hashCode == H_265_HASH)
          {
            return VideoCodec::H_265;
          }
          else if (hashCode == MPEG2_HASH)
          {
            return VideoCodec::MPEG2;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return VideoCodec::PASSTHROUGH;
          }
          else if (hashCode == PRORES_HASH)
          {
            return VideoCodec::PRORES;
          }
          else if (hashCode == VC3_HASH)
          {
            return VideoCodec::VC3;
          }
          else if (hashCode == VP8_HASH)
          {
            return VideoCodec::VP8;
          }
          else if (hashCode == VP9_HASH)
          {
            return VideoCodec::VP9;
          }
          else if (hashCode == XAVC_HASH)
          {
            return VideoCodec::XAVC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoCodec>(hashCode);
          }

          return VideoCodec::NOT_SET;
        }

        Aws::String GetNameForVideoCodec(VideoCodec enumValue)
        {
          switch(enumValue)
          {
          case VideoCodec::NOT_SET:
            return {};
          case VideoCodec::AV1:
            return "AV1";
          case VideoCodec::AVC_INTRA:
            return "AVC_INTRA";
          case VideoCodec::FRAME_CAPTURE:
            return "FRAME_CAPTURE";
          case VideoCodec::H_264:
            return "H_264";
          case VideoCodec::H_265:
            return "H_265";
          case VideoCodec::MPEG2:
            return "MPEG2";
          case VideoCodec::PASSTHROUGH:
            return "PASSTHROUGH";
          case VideoCodec::PRORES:
            return "PRORES";
          case VideoCodec::VC3:
            return "VC3";
          case VideoCodec::VP8:
            return "VP8";
          case VideoCodec::VP9:
            return "VP9";
          case VideoCodec::XAVC:
            return "XAVC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoCodecMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
