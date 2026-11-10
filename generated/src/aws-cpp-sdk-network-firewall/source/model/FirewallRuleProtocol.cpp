/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/FirewallRuleProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace FirewallRuleProtocolMapper {

static const int IP_HASH = HashingUtils::HashString("IP");
static const int TCP_HASH = HashingUtils::HashString("TCP");
static const int UDP_HASH = HashingUtils::HashString("UDP");
static const int ICMP_HASH = HashingUtils::HashString("ICMP");
static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int FTP_HASH = HashingUtils::HashString("FTP");
static const int TLS_HASH = HashingUtils::HashString("TLS");
static const int SMB_HASH = HashingUtils::HashString("SMB");
static const int DNS_HASH = HashingUtils::HashString("DNS");
static const int DCERPC_HASH = HashingUtils::HashString("DCERPC");
static const int SSH_HASH = HashingUtils::HashString("SSH");
static const int SMTP_HASH = HashingUtils::HashString("SMTP");
static const int MSN_HASH = HashingUtils::HashString("MSN");
static const int KRB5_HASH = HashingUtils::HashString("KRB5");
static const int IKEV2_HASH = HashingUtils::HashString("IKEV2");
static const int TFTP_HASH = HashingUtils::HashString("TFTP");
static const int NTP_HASH = HashingUtils::HashString("NTP");
static const int DHCP_HASH = HashingUtils::HashString("DHCP");
static const int HTTP2_HASH = HashingUtils::HashString("HTTP2");
static const int QUIC_HASH = HashingUtils::HashString("QUIC");
static const int ICMPV4_HASH = HashingUtils::HashString("ICMPV4");
static const int ICMPV6_HASH = HashingUtils::HashString("ICMPV6");
static const int SCTP_HASH = HashingUtils::HashString("SCTP");
static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int IPV6_HASH = HashingUtils::HashString("IPV6");
static const int DOH2_HASH = HashingUtils::HashString("DOH2");
static const int FTP_DATA_HASH = HashingUtils::HashString("FTP_DATA");
static const int NFS_HASH = HashingUtils::HashString("NFS");
static const int RDP_HASH = HashingUtils::HashString("RDP");
static const int RFB_HASH = HashingUtils::HashString("RFB");
static const int MQTT_HASH = HashingUtils::HashString("MQTT");
static const int PGSQL_HASH = HashingUtils::HashString("PGSQL");
static const int SNMP_HASH = HashingUtils::HashString("SNMP");
static const int TELNET_HASH = HashingUtils::HashString("TELNET");
static const int WEBSOCKET_HASH = HashingUtils::HashString("WEBSOCKET");
static const int LDAP_HASH = HashingUtils::HashString("LDAP");
static const int POP3_HASH = HashingUtils::HashString("POP3");
static const int MDNS_HASH = HashingUtils::HashString("MDNS");
static const int BITTORRENT_DHT_HASH = HashingUtils::HashString("BITTORRENT_DHT");
static const int DNP3_HASH = HashingUtils::HashString("DNP3");

FirewallRuleProtocol GetFirewallRuleProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IP_HASH) {
    return FirewallRuleProtocol::IP;
  } else if (hashCode == TCP_HASH) {
    return FirewallRuleProtocol::TCP;
  } else if (hashCode == UDP_HASH) {
    return FirewallRuleProtocol::UDP;
  } else if (hashCode == ICMP_HASH) {
    return FirewallRuleProtocol::ICMP;
  } else if (hashCode == HTTP_HASH) {
    return FirewallRuleProtocol::HTTP;
  } else if (hashCode == FTP_HASH) {
    return FirewallRuleProtocol::FTP;
  } else if (hashCode == TLS_HASH) {
    return FirewallRuleProtocol::TLS;
  } else if (hashCode == SMB_HASH) {
    return FirewallRuleProtocol::SMB;
  } else if (hashCode == DNS_HASH) {
    return FirewallRuleProtocol::DNS;
  } else if (hashCode == DCERPC_HASH) {
    return FirewallRuleProtocol::DCERPC;
  } else if (hashCode == SSH_HASH) {
    return FirewallRuleProtocol::SSH;
  } else if (hashCode == SMTP_HASH) {
    return FirewallRuleProtocol::SMTP;
  } else if (hashCode == MSN_HASH) {
    return FirewallRuleProtocol::MSN;
  } else if (hashCode == KRB5_HASH) {
    return FirewallRuleProtocol::KRB5;
  } else if (hashCode == IKEV2_HASH) {
    return FirewallRuleProtocol::IKEV2;
  } else if (hashCode == TFTP_HASH) {
    return FirewallRuleProtocol::TFTP;
  } else if (hashCode == NTP_HASH) {
    return FirewallRuleProtocol::NTP;
  } else if (hashCode == DHCP_HASH) {
    return FirewallRuleProtocol::DHCP;
  } else if (hashCode == HTTP2_HASH) {
    return FirewallRuleProtocol::HTTP2;
  } else if (hashCode == QUIC_HASH) {
    return FirewallRuleProtocol::QUIC;
  } else if (hashCode == ICMPV4_HASH) {
    return FirewallRuleProtocol::ICMPV4;
  } else if (hashCode == ICMPV6_HASH) {
    return FirewallRuleProtocol::ICMPV6;
  } else if (hashCode == SCTP_HASH) {
    return FirewallRuleProtocol::SCTP;
  } else if (hashCode == IPV4_HASH) {
    return FirewallRuleProtocol::IPV4;
  } else if (hashCode == IPV6_HASH) {
    return FirewallRuleProtocol::IPV6;
  } else if (hashCode == DOH2_HASH) {
    return FirewallRuleProtocol::DOH2;
  } else if (hashCode == FTP_DATA_HASH) {
    return FirewallRuleProtocol::FTP_DATA;
  } else if (hashCode == NFS_HASH) {
    return FirewallRuleProtocol::NFS;
  } else if (hashCode == RDP_HASH) {
    return FirewallRuleProtocol::RDP;
  } else if (hashCode == RFB_HASH) {
    return FirewallRuleProtocol::RFB;
  } else if (hashCode == MQTT_HASH) {
    return FirewallRuleProtocol::MQTT;
  } else if (hashCode == PGSQL_HASH) {
    return FirewallRuleProtocol::PGSQL;
  } else if (hashCode == SNMP_HASH) {
    return FirewallRuleProtocol::SNMP;
  } else if (hashCode == TELNET_HASH) {
    return FirewallRuleProtocol::TELNET;
  } else if (hashCode == WEBSOCKET_HASH) {
    return FirewallRuleProtocol::WEBSOCKET;
  } else if (hashCode == LDAP_HASH) {
    return FirewallRuleProtocol::LDAP;
  } else if (hashCode == POP3_HASH) {
    return FirewallRuleProtocol::POP3;
  } else if (hashCode == MDNS_HASH) {
    return FirewallRuleProtocol::MDNS;
  } else if (hashCode == BITTORRENT_DHT_HASH) {
    return FirewallRuleProtocol::BITTORRENT_DHT;
  } else if (hashCode == DNP3_HASH) {
    return FirewallRuleProtocol::DNP3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallRuleProtocol>(hashCode);
  }

  return FirewallRuleProtocol::NOT_SET;
}

Aws::String GetNameForFirewallRuleProtocol(FirewallRuleProtocol enumValue) {
  switch (enumValue) {
    case FirewallRuleProtocol::NOT_SET:
      return {};
    case FirewallRuleProtocol::IP:
      return "IP";
    case FirewallRuleProtocol::TCP:
      return "TCP";
    case FirewallRuleProtocol::UDP:
      return "UDP";
    case FirewallRuleProtocol::ICMP:
      return "ICMP";
    case FirewallRuleProtocol::HTTP:
      return "HTTP";
    case FirewallRuleProtocol::FTP:
      return "FTP";
    case FirewallRuleProtocol::TLS:
      return "TLS";
    case FirewallRuleProtocol::SMB:
      return "SMB";
    case FirewallRuleProtocol::DNS:
      return "DNS";
    case FirewallRuleProtocol::DCERPC:
      return "DCERPC";
    case FirewallRuleProtocol::SSH:
      return "SSH";
    case FirewallRuleProtocol::SMTP:
      return "SMTP";
    case FirewallRuleProtocol::MSN:
      return "MSN";
    case FirewallRuleProtocol::KRB5:
      return "KRB5";
    case FirewallRuleProtocol::IKEV2:
      return "IKEV2";
    case FirewallRuleProtocol::TFTP:
      return "TFTP";
    case FirewallRuleProtocol::NTP:
      return "NTP";
    case FirewallRuleProtocol::DHCP:
      return "DHCP";
    case FirewallRuleProtocol::HTTP2:
      return "HTTP2";
    case FirewallRuleProtocol::QUIC:
      return "QUIC";
    case FirewallRuleProtocol::ICMPV4:
      return "ICMPV4";
    case FirewallRuleProtocol::ICMPV6:
      return "ICMPV6";
    case FirewallRuleProtocol::SCTP:
      return "SCTP";
    case FirewallRuleProtocol::IPV4:
      return "IPV4";
    case FirewallRuleProtocol::IPV6:
      return "IPV6";
    case FirewallRuleProtocol::DOH2:
      return "DOH2";
    case FirewallRuleProtocol::FTP_DATA:
      return "FTP_DATA";
    case FirewallRuleProtocol::NFS:
      return "NFS";
    case FirewallRuleProtocol::RDP:
      return "RDP";
    case FirewallRuleProtocol::RFB:
      return "RFB";
    case FirewallRuleProtocol::MQTT:
      return "MQTT";
    case FirewallRuleProtocol::PGSQL:
      return "PGSQL";
    case FirewallRuleProtocol::SNMP:
      return "SNMP";
    case FirewallRuleProtocol::TELNET:
      return "TELNET";
    case FirewallRuleProtocol::WEBSOCKET:
      return "WEBSOCKET";
    case FirewallRuleProtocol::LDAP:
      return "LDAP";
    case FirewallRuleProtocol::POP3:
      return "POP3";
    case FirewallRuleProtocol::MDNS:
      return "MDNS";
    case FirewallRuleProtocol::BITTORRENT_DHT:
      return "BITTORRENT_DHT";
    case FirewallRuleProtocol::DNP3:
      return "DNP3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallRuleProtocolMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
