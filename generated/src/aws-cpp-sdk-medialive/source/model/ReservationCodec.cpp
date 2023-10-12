/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationCodec.h>
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
      namespace ReservationCodecMapper
      {

        static constexpr uint32_t MPEG2_HASH = ConstExprHashingUtils::HashString("MPEG2");
        static constexpr uint32_t AVC_HASH = ConstExprHashingUtils::HashString("AVC");
        static constexpr uint32_t HEVC_HASH = ConstExprHashingUtils::HashString("HEVC");
        static constexpr uint32_t AUDIO_HASH = ConstExprHashingUtils::HashString("AUDIO");
        static constexpr uint32_t LINK_HASH = ConstExprHashingUtils::HashString("LINK");


        ReservationCodec GetReservationCodecForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MPEG2_HASH)
          {
            return ReservationCodec::MPEG2;
          }
          else if (hashCode == AVC_HASH)
          {
            return ReservationCodec::AVC;
          }
          else if (hashCode == HEVC_HASH)
          {
            return ReservationCodec::HEVC;
          }
          else if (hashCode == AUDIO_HASH)
          {
            return ReservationCodec::AUDIO;
          }
          else if (hashCode == LINK_HASH)
          {
            return ReservationCodec::LINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationCodec>(hashCode);
          }

          return ReservationCodec::NOT_SET;
        }

        Aws::String GetNameForReservationCodec(ReservationCodec enumValue)
        {
          switch(enumValue)
          {
          case ReservationCodec::NOT_SET:
            return {};
          case ReservationCodec::MPEG2:
            return "MPEG2";
          case ReservationCodec::AVC:
            return "AVC";
          case ReservationCodec::HEVC:
            return "HEVC";
          case ReservationCodec::AUDIO:
            return "AUDIO";
          case ReservationCodec::LINK:
            return "LINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationCodecMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
