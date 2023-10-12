/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulRuleProtocol.h>
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
      namespace StatefulRuleProtocolMapper
      {

        static constexpr uint32_t IP_HASH = ConstExprHashingUtils::HashString("IP");
        static constexpr uint32_t TCP_HASH = ConstExprHashingUtils::HashString("TCP");
        static constexpr uint32_t UDP_HASH = ConstExprHashingUtils::HashString("UDP");
        static constexpr uint32_t ICMP_HASH = ConstExprHashingUtils::HashString("ICMP");
        static constexpr uint32_t HTTP_HASH = ConstExprHashingUtils::HashString("HTTP");
        static constexpr uint32_t FTP_HASH = ConstExprHashingUtils::HashString("FTP");
        static constexpr uint32_t TLS_HASH = ConstExprHashingUtils::HashString("TLS");
        static constexpr uint32_t SMB_HASH = ConstExprHashingUtils::HashString("SMB");
        static constexpr uint32_t DNS_HASH = ConstExprHashingUtils::HashString("DNS");
        static constexpr uint32_t DCERPC_HASH = ConstExprHashingUtils::HashString("DCERPC");
        static constexpr uint32_t SSH_HASH = ConstExprHashingUtils::HashString("SSH");
        static constexpr uint32_t SMTP_HASH = ConstExprHashingUtils::HashString("SMTP");
        static constexpr uint32_t IMAP_HASH = ConstExprHashingUtils::HashString("IMAP");
        static constexpr uint32_t MSN_HASH = ConstExprHashingUtils::HashString("MSN");
        static constexpr uint32_t KRB5_HASH = ConstExprHashingUtils::HashString("KRB5");
        static constexpr uint32_t IKEV2_HASH = ConstExprHashingUtils::HashString("IKEV2");
        static constexpr uint32_t TFTP_HASH = ConstExprHashingUtils::HashString("TFTP");
        static constexpr uint32_t NTP_HASH = ConstExprHashingUtils::HashString("NTP");
        static constexpr uint32_t DHCP_HASH = ConstExprHashingUtils::HashString("DHCP");


        StatefulRuleProtocol GetStatefulRuleProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return StatefulRuleProtocol::IP;
          }
          else if (hashCode == TCP_HASH)
          {
            return StatefulRuleProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return StatefulRuleProtocol::UDP;
          }
          else if (hashCode == ICMP_HASH)
          {
            return StatefulRuleProtocol::ICMP;
          }
          else if (hashCode == HTTP_HASH)
          {
            return StatefulRuleProtocol::HTTP;
          }
          else if (hashCode == FTP_HASH)
          {
            return StatefulRuleProtocol::FTP;
          }
          else if (hashCode == TLS_HASH)
          {
            return StatefulRuleProtocol::TLS;
          }
          else if (hashCode == SMB_HASH)
          {
            return StatefulRuleProtocol::SMB;
          }
          else if (hashCode == DNS_HASH)
          {
            return StatefulRuleProtocol::DNS;
          }
          else if (hashCode == DCERPC_HASH)
          {
            return StatefulRuleProtocol::DCERPC;
          }
          else if (hashCode == SSH_HASH)
          {
            return StatefulRuleProtocol::SSH;
          }
          else if (hashCode == SMTP_HASH)
          {
            return StatefulRuleProtocol::SMTP;
          }
          else if (hashCode == IMAP_HASH)
          {
            return StatefulRuleProtocol::IMAP;
          }
          else if (hashCode == MSN_HASH)
          {
            return StatefulRuleProtocol::MSN;
          }
          else if (hashCode == KRB5_HASH)
          {
            return StatefulRuleProtocol::KRB5;
          }
          else if (hashCode == IKEV2_HASH)
          {
            return StatefulRuleProtocol::IKEV2;
          }
          else if (hashCode == TFTP_HASH)
          {
            return StatefulRuleProtocol::TFTP;
          }
          else if (hashCode == NTP_HASH)
          {
            return StatefulRuleProtocol::NTP;
          }
          else if (hashCode == DHCP_HASH)
          {
            return StatefulRuleProtocol::DHCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatefulRuleProtocol>(hashCode);
          }

          return StatefulRuleProtocol::NOT_SET;
        }

        Aws::String GetNameForStatefulRuleProtocol(StatefulRuleProtocol enumValue)
        {
          switch(enumValue)
          {
          case StatefulRuleProtocol::NOT_SET:
            return {};
          case StatefulRuleProtocol::IP:
            return "IP";
          case StatefulRuleProtocol::TCP:
            return "TCP";
          case StatefulRuleProtocol::UDP:
            return "UDP";
          case StatefulRuleProtocol::ICMP:
            return "ICMP";
          case StatefulRuleProtocol::HTTP:
            return "HTTP";
          case StatefulRuleProtocol::FTP:
            return "FTP";
          case StatefulRuleProtocol::TLS:
            return "TLS";
          case StatefulRuleProtocol::SMB:
            return "SMB";
          case StatefulRuleProtocol::DNS:
            return "DNS";
          case StatefulRuleProtocol::DCERPC:
            return "DCERPC";
          case StatefulRuleProtocol::SSH:
            return "SSH";
          case StatefulRuleProtocol::SMTP:
            return "SMTP";
          case StatefulRuleProtocol::IMAP:
            return "IMAP";
          case StatefulRuleProtocol::MSN:
            return "MSN";
          case StatefulRuleProtocol::KRB5:
            return "KRB5";
          case StatefulRuleProtocol::IKEV2:
            return "IKEV2";
          case StatefulRuleProtocol::TFTP:
            return "TFTP";
          case StatefulRuleProtocol::NTP:
            return "NTP";
          case StatefulRuleProtocol::DHCP:
            return "DHCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatefulRuleProtocolMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
