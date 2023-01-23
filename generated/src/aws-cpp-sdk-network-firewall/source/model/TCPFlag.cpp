/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TCPFlag.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace TCPFlagMapper
      {

        static const int FIN_HASH = HashingUtils::HashString("FIN");
        static const int SYN_HASH = HashingUtils::HashString("SYN");
        static const int RST_HASH = HashingUtils::HashString("RST");
        static const int PSH_HASH = HashingUtils::HashString("PSH");
        static const int ACK_HASH = HashingUtils::HashString("ACK");
        static const int URG_HASH = HashingUtils::HashString("URG");
        static const int ECE_HASH = HashingUtils::HashString("ECE");
        static const int CWR_HASH = HashingUtils::HashString("CWR");


        TCPFlag GetTCPFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIN_HASH)
          {
            return TCPFlag::FIN;
          }
          else if (hashCode == SYN_HASH)
          {
            return TCPFlag::SYN;
          }
          else if (hashCode == RST_HASH)
          {
            return TCPFlag::RST;
          }
          else if (hashCode == PSH_HASH)
          {
            return TCPFlag::PSH;
          }
          else if (hashCode == ACK_HASH)
          {
            return TCPFlag::ACK;
          }
          else if (hashCode == URG_HASH)
          {
            return TCPFlag::URG;
          }
          else if (hashCode == ECE_HASH)
          {
            return TCPFlag::ECE;
          }
          else if (hashCode == CWR_HASH)
          {
            return TCPFlag::CWR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TCPFlag>(hashCode);
          }

          return TCPFlag::NOT_SET;
        }

        Aws::String GetNameForTCPFlag(TCPFlag enumValue)
        {
          switch(enumValue)
          {
          case TCPFlag::FIN:
            return "FIN";
          case TCPFlag::SYN:
            return "SYN";
          case TCPFlag::RST:
            return "RST";
          case TCPFlag::PSH:
            return "PSH";
          case TCPFlag::ACK:
            return "ACK";
          case TCPFlag::URG:
            return "URG";
          case TCPFlag::ECE:
            return "ECE";
          case TCPFlag::CWR:
            return "CWR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TCPFlagMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
