/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class FirewallRuleProtocol {
  NOT_SET,
  IP,
  TCP,
  UDP,
  ICMP,
  HTTP,
  FTP,
  TLS,
  SMB,
  DNS,
  DCERPC,
  SSH,
  SMTP,
  MSN,
  KRB5,
  IKEV2,
  TFTP,
  NTP,
  DHCP,
  HTTP2,
  QUIC,
  ICMPV4,
  ICMPV6,
  SCTP,
  IPV4,
  IPV6,
  DOH2,
  FTP_DATA,
  NFS,
  RDP,
  RFB,
  MQTT,
  PGSQL,
  SNMP,
  TELNET,
  WEBSOCKET,
  LDAP,
  POP3,
  MDNS,
  BITTORRENT_DHT,
  DNP3
};

namespace FirewallRuleProtocolMapper {
AWS_NETWORKFIREWALL_API FirewallRuleProtocol GetFirewallRuleProtocolForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFirewallRuleProtocol(FirewallRuleProtocol value);
}  // namespace FirewallRuleProtocolMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
