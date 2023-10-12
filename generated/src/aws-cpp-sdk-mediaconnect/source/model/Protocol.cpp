/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Protocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace ProtocolMapper
      {

        static constexpr uint32_t zixi_push_HASH = ConstExprHashingUtils::HashString("zixi-push");
        static constexpr uint32_t rtp_fec_HASH = ConstExprHashingUtils::HashString("rtp-fec");
        static constexpr uint32_t rtp_HASH = ConstExprHashingUtils::HashString("rtp");
        static constexpr uint32_t zixi_pull_HASH = ConstExprHashingUtils::HashString("zixi-pull");
        static constexpr uint32_t rist_HASH = ConstExprHashingUtils::HashString("rist");
        static constexpr uint32_t st2110_jpegxs_HASH = ConstExprHashingUtils::HashString("st2110-jpegxs");
        static constexpr uint32_t cdi_HASH = ConstExprHashingUtils::HashString("cdi");
        static constexpr uint32_t srt_listener_HASH = ConstExprHashingUtils::HashString("srt-listener");
        static constexpr uint32_t srt_caller_HASH = ConstExprHashingUtils::HashString("srt-caller");
        static constexpr uint32_t fujitsu_qos_HASH = ConstExprHashingUtils::HashString("fujitsu-qos");
        static constexpr uint32_t udp_HASH = ConstExprHashingUtils::HashString("udp");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == zixi_push_HASH)
          {
            return Protocol::zixi_push;
          }
          else if (hashCode == rtp_fec_HASH)
          {
            return Protocol::rtp_fec;
          }
          else if (hashCode == rtp_HASH)
          {
            return Protocol::rtp;
          }
          else if (hashCode == zixi_pull_HASH)
          {
            return Protocol::zixi_pull;
          }
          else if (hashCode == rist_HASH)
          {
            return Protocol::rist;
          }
          else if (hashCode == st2110_jpegxs_HASH)
          {
            return Protocol::st2110_jpegxs;
          }
          else if (hashCode == cdi_HASH)
          {
            return Protocol::cdi;
          }
          else if (hashCode == srt_listener_HASH)
          {
            return Protocol::srt_listener;
          }
          else if (hashCode == srt_caller_HASH)
          {
            return Protocol::srt_caller;
          }
          else if (hashCode == fujitsu_qos_HASH)
          {
            return Protocol::fujitsu_qos;
          }
          else if (hashCode == udp_HASH)
          {
            return Protocol::udp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Protocol>(hashCode);
          }

          return Protocol::NOT_SET;
        }

        Aws::String GetNameForProtocol(Protocol enumValue)
        {
          switch(enumValue)
          {
          case Protocol::NOT_SET:
            return {};
          case Protocol::zixi_push:
            return "zixi-push";
          case Protocol::rtp_fec:
            return "rtp-fec";
          case Protocol::rtp:
            return "rtp";
          case Protocol::zixi_pull:
            return "zixi-pull";
          case Protocol::rist:
            return "rist";
          case Protocol::st2110_jpegxs:
            return "st2110-jpegxs";
          case Protocol::cdi:
            return "cdi";
          case Protocol::srt_listener:
            return "srt-listener";
          case Protocol::srt_caller:
            return "srt-caller";
          case Protocol::fujitsu_qos:
            return "fujitsu-qos";
          case Protocol::udp:
            return "udp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
