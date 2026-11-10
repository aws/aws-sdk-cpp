/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/HookKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace HookKeyMapper {

static const int TCP_ALL_HASH = HashingUtils::HashString("TCP_ALL");
static const int TCP_FLOW_START_HASH = HashingUtils::HashString("TCP_FLOW_START");
static const int TCP_PRE_FLOW_HASH = HashingUtils::HashString("TCP_PRE_FLOW");
static const int TCP_PRE_STREAM_HASH = HashingUtils::HashString("TCP_PRE_STREAM");
static const int SCTP_ALL_HASH = HashingUtils::HashString("SCTP_ALL");
static const int SCTP_FLOW_START_HASH = HashingUtils::HashString("SCTP_FLOW_START");
static const int SCTP_PRE_FLOW_HASH = HashingUtils::HashString("SCTP_PRE_FLOW");
static const int SCTP_PRE_STREAM_HASH = HashingUtils::HashString("SCTP_PRE_STREAM");
static const int IPV6_ALL_HASH = HashingUtils::HashString("IPV6_ALL");
static const int IPV6_FLOW_START_HASH = HashingUtils::HashString("IPV6_FLOW_START");
static const int IPV6_PRE_FLOW_HASH = HashingUtils::HashString("IPV6_PRE_FLOW");
static const int IPV6_PRE_STREAM_HASH = HashingUtils::HashString("IPV6_PRE_STREAM");
static const int ICMPV6_ALL_HASH = HashingUtils::HashString("ICMPV6_ALL");
static const int ICMPV6_FLOW_START_HASH = HashingUtils::HashString("ICMPV6_FLOW_START");
static const int ICMPV6_PRE_FLOW_HASH = HashingUtils::HashString("ICMPV6_PRE_FLOW");
static const int ICMPV6_PRE_STREAM_HASH = HashingUtils::HashString("ICMPV6_PRE_STREAM");
static const int UDP_ALL_HASH = HashingUtils::HashString("UDP_ALL");
static const int UDP_FLOW_START_HASH = HashingUtils::HashString("UDP_FLOW_START");
static const int UDP_PRE_FLOW_HASH = HashingUtils::HashString("UDP_PRE_FLOW");
static const int UDP_PRE_STREAM_HASH = HashingUtils::HashString("UDP_PRE_STREAM");
static const int ICMP_ALL_HASH = HashingUtils::HashString("ICMP_ALL");
static const int ICMP_FLOW_START_HASH = HashingUtils::HashString("ICMP_FLOW_START");
static const int ICMP_PRE_FLOW_HASH = HashingUtils::HashString("ICMP_PRE_FLOW");
static const int ICMP_PRE_STREAM_HASH = HashingUtils::HashString("ICMP_PRE_STREAM");
static const int ICMPV4_ALL_HASH = HashingUtils::HashString("ICMPV4_ALL");
static const int ICMPV4_FLOW_START_HASH = HashingUtils::HashString("ICMPV4_FLOW_START");
static const int ICMPV4_PRE_FLOW_HASH = HashingUtils::HashString("ICMPV4_PRE_FLOW");
static const int ICMPV4_PRE_STREAM_HASH = HashingUtils::HashString("ICMPV4_PRE_STREAM");
static const int IP_ALL_HASH = HashingUtils::HashString("IP_ALL");
static const int IP_FLOW_START_HASH = HashingUtils::HashString("IP_FLOW_START");
static const int IP_PRE_FLOW_HASH = HashingUtils::HashString("IP_PRE_FLOW");
static const int IP_PRE_STREAM_HASH = HashingUtils::HashString("IP_PRE_STREAM");
static const int IPV4_ALL_HASH = HashingUtils::HashString("IPV4_ALL");
static const int IPV4_FLOW_START_HASH = HashingUtils::HashString("IPV4_FLOW_START");
static const int IPV4_PRE_FLOW_HASH = HashingUtils::HashString("IPV4_PRE_FLOW");
static const int IPV4_PRE_STREAM_HASH = HashingUtils::HashString("IPV4_PRE_STREAM");
static const int TLS_CLIENT_STARTED_HASH = HashingUtils::HashString("TLS_CLIENT_STARTED");
static const int TLS_CLIENT_HELLO_HASH = HashingUtils::HashString("TLS_CLIENT_HELLO");
static const int TLS_CLIENT_CERT_HASH = HashingUtils::HashString("TLS_CLIENT_CERT");
static const int TLS_CLIENT_DATA_HASH = HashingUtils::HashString("TLS_CLIENT_DATA");
static const int TLS_CLIENT_FINISHED_HASH = HashingUtils::HashString("TLS_CLIENT_FINISHED");
static const int TLS_SERVER_STARTED_HASH = HashingUtils::HashString("TLS_SERVER_STARTED");
static const int TLS_SERVER_HELLO_HASH = HashingUtils::HashString("TLS_SERVER_HELLO");
static const int TLS_SERVER_CERT_HASH = HashingUtils::HashString("TLS_SERVER_CERT");
static const int TLS_SERVER_DATA_HASH = HashingUtils::HashString("TLS_SERVER_DATA");
static const int TLS_SERVER_FINISHED_HASH = HashingUtils::HashString("TLS_SERVER_FINISHED");
static const int HTTP1_REQUEST_STARTED_HASH = HashingUtils::HashString("HTTP1_REQUEST_STARTED");
static const int HTTP1_REQUEST_LINE_HASH = HashingUtils::HashString("HTTP1_REQUEST_LINE");
static const int HTTP1_REQUEST_HEADERS_HASH = HashingUtils::HashString("HTTP1_REQUEST_HEADERS");
static const int HTTP1_REQUEST_BODY_HASH = HashingUtils::HashString("HTTP1_REQUEST_BODY");
static const int HTTP1_REQUEST_TRAILER_HASH = HashingUtils::HashString("HTTP1_REQUEST_TRAILER");
static const int HTTP1_REQUEST_COMPLETE_HASH = HashingUtils::HashString("HTTP1_REQUEST_COMPLETE");
static const int HTTP1_RESPONSE_STARTED_HASH = HashingUtils::HashString("HTTP1_RESPONSE_STARTED");
static const int HTTP1_RESPONSE_LINE_HASH = HashingUtils::HashString("HTTP1_RESPONSE_LINE");
static const int HTTP1_RESPONSE_HEADERS_HASH = HashingUtils::HashString("HTTP1_RESPONSE_HEADERS");
static const int HTTP1_RESPONSE_BODY_HASH = HashingUtils::HashString("HTTP1_RESPONSE_BODY");
static const int HTTP1_RESPONSE_TRAILER_HASH = HashingUtils::HashString("HTTP1_RESPONSE_TRAILER");
static const int HTTP1_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("HTTP1_RESPONSE_COMPLETE");
static const int HTTP2_STREAM_REQUEST_STARTED_HASH = HashingUtils::HashString("HTTP2_STREAM_REQUEST_STARTED");
static const int HTTP2_STREAM_REQUEST_HEADERS_HASH = HashingUtils::HashString("HTTP2_STREAM_REQUEST_HEADERS");
static const int HTTP2_STREAM_REQUEST_DATA_HASH = HashingUtils::HashString("HTTP2_STREAM_REQUEST_DATA");
static const int HTTP2_STREAM_REQUEST_CLOSED_HASH = HashingUtils::HashString("HTTP2_STREAM_REQUEST_CLOSED");
static const int HTTP2_STREAM_REQUEST_COMPLETE_HASH = HashingUtils::HashString("HTTP2_STREAM_REQUEST_COMPLETE");
static const int HTTP2_STREAM_RESPONSE_STARTED_HASH = HashingUtils::HashString("HTTP2_STREAM_RESPONSE_STARTED");
static const int HTTP2_STREAM_RESPONSE_HEADERS_HASH = HashingUtils::HashString("HTTP2_STREAM_RESPONSE_HEADERS");
static const int HTTP2_STREAM_RESPONSE_DATA_HASH = HashingUtils::HashString("HTTP2_STREAM_RESPONSE_DATA");
static const int HTTP2_STREAM_RESPONSE_CLOSED_HASH = HashingUtils::HashString("HTTP2_STREAM_RESPONSE_CLOSED");
static const int HTTP2_STREAM_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("HTTP2_STREAM_RESPONSE_COMPLETE");
static const int HTTP2_GLOBAL_REQUEST_STARTED_HASH = HashingUtils::HashString("HTTP2_GLOBAL_REQUEST_STARTED");
static const int HTTP2_GLOBAL_REQUEST_COMPLETE_HASH = HashingUtils::HashString("HTTP2_GLOBAL_REQUEST_COMPLETE");
static const int HTTP2_GLOBAL_RESPONSE_STARTED_HASH = HashingUtils::HashString("HTTP2_GLOBAL_RESPONSE_STARTED");
static const int HTTP2_GLOBAL_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("HTTP2_GLOBAL_RESPONSE_COMPLETE");
static const int DOH2_STREAM_REQUEST_STARTED_HASH = HashingUtils::HashString("DOH2_STREAM_REQUEST_STARTED");
static const int DOH2_STREAM_REQUEST_HEADERS_HASH = HashingUtils::HashString("DOH2_STREAM_REQUEST_HEADERS");
static const int DOH2_STREAM_REQUEST_DATA_HASH = HashingUtils::HashString("DOH2_STREAM_REQUEST_DATA");
static const int DOH2_STREAM_REQUEST_CLOSED_HASH = HashingUtils::HashString("DOH2_STREAM_REQUEST_CLOSED");
static const int DOH2_STREAM_REQUEST_COMPLETE_HASH = HashingUtils::HashString("DOH2_STREAM_REQUEST_COMPLETE");
static const int DOH2_STREAM_RESPONSE_STARTED_HASH = HashingUtils::HashString("DOH2_STREAM_RESPONSE_STARTED");
static const int DOH2_STREAM_RESPONSE_HEADERS_HASH = HashingUtils::HashString("DOH2_STREAM_RESPONSE_HEADERS");
static const int DOH2_STREAM_RESPONSE_DATA_HASH = HashingUtils::HashString("DOH2_STREAM_RESPONSE_DATA");
static const int DOH2_STREAM_RESPONSE_CLOSED_HASH = HashingUtils::HashString("DOH2_STREAM_RESPONSE_CLOSED");
static const int DOH2_STREAM_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("DOH2_STREAM_RESPONSE_COMPLETE");
static const int DOH2_GLOBAL_REQUEST_STARTED_HASH = HashingUtils::HashString("DOH2_GLOBAL_REQUEST_STARTED");
static const int DOH2_GLOBAL_REQUEST_COMPLETE_HASH = HashingUtils::HashString("DOH2_GLOBAL_REQUEST_COMPLETE");
static const int DOH2_GLOBAL_RESPONSE_STARTED_HASH = HashingUtils::HashString("DOH2_GLOBAL_RESPONSE_STARTED");
static const int DOH2_GLOBAL_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("DOH2_GLOBAL_RESPONSE_COMPLETE");
static const int DNS_REQUEST_STARTED_HASH = HashingUtils::HashString("DNS_REQUEST_STARTED");
static const int DNS_REQUEST_COMPLETE_HASH = HashingUtils::HashString("DNS_REQUEST_COMPLETE");
static const int DNS_RESPONSE_STARTED_HASH = HashingUtils::HashString("DNS_RESPONSE_STARTED");
static const int DNS_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("DNS_RESPONSE_COMPLETE");
static const int SMTP_REQUEST_STARTED_HASH = HashingUtils::HashString("SMTP_REQUEST_STARTED");
static const int SMTP_REQUEST_DATA_HASH = HashingUtils::HashString("SMTP_REQUEST_DATA");
static const int SMTP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("SMTP_REQUEST_COMPLETE");
static const int SMTP_RESPONSE_STARTED_HASH = HashingUtils::HashString("SMTP_RESPONSE_STARTED");
static const int SMTP_RESPONSE_DATA_HASH = HashingUtils::HashString("SMTP_RESPONSE_DATA");
static const int SMTP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("SMTP_RESPONSE_COMPLETE");
static const int FTP_REQUEST_STARTED_HASH = HashingUtils::HashString("FTP_REQUEST_STARTED");
static const int FTP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("FTP_REQUEST_COMPLETE");
static const int FTP_RESPONSE_STARTED_HASH = HashingUtils::HashString("FTP_RESPONSE_STARTED");
static const int FTP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("FTP_RESPONSE_COMPLETE");
static const int FTP_DATA_REQUEST_STARTED_HASH = HashingUtils::HashString("FTP_DATA_REQUEST_STARTED");
static const int FTP_DATA_REQUEST_COMPLETE_HASH = HashingUtils::HashString("FTP_DATA_REQUEST_COMPLETE");
static const int FTP_DATA_RESPONSE_STARTED_HASH = HashingUtils::HashString("FTP_DATA_RESPONSE_STARTED");
static const int FTP_DATA_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("FTP_DATA_RESPONSE_COMPLETE");
static const int SMB_REQUEST_STARTED_HASH = HashingUtils::HashString("SMB_REQUEST_STARTED");
static const int SMB_REQUEST_COMPLETE_HASH = HashingUtils::HashString("SMB_REQUEST_COMPLETE");
static const int SMB_RESPONSE_STARTED_HASH = HashingUtils::HashString("SMB_RESPONSE_STARTED");
static const int SMB_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("SMB_RESPONSE_COMPLETE");
static const int DCERPC_REQUEST_STARTED_HASH = HashingUtils::HashString("DCERPC_REQUEST_STARTED");
static const int DCERPC_REQUEST_COMPLETE_HASH = HashingUtils::HashString("DCERPC_REQUEST_COMPLETE");
static const int DCERPC_RESPONSE_STARTED_HASH = HashingUtils::HashString("DCERPC_RESPONSE_STARTED");
static const int DCERPC_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("DCERPC_RESPONSE_COMPLETE");
static const int NFS_REQUEST_STARTED_HASH = HashingUtils::HashString("NFS_REQUEST_STARTED");
static const int NFS_REQUEST_COMPLETE_HASH = HashingUtils::HashString("NFS_REQUEST_COMPLETE");
static const int NFS_RESPONSE_STARTED_HASH = HashingUtils::HashString("NFS_RESPONSE_STARTED");
static const int NFS_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("NFS_RESPONSE_COMPLETE");
static const int KRB5_REQUEST_STARTED_HASH = HashingUtils::HashString("KRB5_REQUEST_STARTED");
static const int KRB5_REQUEST_COMPLETE_HASH = HashingUtils::HashString("KRB5_REQUEST_COMPLETE");
static const int KRB5_RESPONSE_STARTED_HASH = HashingUtils::HashString("KRB5_RESPONSE_STARTED");
static const int KRB5_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("KRB5_RESPONSE_COMPLETE");
static const int IKE_REQUEST_STARTED_HASH = HashingUtils::HashString("IKE_REQUEST_STARTED");
static const int IKE_REQUEST_COMPLETE_HASH = HashingUtils::HashString("IKE_REQUEST_COMPLETE");
static const int IKE_RESPONSE_STARTED_HASH = HashingUtils::HashString("IKE_RESPONSE_STARTED");
static const int IKE_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("IKE_RESPONSE_COMPLETE");
static const int TFTP_REQUEST_STARTED_HASH = HashingUtils::HashString("TFTP_REQUEST_STARTED");
static const int TFTP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("TFTP_REQUEST_COMPLETE");
static const int TFTP_RESPONSE_STARTED_HASH = HashingUtils::HashString("TFTP_RESPONSE_STARTED");
static const int TFTP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("TFTP_RESPONSE_COMPLETE");
static const int DHCP_REQUEST_STARTED_HASH = HashingUtils::HashString("DHCP_REQUEST_STARTED");
static const int DHCP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("DHCP_REQUEST_COMPLETE");
static const int DHCP_RESPONSE_STARTED_HASH = HashingUtils::HashString("DHCP_RESPONSE_STARTED");
static const int DHCP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("DHCP_RESPONSE_COMPLETE");
static const int QUIC_REQUEST_STARTED_HASH = HashingUtils::HashString("QUIC_REQUEST_STARTED");
static const int QUIC_REQUEST_COMPLETE_HASH = HashingUtils::HashString("QUIC_REQUEST_COMPLETE");
static const int QUIC_RESPONSE_STARTED_HASH = HashingUtils::HashString("QUIC_RESPONSE_STARTED");
static const int QUIC_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("QUIC_RESPONSE_COMPLETE");
static const int RDP_REQUEST_STARTED_HASH = HashingUtils::HashString("RDP_REQUEST_STARTED");
static const int RDP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("RDP_REQUEST_COMPLETE");
static const int RDP_RESPONSE_STARTED_HASH = HashingUtils::HashString("RDP_RESPONSE_STARTED");
static const int RDP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("RDP_RESPONSE_COMPLETE");
static const int RFB_REQUEST_STARTED_HASH = HashingUtils::HashString("RFB_REQUEST_STARTED");
static const int RFB_REQUEST_COMPLETE_HASH = HashingUtils::HashString("RFB_REQUEST_COMPLETE");
static const int RFB_RESPONSE_STARTED_HASH = HashingUtils::HashString("RFB_RESPONSE_STARTED");
static const int RFB_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("RFB_RESPONSE_COMPLETE");
static const int MQTT_REQUEST_STARTED_HASH = HashingUtils::HashString("MQTT_REQUEST_STARTED");
static const int MQTT_REQUEST_COMPLETE_HASH = HashingUtils::HashString("MQTT_REQUEST_COMPLETE");
static const int MQTT_RESPONSE_STARTED_HASH = HashingUtils::HashString("MQTT_RESPONSE_STARTED");
static const int MQTT_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("MQTT_RESPONSE_COMPLETE");
static const int PGSQL_REQUEST_STARTED_HASH = HashingUtils::HashString("PGSQL_REQUEST_STARTED");
static const int PGSQL_REQUEST_COMPLETE_HASH = HashingUtils::HashString("PGSQL_REQUEST_COMPLETE");
static const int PGSQL_RESPONSE_STARTED_HASH = HashingUtils::HashString("PGSQL_RESPONSE_STARTED");
static const int PGSQL_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("PGSQL_RESPONSE_COMPLETE");
static const int SNMP_REQUEST_STARTED_HASH = HashingUtils::HashString("SNMP_REQUEST_STARTED");
static const int SNMP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("SNMP_REQUEST_COMPLETE");
static const int SNMP_RESPONSE_STARTED_HASH = HashingUtils::HashString("SNMP_RESPONSE_STARTED");
static const int SNMP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("SNMP_RESPONSE_COMPLETE");
static const int NTP_REQUEST_STARTED_HASH = HashingUtils::HashString("NTP_REQUEST_STARTED");
static const int NTP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("NTP_REQUEST_COMPLETE");
static const int NTP_RESPONSE_STARTED_HASH = HashingUtils::HashString("NTP_RESPONSE_STARTED");
static const int NTP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("NTP_RESPONSE_COMPLETE");
static const int TELNET_REQUEST_STARTED_HASH = HashingUtils::HashString("TELNET_REQUEST_STARTED");
static const int TELNET_REQUEST_COMPLETE_HASH = HashingUtils::HashString("TELNET_REQUEST_COMPLETE");
static const int TELNET_RESPONSE_STARTED_HASH = HashingUtils::HashString("TELNET_RESPONSE_STARTED");
static const int TELNET_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("TELNET_RESPONSE_COMPLETE");
static const int WEBSOCKET_REQUEST_STARTED_HASH = HashingUtils::HashString("WEBSOCKET_REQUEST_STARTED");
static const int WEBSOCKET_REQUEST_COMPLETE_HASH = HashingUtils::HashString("WEBSOCKET_REQUEST_COMPLETE");
static const int WEBSOCKET_RESPONSE_STARTED_HASH = HashingUtils::HashString("WEBSOCKET_RESPONSE_STARTED");
static const int WEBSOCKET_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("WEBSOCKET_RESPONSE_COMPLETE");
static const int LDAP_REQUEST_STARTED_HASH = HashingUtils::HashString("LDAP_REQUEST_STARTED");
static const int LDAP_REQUEST_COMPLETE_HASH = HashingUtils::HashString("LDAP_REQUEST_COMPLETE");
static const int LDAP_RESPONSE_STARTED_HASH = HashingUtils::HashString("LDAP_RESPONSE_STARTED");
static const int LDAP_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("LDAP_RESPONSE_COMPLETE");
static const int POP3_REQUEST_STARTED_HASH = HashingUtils::HashString("POP3_REQUEST_STARTED");
static const int POP3_REQUEST_COMPLETE_HASH = HashingUtils::HashString("POP3_REQUEST_COMPLETE");
static const int POP3_RESPONSE_STARTED_HASH = HashingUtils::HashString("POP3_RESPONSE_STARTED");
static const int POP3_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("POP3_RESPONSE_COMPLETE");
static const int MDNS_REQUEST_STARTED_HASH = HashingUtils::HashString("MDNS_REQUEST_STARTED");
static const int MDNS_REQUEST_COMPLETE_HASH = HashingUtils::HashString("MDNS_REQUEST_COMPLETE");
static const int MDNS_RESPONSE_STARTED_HASH = HashingUtils::HashString("MDNS_RESPONSE_STARTED");
static const int MDNS_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("MDNS_RESPONSE_COMPLETE");
static const int BITTORRENT_DHT_REQUEST_STARTED_HASH = HashingUtils::HashString("BITTORRENT_DHT_REQUEST_STARTED");
static const int BITTORRENT_DHT_REQUEST_COMPLETE_HASH = HashingUtils::HashString("BITTORRENT_DHT_REQUEST_COMPLETE");
static const int BITTORRENT_DHT_RESPONSE_STARTED_HASH = HashingUtils::HashString("BITTORRENT_DHT_RESPONSE_STARTED");
static const int BITTORRENT_DHT_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("BITTORRENT_DHT_RESPONSE_COMPLETE");
static const int DNP3_REQUEST_STARTED_HASH = HashingUtils::HashString("DNP3_REQUEST_STARTED");
static const int DNP3_REQUEST_COMPLETE_HASH = HashingUtils::HashString("DNP3_REQUEST_COMPLETE");
static const int DNP3_RESPONSE_STARTED_HASH = HashingUtils::HashString("DNP3_RESPONSE_STARTED");
static const int DNP3_RESPONSE_COMPLETE_HASH = HashingUtils::HashString("DNP3_RESPONSE_COMPLETE");
static const int SSH_REQUEST_IN_PROGRESS_HASH = HashingUtils::HashString("SSH_REQUEST_IN_PROGRESS");
static const int SSH_REQUEST_BANNER_WAIT_EOL_HASH = HashingUtils::HashString("SSH_REQUEST_BANNER_WAIT_EOL");
static const int SSH_REQUEST_BANNER_DONE_HASH = HashingUtils::HashString("SSH_REQUEST_BANNER_DONE");
static const int SSH_REQUEST_FINISHED_HASH = HashingUtils::HashString("SSH_REQUEST_FINISHED");
static const int SSH_RESPONSE_IN_PROGRESS_HASH = HashingUtils::HashString("SSH_RESPONSE_IN_PROGRESS");
static const int SSH_RESPONSE_BANNER_WAIT_EOL_HASH = HashingUtils::HashString("SSH_RESPONSE_BANNER_WAIT_EOL");
static const int SSH_RESPONSE_BANNER_DONE_HASH = HashingUtils::HashString("SSH_RESPONSE_BANNER_DONE");
static const int SSH_RESPONSE_FINISHED_HASH = HashingUtils::HashString("SSH_RESPONSE_FINISHED");

/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/
static bool GetEnumForNameHelper0(int hashCode, HookKey& enumValue) {
  if (hashCode == TCP_ALL_HASH) {
    enumValue = HookKey::TCP_ALL;
    return true;
  } else if (hashCode == TCP_FLOW_START_HASH) {
    enumValue = HookKey::TCP_FLOW_START;
    return true;
  } else if (hashCode == TCP_PRE_FLOW_HASH) {
    enumValue = HookKey::TCP_PRE_FLOW;
    return true;
  } else if (hashCode == TCP_PRE_STREAM_HASH) {
    enumValue = HookKey::TCP_PRE_STREAM;
    return true;
  } else if (hashCode == SCTP_ALL_HASH) {
    enumValue = HookKey::SCTP_ALL;
    return true;
  } else if (hashCode == SCTP_FLOW_START_HASH) {
    enumValue = HookKey::SCTP_FLOW_START;
    return true;
  } else if (hashCode == SCTP_PRE_FLOW_HASH) {
    enumValue = HookKey::SCTP_PRE_FLOW;
    return true;
  } else if (hashCode == SCTP_PRE_STREAM_HASH) {
    enumValue = HookKey::SCTP_PRE_STREAM;
    return true;
  } else if (hashCode == IPV6_ALL_HASH) {
    enumValue = HookKey::IPV6_ALL;
    return true;
  } else if (hashCode == IPV6_FLOW_START_HASH) {
    enumValue = HookKey::IPV6_FLOW_START;
    return true;
  } else if (hashCode == IPV6_PRE_FLOW_HASH) {
    enumValue = HookKey::IPV6_PRE_FLOW;
    return true;
  } else if (hashCode == IPV6_PRE_STREAM_HASH) {
    enumValue = HookKey::IPV6_PRE_STREAM;
    return true;
  } else if (hashCode == ICMPV6_ALL_HASH) {
    enumValue = HookKey::ICMPV6_ALL;
    return true;
  } else if (hashCode == ICMPV6_FLOW_START_HASH) {
    enumValue = HookKey::ICMPV6_FLOW_START;
    return true;
  } else if (hashCode == ICMPV6_PRE_FLOW_HASH) {
    enumValue = HookKey::ICMPV6_PRE_FLOW;
    return true;
  } else if (hashCode == ICMPV6_PRE_STREAM_HASH) {
    enumValue = HookKey::ICMPV6_PRE_STREAM;
    return true;
  } else if (hashCode == UDP_ALL_HASH) {
    enumValue = HookKey::UDP_ALL;
    return true;
  } else if (hashCode == UDP_FLOW_START_HASH) {
    enumValue = HookKey::UDP_FLOW_START;
    return true;
  } else if (hashCode == UDP_PRE_FLOW_HASH) {
    enumValue = HookKey::UDP_PRE_FLOW;
    return true;
  } else if (hashCode == UDP_PRE_STREAM_HASH) {
    enumValue = HookKey::UDP_PRE_STREAM;
    return true;
  } else if (hashCode == ICMP_ALL_HASH) {
    enumValue = HookKey::ICMP_ALL;
    return true;
  } else if (hashCode == ICMP_FLOW_START_HASH) {
    enumValue = HookKey::ICMP_FLOW_START;
    return true;
  } else if (hashCode == ICMP_PRE_FLOW_HASH) {
    enumValue = HookKey::ICMP_PRE_FLOW;
    return true;
  } else if (hashCode == ICMP_PRE_STREAM_HASH) {
    enumValue = HookKey::ICMP_PRE_STREAM;
    return true;
  } else if (hashCode == ICMPV4_ALL_HASH) {
    enumValue = HookKey::ICMPV4_ALL;
    return true;
  } else if (hashCode == ICMPV4_FLOW_START_HASH) {
    enumValue = HookKey::ICMPV4_FLOW_START;
    return true;
  } else if (hashCode == ICMPV4_PRE_FLOW_HASH) {
    enumValue = HookKey::ICMPV4_PRE_FLOW;
    return true;
  } else if (hashCode == ICMPV4_PRE_STREAM_HASH) {
    enumValue = HookKey::ICMPV4_PRE_STREAM;
    return true;
  } else if (hashCode == IP_ALL_HASH) {
    enumValue = HookKey::IP_ALL;
    return true;
  } else if (hashCode == IP_FLOW_START_HASH) {
    enumValue = HookKey::IP_FLOW_START;
    return true;
  } else if (hashCode == IP_PRE_FLOW_HASH) {
    enumValue = HookKey::IP_PRE_FLOW;
    return true;
  } else if (hashCode == IP_PRE_STREAM_HASH) {
    enumValue = HookKey::IP_PRE_STREAM;
    return true;
  } else if (hashCode == IPV4_ALL_HASH) {
    enumValue = HookKey::IPV4_ALL;
    return true;
  } else if (hashCode == IPV4_FLOW_START_HASH) {
    enumValue = HookKey::IPV4_FLOW_START;
    return true;
  } else if (hashCode == IPV4_PRE_FLOW_HASH) {
    enumValue = HookKey::IPV4_PRE_FLOW;
    return true;
  } else if (hashCode == IPV4_PRE_STREAM_HASH) {
    enumValue = HookKey::IPV4_PRE_STREAM;
    return true;
  } else if (hashCode == TLS_CLIENT_STARTED_HASH) {
    enumValue = HookKey::TLS_CLIENT_STARTED;
    return true;
  } else if (hashCode == TLS_CLIENT_HELLO_HASH) {
    enumValue = HookKey::TLS_CLIENT_HELLO;
    return true;
  } else if (hashCode == TLS_CLIENT_CERT_HASH) {
    enumValue = HookKey::TLS_CLIENT_CERT;
    return true;
  } else if (hashCode == TLS_CLIENT_DATA_HASH) {
    enumValue = HookKey::TLS_CLIENT_DATA;
    return true;
  } else if (hashCode == TLS_CLIENT_FINISHED_HASH) {
    enumValue = HookKey::TLS_CLIENT_FINISHED;
    return true;
  } else if (hashCode == TLS_SERVER_STARTED_HASH) {
    enumValue = HookKey::TLS_SERVER_STARTED;
    return true;
  } else if (hashCode == TLS_SERVER_HELLO_HASH) {
    enumValue = HookKey::TLS_SERVER_HELLO;
    return true;
  } else if (hashCode == TLS_SERVER_CERT_HASH) {
    enumValue = HookKey::TLS_SERVER_CERT;
    return true;
  } else if (hashCode == TLS_SERVER_DATA_HASH) {
    enumValue = HookKey::TLS_SERVER_DATA;
    return true;
  } else if (hashCode == TLS_SERVER_FINISHED_HASH) {
    enumValue = HookKey::TLS_SERVER_FINISHED;
    return true;
  } else if (hashCode == HTTP1_REQUEST_STARTED_HASH) {
    enumValue = HookKey::HTTP1_REQUEST_STARTED;
    return true;
  } else if (hashCode == HTTP1_REQUEST_LINE_HASH) {
    enumValue = HookKey::HTTP1_REQUEST_LINE;
    return true;
  } else if (hashCode == HTTP1_REQUEST_HEADERS_HASH) {
    enumValue = HookKey::HTTP1_REQUEST_HEADERS;
    return true;
  } else if (hashCode == HTTP1_REQUEST_BODY_HASH) {
    enumValue = HookKey::HTTP1_REQUEST_BODY;
    return true;
  } else if (hashCode == HTTP1_REQUEST_TRAILER_HASH) {
    enumValue = HookKey::HTTP1_REQUEST_TRAILER;
    return true;
  } else if (hashCode == HTTP1_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::HTTP1_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == HTTP1_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::HTTP1_RESPONSE_STARTED;
    return true;
  } else if (hashCode == HTTP1_RESPONSE_LINE_HASH) {
    enumValue = HookKey::HTTP1_RESPONSE_LINE;
    return true;
  } else if (hashCode == HTTP1_RESPONSE_HEADERS_HASH) {
    enumValue = HookKey::HTTP1_RESPONSE_HEADERS;
    return true;
  } else if (hashCode == HTTP1_RESPONSE_BODY_HASH) {
    enumValue = HookKey::HTTP1_RESPONSE_BODY;
    return true;
  } else if (hashCode == HTTP1_RESPONSE_TRAILER_HASH) {
    enumValue = HookKey::HTTP1_RESPONSE_TRAILER;
    return true;
  } else if (hashCode == HTTP1_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::HTTP1_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == HTTP2_STREAM_REQUEST_STARTED_HASH) {
    enumValue = HookKey::HTTP2_STREAM_REQUEST_STARTED;
    return true;
  } else if (hashCode == HTTP2_STREAM_REQUEST_HEADERS_HASH) {
    enumValue = HookKey::HTTP2_STREAM_REQUEST_HEADERS;
    return true;
  } else if (hashCode == HTTP2_STREAM_REQUEST_DATA_HASH) {
    enumValue = HookKey::HTTP2_STREAM_REQUEST_DATA;
    return true;
  } else if (hashCode == HTTP2_STREAM_REQUEST_CLOSED_HASH) {
    enumValue = HookKey::HTTP2_STREAM_REQUEST_CLOSED;
    return true;
  } else if (hashCode == HTTP2_STREAM_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::HTTP2_STREAM_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == HTTP2_STREAM_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::HTTP2_STREAM_RESPONSE_STARTED;
    return true;
  } else if (hashCode == HTTP2_STREAM_RESPONSE_HEADERS_HASH) {
    enumValue = HookKey::HTTP2_STREAM_RESPONSE_HEADERS;
    return true;
  } else if (hashCode == HTTP2_STREAM_RESPONSE_DATA_HASH) {
    enumValue = HookKey::HTTP2_STREAM_RESPONSE_DATA;
    return true;
  } else if (hashCode == HTTP2_STREAM_RESPONSE_CLOSED_HASH) {
    enumValue = HookKey::HTTP2_STREAM_RESPONSE_CLOSED;
    return true;
  } else if (hashCode == HTTP2_STREAM_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::HTTP2_STREAM_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == HTTP2_GLOBAL_REQUEST_STARTED_HASH) {
    enumValue = HookKey::HTTP2_GLOBAL_REQUEST_STARTED;
    return true;
  } else if (hashCode == HTTP2_GLOBAL_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::HTTP2_GLOBAL_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == HTTP2_GLOBAL_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::HTTP2_GLOBAL_RESPONSE_STARTED;
    return true;
  } else if (hashCode == HTTP2_GLOBAL_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::HTTP2_GLOBAL_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == DOH2_STREAM_REQUEST_STARTED_HASH) {
    enumValue = HookKey::DOH2_STREAM_REQUEST_STARTED;
    return true;
  } else if (hashCode == DOH2_STREAM_REQUEST_HEADERS_HASH) {
    enumValue = HookKey::DOH2_STREAM_REQUEST_HEADERS;
    return true;
  } else if (hashCode == DOH2_STREAM_REQUEST_DATA_HASH) {
    enumValue = HookKey::DOH2_STREAM_REQUEST_DATA;
    return true;
  } else if (hashCode == DOH2_STREAM_REQUEST_CLOSED_HASH) {
    enumValue = HookKey::DOH2_STREAM_REQUEST_CLOSED;
    return true;
  } else if (hashCode == DOH2_STREAM_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::DOH2_STREAM_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == DOH2_STREAM_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::DOH2_STREAM_RESPONSE_STARTED;
    return true;
  } else if (hashCode == DOH2_STREAM_RESPONSE_HEADERS_HASH) {
    enumValue = HookKey::DOH2_STREAM_RESPONSE_HEADERS;
    return true;
  } else if (hashCode == DOH2_STREAM_RESPONSE_DATA_HASH) {
    enumValue = HookKey::DOH2_STREAM_RESPONSE_DATA;
    return true;
  } else if (hashCode == DOH2_STREAM_RESPONSE_CLOSED_HASH) {
    enumValue = HookKey::DOH2_STREAM_RESPONSE_CLOSED;
    return true;
  } else if (hashCode == DOH2_STREAM_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::DOH2_STREAM_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == DOH2_GLOBAL_REQUEST_STARTED_HASH) {
    enumValue = HookKey::DOH2_GLOBAL_REQUEST_STARTED;
    return true;
  } else if (hashCode == DOH2_GLOBAL_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::DOH2_GLOBAL_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == DOH2_GLOBAL_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::DOH2_GLOBAL_RESPONSE_STARTED;
    return true;
  } else if (hashCode == DOH2_GLOBAL_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::DOH2_GLOBAL_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == DNS_REQUEST_STARTED_HASH) {
    enumValue = HookKey::DNS_REQUEST_STARTED;
    return true;
  } else if (hashCode == DNS_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::DNS_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == DNS_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::DNS_RESPONSE_STARTED;
    return true;
  } else if (hashCode == DNS_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::DNS_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == SMTP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::SMTP_REQUEST_STARTED;
    return true;
  } else if (hashCode == SMTP_REQUEST_DATA_HASH) {
    enumValue = HookKey::SMTP_REQUEST_DATA;
    return true;
  } else if (hashCode == SMTP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::SMTP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == SMTP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::SMTP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == SMTP_RESPONSE_DATA_HASH) {
    enumValue = HookKey::SMTP_RESPONSE_DATA;
    return true;
  } else if (hashCode == SMTP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::SMTP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == FTP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::FTP_REQUEST_STARTED;
    return true;
  } else if (hashCode == FTP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::FTP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == FTP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::FTP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == FTP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::FTP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == FTP_DATA_REQUEST_STARTED_HASH) {
    enumValue = HookKey::FTP_DATA_REQUEST_STARTED;
    return true;
  } else if (hashCode == FTP_DATA_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::FTP_DATA_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == FTP_DATA_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::FTP_DATA_RESPONSE_STARTED;
    return true;
  } else if (hashCode == FTP_DATA_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::FTP_DATA_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == SMB_REQUEST_STARTED_HASH) {
    enumValue = HookKey::SMB_REQUEST_STARTED;
    return true;
  } else if (hashCode == SMB_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::SMB_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == SMB_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::SMB_RESPONSE_STARTED;
    return true;
  } else if (hashCode == SMB_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::SMB_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == DCERPC_REQUEST_STARTED_HASH) {
    enumValue = HookKey::DCERPC_REQUEST_STARTED;
    return true;
  } else if (hashCode == DCERPC_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::DCERPC_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == DCERPC_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::DCERPC_RESPONSE_STARTED;
    return true;
  } else if (hashCode == DCERPC_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::DCERPC_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == NFS_REQUEST_STARTED_HASH) {
    enumValue = HookKey::NFS_REQUEST_STARTED;
    return true;
  } else if (hashCode == NFS_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::NFS_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == NFS_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::NFS_RESPONSE_STARTED;
    return true;
  } else if (hashCode == NFS_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::NFS_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == KRB5_REQUEST_STARTED_HASH) {
    enumValue = HookKey::KRB5_REQUEST_STARTED;
    return true;
  } else if (hashCode == KRB5_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::KRB5_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == KRB5_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::KRB5_RESPONSE_STARTED;
    return true;
  } else if (hashCode == KRB5_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::KRB5_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == IKE_REQUEST_STARTED_HASH) {
    enumValue = HookKey::IKE_REQUEST_STARTED;
    return true;
  } else if (hashCode == IKE_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::IKE_REQUEST_COMPLETE;
    return true;
  }
  return false;
}
static bool GetEnumForNameHelper1(int hashCode, HookKey& enumValue) {
  if (hashCode == IKE_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::IKE_RESPONSE_STARTED;
    return true;
  } else if (hashCode == IKE_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::IKE_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == TFTP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::TFTP_REQUEST_STARTED;
    return true;
  } else if (hashCode == TFTP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::TFTP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == TFTP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::TFTP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == TFTP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::TFTP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == DHCP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::DHCP_REQUEST_STARTED;
    return true;
  } else if (hashCode == DHCP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::DHCP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == DHCP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::DHCP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == DHCP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::DHCP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == QUIC_REQUEST_STARTED_HASH) {
    enumValue = HookKey::QUIC_REQUEST_STARTED;
    return true;
  } else if (hashCode == QUIC_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::QUIC_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == QUIC_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::QUIC_RESPONSE_STARTED;
    return true;
  } else if (hashCode == QUIC_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::QUIC_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == RDP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::RDP_REQUEST_STARTED;
    return true;
  } else if (hashCode == RDP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::RDP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == RDP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::RDP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == RDP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::RDP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == RFB_REQUEST_STARTED_HASH) {
    enumValue = HookKey::RFB_REQUEST_STARTED;
    return true;
  } else if (hashCode == RFB_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::RFB_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == RFB_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::RFB_RESPONSE_STARTED;
    return true;
  } else if (hashCode == RFB_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::RFB_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == MQTT_REQUEST_STARTED_HASH) {
    enumValue = HookKey::MQTT_REQUEST_STARTED;
    return true;
  } else if (hashCode == MQTT_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::MQTT_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == MQTT_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::MQTT_RESPONSE_STARTED;
    return true;
  } else if (hashCode == MQTT_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::MQTT_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == PGSQL_REQUEST_STARTED_HASH) {
    enumValue = HookKey::PGSQL_REQUEST_STARTED;
    return true;
  } else if (hashCode == PGSQL_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::PGSQL_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == PGSQL_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::PGSQL_RESPONSE_STARTED;
    return true;
  } else if (hashCode == PGSQL_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::PGSQL_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == SNMP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::SNMP_REQUEST_STARTED;
    return true;
  } else if (hashCode == SNMP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::SNMP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == SNMP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::SNMP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == SNMP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::SNMP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == NTP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::NTP_REQUEST_STARTED;
    return true;
  } else if (hashCode == NTP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::NTP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == NTP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::NTP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == NTP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::NTP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == TELNET_REQUEST_STARTED_HASH) {
    enumValue = HookKey::TELNET_REQUEST_STARTED;
    return true;
  } else if (hashCode == TELNET_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::TELNET_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == TELNET_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::TELNET_RESPONSE_STARTED;
    return true;
  } else if (hashCode == TELNET_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::TELNET_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == WEBSOCKET_REQUEST_STARTED_HASH) {
    enumValue = HookKey::WEBSOCKET_REQUEST_STARTED;
    return true;
  } else if (hashCode == WEBSOCKET_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::WEBSOCKET_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == WEBSOCKET_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::WEBSOCKET_RESPONSE_STARTED;
    return true;
  } else if (hashCode == WEBSOCKET_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::WEBSOCKET_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == LDAP_REQUEST_STARTED_HASH) {
    enumValue = HookKey::LDAP_REQUEST_STARTED;
    return true;
  } else if (hashCode == LDAP_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::LDAP_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == LDAP_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::LDAP_RESPONSE_STARTED;
    return true;
  } else if (hashCode == LDAP_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::LDAP_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == POP3_REQUEST_STARTED_HASH) {
    enumValue = HookKey::POP3_REQUEST_STARTED;
    return true;
  } else if (hashCode == POP3_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::POP3_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == POP3_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::POP3_RESPONSE_STARTED;
    return true;
  } else if (hashCode == POP3_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::POP3_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == MDNS_REQUEST_STARTED_HASH) {
    enumValue = HookKey::MDNS_REQUEST_STARTED;
    return true;
  } else if (hashCode == MDNS_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::MDNS_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == MDNS_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::MDNS_RESPONSE_STARTED;
    return true;
  } else if (hashCode == MDNS_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::MDNS_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == BITTORRENT_DHT_REQUEST_STARTED_HASH) {
    enumValue = HookKey::BITTORRENT_DHT_REQUEST_STARTED;
    return true;
  } else if (hashCode == BITTORRENT_DHT_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::BITTORRENT_DHT_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == BITTORRENT_DHT_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::BITTORRENT_DHT_RESPONSE_STARTED;
    return true;
  } else if (hashCode == BITTORRENT_DHT_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::BITTORRENT_DHT_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == DNP3_REQUEST_STARTED_HASH) {
    enumValue = HookKey::DNP3_REQUEST_STARTED;
    return true;
  } else if (hashCode == DNP3_REQUEST_COMPLETE_HASH) {
    enumValue = HookKey::DNP3_REQUEST_COMPLETE;
    return true;
  } else if (hashCode == DNP3_RESPONSE_STARTED_HASH) {
    enumValue = HookKey::DNP3_RESPONSE_STARTED;
    return true;
  } else if (hashCode == DNP3_RESPONSE_COMPLETE_HASH) {
    enumValue = HookKey::DNP3_RESPONSE_COMPLETE;
    return true;
  } else if (hashCode == SSH_REQUEST_IN_PROGRESS_HASH) {
    enumValue = HookKey::SSH_REQUEST_IN_PROGRESS;
    return true;
  } else if (hashCode == SSH_REQUEST_BANNER_WAIT_EOL_HASH) {
    enumValue = HookKey::SSH_REQUEST_BANNER_WAIT_EOL;
    return true;
  } else if (hashCode == SSH_REQUEST_BANNER_DONE_HASH) {
    enumValue = HookKey::SSH_REQUEST_BANNER_DONE;
    return true;
  } else if (hashCode == SSH_REQUEST_FINISHED_HASH) {
    enumValue = HookKey::SSH_REQUEST_FINISHED;
    return true;
  } else if (hashCode == SSH_RESPONSE_IN_PROGRESS_HASH) {
    enumValue = HookKey::SSH_RESPONSE_IN_PROGRESS;
    return true;
  } else if (hashCode == SSH_RESPONSE_BANNER_WAIT_EOL_HASH) {
    enumValue = HookKey::SSH_RESPONSE_BANNER_WAIT_EOL;
    return true;
  } else if (hashCode == SSH_RESPONSE_BANNER_DONE_HASH) {
    enumValue = HookKey::SSH_RESPONSE_BANNER_DONE;
    return true;
  } else if (hashCode == SSH_RESPONSE_FINISHED_HASH) {
    enumValue = HookKey::SSH_RESPONSE_FINISHED;
    return true;
  }
  return false;
}

static bool GetNameForEnumHelper0(HookKey enumValue, Aws::String& value) {
  switch (enumValue) {
    case HookKey::TCP_ALL:
      value = "TCP_ALL";
      return true;
    case HookKey::TCP_FLOW_START:
      value = "TCP_FLOW_START";
      return true;
    case HookKey::TCP_PRE_FLOW:
      value = "TCP_PRE_FLOW";
      return true;
    case HookKey::TCP_PRE_STREAM:
      value = "TCP_PRE_STREAM";
      return true;
    case HookKey::SCTP_ALL:
      value = "SCTP_ALL";
      return true;
    case HookKey::SCTP_FLOW_START:
      value = "SCTP_FLOW_START";
      return true;
    case HookKey::SCTP_PRE_FLOW:
      value = "SCTP_PRE_FLOW";
      return true;
    case HookKey::SCTP_PRE_STREAM:
      value = "SCTP_PRE_STREAM";
      return true;
    case HookKey::IPV6_ALL:
      value = "IPV6_ALL";
      return true;
    case HookKey::IPV6_FLOW_START:
      value = "IPV6_FLOW_START";
      return true;
    case HookKey::IPV6_PRE_FLOW:
      value = "IPV6_PRE_FLOW";
      return true;
    case HookKey::IPV6_PRE_STREAM:
      value = "IPV6_PRE_STREAM";
      return true;
    case HookKey::ICMPV6_ALL:
      value = "ICMPV6_ALL";
      return true;
    case HookKey::ICMPV6_FLOW_START:
      value = "ICMPV6_FLOW_START";
      return true;
    case HookKey::ICMPV6_PRE_FLOW:
      value = "ICMPV6_PRE_FLOW";
      return true;
    case HookKey::ICMPV6_PRE_STREAM:
      value = "ICMPV6_PRE_STREAM";
      return true;
    case HookKey::UDP_ALL:
      value = "UDP_ALL";
      return true;
    case HookKey::UDP_FLOW_START:
      value = "UDP_FLOW_START";
      return true;
    case HookKey::UDP_PRE_FLOW:
      value = "UDP_PRE_FLOW";
      return true;
    case HookKey::UDP_PRE_STREAM:
      value = "UDP_PRE_STREAM";
      return true;
    case HookKey::ICMP_ALL:
      value = "ICMP_ALL";
      return true;
    case HookKey::ICMP_FLOW_START:
      value = "ICMP_FLOW_START";
      return true;
    case HookKey::ICMP_PRE_FLOW:
      value = "ICMP_PRE_FLOW";
      return true;
    case HookKey::ICMP_PRE_STREAM:
      value = "ICMP_PRE_STREAM";
      return true;
    case HookKey::ICMPV4_ALL:
      value = "ICMPV4_ALL";
      return true;
    case HookKey::ICMPV4_FLOW_START:
      value = "ICMPV4_FLOW_START";
      return true;
    case HookKey::ICMPV4_PRE_FLOW:
      value = "ICMPV4_PRE_FLOW";
      return true;
    case HookKey::ICMPV4_PRE_STREAM:
      value = "ICMPV4_PRE_STREAM";
      return true;
    case HookKey::IP_ALL:
      value = "IP_ALL";
      return true;
    case HookKey::IP_FLOW_START:
      value = "IP_FLOW_START";
      return true;
    case HookKey::IP_PRE_FLOW:
      value = "IP_PRE_FLOW";
      return true;
    case HookKey::IP_PRE_STREAM:
      value = "IP_PRE_STREAM";
      return true;
    case HookKey::IPV4_ALL:
      value = "IPV4_ALL";
      return true;
    case HookKey::IPV4_FLOW_START:
      value = "IPV4_FLOW_START";
      return true;
    case HookKey::IPV4_PRE_FLOW:
      value = "IPV4_PRE_FLOW";
      return true;
    case HookKey::IPV4_PRE_STREAM:
      value = "IPV4_PRE_STREAM";
      return true;
    case HookKey::TLS_CLIENT_STARTED:
      value = "TLS_CLIENT_STARTED";
      return true;
    case HookKey::TLS_CLIENT_HELLO:
      value = "TLS_CLIENT_HELLO";
      return true;
    case HookKey::TLS_CLIENT_CERT:
      value = "TLS_CLIENT_CERT";
      return true;
    case HookKey::TLS_CLIENT_DATA:
      value = "TLS_CLIENT_DATA";
      return true;
    case HookKey::TLS_CLIENT_FINISHED:
      value = "TLS_CLIENT_FINISHED";
      return true;
    case HookKey::TLS_SERVER_STARTED:
      value = "TLS_SERVER_STARTED";
      return true;
    case HookKey::TLS_SERVER_HELLO:
      value = "TLS_SERVER_HELLO";
      return true;
    case HookKey::TLS_SERVER_CERT:
      value = "TLS_SERVER_CERT";
      return true;
    case HookKey::TLS_SERVER_DATA:
      value = "TLS_SERVER_DATA";
      return true;
    case HookKey::TLS_SERVER_FINISHED:
      value = "TLS_SERVER_FINISHED";
      return true;
    case HookKey::HTTP1_REQUEST_STARTED:
      value = "HTTP1_REQUEST_STARTED";
      return true;
    case HookKey::HTTP1_REQUEST_LINE:
      value = "HTTP1_REQUEST_LINE";
      return true;
    case HookKey::HTTP1_REQUEST_HEADERS:
      value = "HTTP1_REQUEST_HEADERS";
      return true;
    case HookKey::HTTP1_REQUEST_BODY:
      value = "HTTP1_REQUEST_BODY";
      return true;
    case HookKey::HTTP1_REQUEST_TRAILER:
      value = "HTTP1_REQUEST_TRAILER";
      return true;
    case HookKey::HTTP1_REQUEST_COMPLETE:
      value = "HTTP1_REQUEST_COMPLETE";
      return true;
    case HookKey::HTTP1_RESPONSE_STARTED:
      value = "HTTP1_RESPONSE_STARTED";
      return true;
    case HookKey::HTTP1_RESPONSE_LINE:
      value = "HTTP1_RESPONSE_LINE";
      return true;
    case HookKey::HTTP1_RESPONSE_HEADERS:
      value = "HTTP1_RESPONSE_HEADERS";
      return true;
    case HookKey::HTTP1_RESPONSE_BODY:
      value = "HTTP1_RESPONSE_BODY";
      return true;
    case HookKey::HTTP1_RESPONSE_TRAILER:
      value = "HTTP1_RESPONSE_TRAILER";
      return true;
    case HookKey::HTTP1_RESPONSE_COMPLETE:
      value = "HTTP1_RESPONSE_COMPLETE";
      return true;
    case HookKey::HTTP2_STREAM_REQUEST_STARTED:
      value = "HTTP2_STREAM_REQUEST_STARTED";
      return true;
    case HookKey::HTTP2_STREAM_REQUEST_HEADERS:
      value = "HTTP2_STREAM_REQUEST_HEADERS";
      return true;
    case HookKey::HTTP2_STREAM_REQUEST_DATA:
      value = "HTTP2_STREAM_REQUEST_DATA";
      return true;
    case HookKey::HTTP2_STREAM_REQUEST_CLOSED:
      value = "HTTP2_STREAM_REQUEST_CLOSED";
      return true;
    case HookKey::HTTP2_STREAM_REQUEST_COMPLETE:
      value = "HTTP2_STREAM_REQUEST_COMPLETE";
      return true;
    case HookKey::HTTP2_STREAM_RESPONSE_STARTED:
      value = "HTTP2_STREAM_RESPONSE_STARTED";
      return true;
    case HookKey::HTTP2_STREAM_RESPONSE_HEADERS:
      value = "HTTP2_STREAM_RESPONSE_HEADERS";
      return true;
    case HookKey::HTTP2_STREAM_RESPONSE_DATA:
      value = "HTTP2_STREAM_RESPONSE_DATA";
      return true;
    case HookKey::HTTP2_STREAM_RESPONSE_CLOSED:
      value = "HTTP2_STREAM_RESPONSE_CLOSED";
      return true;
    case HookKey::HTTP2_STREAM_RESPONSE_COMPLETE:
      value = "HTTP2_STREAM_RESPONSE_COMPLETE";
      return true;
    case HookKey::HTTP2_GLOBAL_REQUEST_STARTED:
      value = "HTTP2_GLOBAL_REQUEST_STARTED";
      return true;
    case HookKey::HTTP2_GLOBAL_REQUEST_COMPLETE:
      value = "HTTP2_GLOBAL_REQUEST_COMPLETE";
      return true;
    case HookKey::HTTP2_GLOBAL_RESPONSE_STARTED:
      value = "HTTP2_GLOBAL_RESPONSE_STARTED";
      return true;
    case HookKey::HTTP2_GLOBAL_RESPONSE_COMPLETE:
      value = "HTTP2_GLOBAL_RESPONSE_COMPLETE";
      return true;
    case HookKey::DOH2_STREAM_REQUEST_STARTED:
      value = "DOH2_STREAM_REQUEST_STARTED";
      return true;
    case HookKey::DOH2_STREAM_REQUEST_HEADERS:
      value = "DOH2_STREAM_REQUEST_HEADERS";
      return true;
    case HookKey::DOH2_STREAM_REQUEST_DATA:
      value = "DOH2_STREAM_REQUEST_DATA";
      return true;
    case HookKey::DOH2_STREAM_REQUEST_CLOSED:
      value = "DOH2_STREAM_REQUEST_CLOSED";
      return true;
    case HookKey::DOH2_STREAM_REQUEST_COMPLETE:
      value = "DOH2_STREAM_REQUEST_COMPLETE";
      return true;
    case HookKey::DOH2_STREAM_RESPONSE_STARTED:
      value = "DOH2_STREAM_RESPONSE_STARTED";
      return true;
    case HookKey::DOH2_STREAM_RESPONSE_HEADERS:
      value = "DOH2_STREAM_RESPONSE_HEADERS";
      return true;
    case HookKey::DOH2_STREAM_RESPONSE_DATA:
      value = "DOH2_STREAM_RESPONSE_DATA";
      return true;
    case HookKey::DOH2_STREAM_RESPONSE_CLOSED:
      value = "DOH2_STREAM_RESPONSE_CLOSED";
      return true;
    case HookKey::DOH2_STREAM_RESPONSE_COMPLETE:
      value = "DOH2_STREAM_RESPONSE_COMPLETE";
      return true;
    case HookKey::DOH2_GLOBAL_REQUEST_STARTED:
      value = "DOH2_GLOBAL_REQUEST_STARTED";
      return true;
    case HookKey::DOH2_GLOBAL_REQUEST_COMPLETE:
      value = "DOH2_GLOBAL_REQUEST_COMPLETE";
      return true;
    case HookKey::DOH2_GLOBAL_RESPONSE_STARTED:
      value = "DOH2_GLOBAL_RESPONSE_STARTED";
      return true;
    case HookKey::DOH2_GLOBAL_RESPONSE_COMPLETE:
      value = "DOH2_GLOBAL_RESPONSE_COMPLETE";
      return true;
    case HookKey::DNS_REQUEST_STARTED:
      value = "DNS_REQUEST_STARTED";
      return true;
    case HookKey::DNS_REQUEST_COMPLETE:
      value = "DNS_REQUEST_COMPLETE";
      return true;
    case HookKey::DNS_RESPONSE_STARTED:
      value = "DNS_RESPONSE_STARTED";
      return true;
    case HookKey::DNS_RESPONSE_COMPLETE:
      value = "DNS_RESPONSE_COMPLETE";
      return true;
    case HookKey::SMTP_REQUEST_STARTED:
      value = "SMTP_REQUEST_STARTED";
      return true;
    case HookKey::SMTP_REQUEST_DATA:
      value = "SMTP_REQUEST_DATA";
      return true;
    case HookKey::SMTP_REQUEST_COMPLETE:
      value = "SMTP_REQUEST_COMPLETE";
      return true;
    case HookKey::SMTP_RESPONSE_STARTED:
      value = "SMTP_RESPONSE_STARTED";
      return true;
    case HookKey::SMTP_RESPONSE_DATA:
      value = "SMTP_RESPONSE_DATA";
      return true;
    case HookKey::SMTP_RESPONSE_COMPLETE:
      value = "SMTP_RESPONSE_COMPLETE";
      return true;
    case HookKey::FTP_REQUEST_STARTED:
      value = "FTP_REQUEST_STARTED";
      return true;
    case HookKey::FTP_REQUEST_COMPLETE:
      value = "FTP_REQUEST_COMPLETE";
      return true;
    case HookKey::FTP_RESPONSE_STARTED:
      value = "FTP_RESPONSE_STARTED";
      return true;
    case HookKey::FTP_RESPONSE_COMPLETE:
      value = "FTP_RESPONSE_COMPLETE";
      return true;
    case HookKey::FTP_DATA_REQUEST_STARTED:
      value = "FTP_DATA_REQUEST_STARTED";
      return true;
    case HookKey::FTP_DATA_REQUEST_COMPLETE:
      value = "FTP_DATA_REQUEST_COMPLETE";
      return true;
    case HookKey::FTP_DATA_RESPONSE_STARTED:
      value = "FTP_DATA_RESPONSE_STARTED";
      return true;
    case HookKey::FTP_DATA_RESPONSE_COMPLETE:
      value = "FTP_DATA_RESPONSE_COMPLETE";
      return true;
    case HookKey::SMB_REQUEST_STARTED:
      value = "SMB_REQUEST_STARTED";
      return true;
    case HookKey::SMB_REQUEST_COMPLETE:
      value = "SMB_REQUEST_COMPLETE";
      return true;
    case HookKey::SMB_RESPONSE_STARTED:
      value = "SMB_RESPONSE_STARTED";
      return true;
    case HookKey::SMB_RESPONSE_COMPLETE:
      value = "SMB_RESPONSE_COMPLETE";
      return true;
    case HookKey::DCERPC_REQUEST_STARTED:
      value = "DCERPC_REQUEST_STARTED";
      return true;
    case HookKey::DCERPC_REQUEST_COMPLETE:
      value = "DCERPC_REQUEST_COMPLETE";
      return true;
    case HookKey::DCERPC_RESPONSE_STARTED:
      value = "DCERPC_RESPONSE_STARTED";
      return true;
    case HookKey::DCERPC_RESPONSE_COMPLETE:
      value = "DCERPC_RESPONSE_COMPLETE";
      return true;
    case HookKey::NFS_REQUEST_STARTED:
      value = "NFS_REQUEST_STARTED";
      return true;
    case HookKey::NFS_REQUEST_COMPLETE:
      value = "NFS_REQUEST_COMPLETE";
      return true;
    case HookKey::NFS_RESPONSE_STARTED:
      value = "NFS_RESPONSE_STARTED";
      return true;
    case HookKey::NFS_RESPONSE_COMPLETE:
      value = "NFS_RESPONSE_COMPLETE";
      return true;
    case HookKey::KRB5_REQUEST_STARTED:
      value = "KRB5_REQUEST_STARTED";
      return true;
    case HookKey::KRB5_REQUEST_COMPLETE:
      value = "KRB5_REQUEST_COMPLETE";
      return true;
    case HookKey::KRB5_RESPONSE_STARTED:
      value = "KRB5_RESPONSE_STARTED";
      return true;
    case HookKey::KRB5_RESPONSE_COMPLETE:
      value = "KRB5_RESPONSE_COMPLETE";
      return true;
    case HookKey::IKE_REQUEST_STARTED:
      value = "IKE_REQUEST_STARTED";
      return true;
    case HookKey::IKE_REQUEST_COMPLETE:
      value = "IKE_REQUEST_COMPLETE";
      return true;
    default:
      return false;
  }
}
static bool GetNameForEnumHelper1(HookKey enumValue, Aws::String& value) {
  switch (enumValue) {
    case HookKey::IKE_RESPONSE_STARTED:
      value = "IKE_RESPONSE_STARTED";
      return true;
    case HookKey::IKE_RESPONSE_COMPLETE:
      value = "IKE_RESPONSE_COMPLETE";
      return true;
    case HookKey::TFTP_REQUEST_STARTED:
      value = "TFTP_REQUEST_STARTED";
      return true;
    case HookKey::TFTP_REQUEST_COMPLETE:
      value = "TFTP_REQUEST_COMPLETE";
      return true;
    case HookKey::TFTP_RESPONSE_STARTED:
      value = "TFTP_RESPONSE_STARTED";
      return true;
    case HookKey::TFTP_RESPONSE_COMPLETE:
      value = "TFTP_RESPONSE_COMPLETE";
      return true;
    case HookKey::DHCP_REQUEST_STARTED:
      value = "DHCP_REQUEST_STARTED";
      return true;
    case HookKey::DHCP_REQUEST_COMPLETE:
      value = "DHCP_REQUEST_COMPLETE";
      return true;
    case HookKey::DHCP_RESPONSE_STARTED:
      value = "DHCP_RESPONSE_STARTED";
      return true;
    case HookKey::DHCP_RESPONSE_COMPLETE:
      value = "DHCP_RESPONSE_COMPLETE";
      return true;
    case HookKey::QUIC_REQUEST_STARTED:
      value = "QUIC_REQUEST_STARTED";
      return true;
    case HookKey::QUIC_REQUEST_COMPLETE:
      value = "QUIC_REQUEST_COMPLETE";
      return true;
    case HookKey::QUIC_RESPONSE_STARTED:
      value = "QUIC_RESPONSE_STARTED";
      return true;
    case HookKey::QUIC_RESPONSE_COMPLETE:
      value = "QUIC_RESPONSE_COMPLETE";
      return true;
    case HookKey::RDP_REQUEST_STARTED:
      value = "RDP_REQUEST_STARTED";
      return true;
    case HookKey::RDP_REQUEST_COMPLETE:
      value = "RDP_REQUEST_COMPLETE";
      return true;
    case HookKey::RDP_RESPONSE_STARTED:
      value = "RDP_RESPONSE_STARTED";
      return true;
    case HookKey::RDP_RESPONSE_COMPLETE:
      value = "RDP_RESPONSE_COMPLETE";
      return true;
    case HookKey::RFB_REQUEST_STARTED:
      value = "RFB_REQUEST_STARTED";
      return true;
    case HookKey::RFB_REQUEST_COMPLETE:
      value = "RFB_REQUEST_COMPLETE";
      return true;
    case HookKey::RFB_RESPONSE_STARTED:
      value = "RFB_RESPONSE_STARTED";
      return true;
    case HookKey::RFB_RESPONSE_COMPLETE:
      value = "RFB_RESPONSE_COMPLETE";
      return true;
    case HookKey::MQTT_REQUEST_STARTED:
      value = "MQTT_REQUEST_STARTED";
      return true;
    case HookKey::MQTT_REQUEST_COMPLETE:
      value = "MQTT_REQUEST_COMPLETE";
      return true;
    case HookKey::MQTT_RESPONSE_STARTED:
      value = "MQTT_RESPONSE_STARTED";
      return true;
    case HookKey::MQTT_RESPONSE_COMPLETE:
      value = "MQTT_RESPONSE_COMPLETE";
      return true;
    case HookKey::PGSQL_REQUEST_STARTED:
      value = "PGSQL_REQUEST_STARTED";
      return true;
    case HookKey::PGSQL_REQUEST_COMPLETE:
      value = "PGSQL_REQUEST_COMPLETE";
      return true;
    case HookKey::PGSQL_RESPONSE_STARTED:
      value = "PGSQL_RESPONSE_STARTED";
      return true;
    case HookKey::PGSQL_RESPONSE_COMPLETE:
      value = "PGSQL_RESPONSE_COMPLETE";
      return true;
    case HookKey::SNMP_REQUEST_STARTED:
      value = "SNMP_REQUEST_STARTED";
      return true;
    case HookKey::SNMP_REQUEST_COMPLETE:
      value = "SNMP_REQUEST_COMPLETE";
      return true;
    case HookKey::SNMP_RESPONSE_STARTED:
      value = "SNMP_RESPONSE_STARTED";
      return true;
    case HookKey::SNMP_RESPONSE_COMPLETE:
      value = "SNMP_RESPONSE_COMPLETE";
      return true;
    case HookKey::NTP_REQUEST_STARTED:
      value = "NTP_REQUEST_STARTED";
      return true;
    case HookKey::NTP_REQUEST_COMPLETE:
      value = "NTP_REQUEST_COMPLETE";
      return true;
    case HookKey::NTP_RESPONSE_STARTED:
      value = "NTP_RESPONSE_STARTED";
      return true;
    case HookKey::NTP_RESPONSE_COMPLETE:
      value = "NTP_RESPONSE_COMPLETE";
      return true;
    case HookKey::TELNET_REQUEST_STARTED:
      value = "TELNET_REQUEST_STARTED";
      return true;
    case HookKey::TELNET_REQUEST_COMPLETE:
      value = "TELNET_REQUEST_COMPLETE";
      return true;
    case HookKey::TELNET_RESPONSE_STARTED:
      value = "TELNET_RESPONSE_STARTED";
      return true;
    case HookKey::TELNET_RESPONSE_COMPLETE:
      value = "TELNET_RESPONSE_COMPLETE";
      return true;
    case HookKey::WEBSOCKET_REQUEST_STARTED:
      value = "WEBSOCKET_REQUEST_STARTED";
      return true;
    case HookKey::WEBSOCKET_REQUEST_COMPLETE:
      value = "WEBSOCKET_REQUEST_COMPLETE";
      return true;
    case HookKey::WEBSOCKET_RESPONSE_STARTED:
      value = "WEBSOCKET_RESPONSE_STARTED";
      return true;
    case HookKey::WEBSOCKET_RESPONSE_COMPLETE:
      value = "WEBSOCKET_RESPONSE_COMPLETE";
      return true;
    case HookKey::LDAP_REQUEST_STARTED:
      value = "LDAP_REQUEST_STARTED";
      return true;
    case HookKey::LDAP_REQUEST_COMPLETE:
      value = "LDAP_REQUEST_COMPLETE";
      return true;
    case HookKey::LDAP_RESPONSE_STARTED:
      value = "LDAP_RESPONSE_STARTED";
      return true;
    case HookKey::LDAP_RESPONSE_COMPLETE:
      value = "LDAP_RESPONSE_COMPLETE";
      return true;
    case HookKey::POP3_REQUEST_STARTED:
      value = "POP3_REQUEST_STARTED";
      return true;
    case HookKey::POP3_REQUEST_COMPLETE:
      value = "POP3_REQUEST_COMPLETE";
      return true;
    case HookKey::POP3_RESPONSE_STARTED:
      value = "POP3_RESPONSE_STARTED";
      return true;
    case HookKey::POP3_RESPONSE_COMPLETE:
      value = "POP3_RESPONSE_COMPLETE";
      return true;
    case HookKey::MDNS_REQUEST_STARTED:
      value = "MDNS_REQUEST_STARTED";
      return true;
    case HookKey::MDNS_REQUEST_COMPLETE:
      value = "MDNS_REQUEST_COMPLETE";
      return true;
    case HookKey::MDNS_RESPONSE_STARTED:
      value = "MDNS_RESPONSE_STARTED";
      return true;
    case HookKey::MDNS_RESPONSE_COMPLETE:
      value = "MDNS_RESPONSE_COMPLETE";
      return true;
    case HookKey::BITTORRENT_DHT_REQUEST_STARTED:
      value = "BITTORRENT_DHT_REQUEST_STARTED";
      return true;
    case HookKey::BITTORRENT_DHT_REQUEST_COMPLETE:
      value = "BITTORRENT_DHT_REQUEST_COMPLETE";
      return true;
    case HookKey::BITTORRENT_DHT_RESPONSE_STARTED:
      value = "BITTORRENT_DHT_RESPONSE_STARTED";
      return true;
    case HookKey::BITTORRENT_DHT_RESPONSE_COMPLETE:
      value = "BITTORRENT_DHT_RESPONSE_COMPLETE";
      return true;
    case HookKey::DNP3_REQUEST_STARTED:
      value = "DNP3_REQUEST_STARTED";
      return true;
    case HookKey::DNP3_REQUEST_COMPLETE:
      value = "DNP3_REQUEST_COMPLETE";
      return true;
    case HookKey::DNP3_RESPONSE_STARTED:
      value = "DNP3_RESPONSE_STARTED";
      return true;
    case HookKey::DNP3_RESPONSE_COMPLETE:
      value = "DNP3_RESPONSE_COMPLETE";
      return true;
    case HookKey::SSH_REQUEST_IN_PROGRESS:
      value = "SSH_REQUEST_IN_PROGRESS";
      return true;
    case HookKey::SSH_REQUEST_BANNER_WAIT_EOL:
      value = "SSH_REQUEST_BANNER_WAIT_EOL";
      return true;
    case HookKey::SSH_REQUEST_BANNER_DONE:
      value = "SSH_REQUEST_BANNER_DONE";
      return true;
    case HookKey::SSH_REQUEST_FINISHED:
      value = "SSH_REQUEST_FINISHED";
      return true;
    case HookKey::SSH_RESPONSE_IN_PROGRESS:
      value = "SSH_RESPONSE_IN_PROGRESS";
      return true;
    case HookKey::SSH_RESPONSE_BANNER_WAIT_EOL:
      value = "SSH_RESPONSE_BANNER_WAIT_EOL";
      return true;
    case HookKey::SSH_RESPONSE_BANNER_DONE:
      value = "SSH_RESPONSE_BANNER_DONE";
      return true;
    case HookKey::SSH_RESPONSE_FINISHED:
      value = "SSH_RESPONSE_FINISHED";
      return true;
    default:
      return false;
  }
}

HookKey GetHookKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  HookKey enumValue;
  if (GetEnumForNameHelper0(hashCode, enumValue)) {
    return enumValue;
  } else if (GetEnumForNameHelper1(hashCode, enumValue)) {
    return enumValue;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HookKey>(hashCode);
  }

  return HookKey::NOT_SET;
}

Aws::String GetNameForHookKey(HookKey enumValue) {
  Aws::String value;
  if (GetNameForEnumHelper0(enumValue, value)) {
    return value;
  } else if (GetNameForEnumHelper1(enumValue, value)) {
    return value;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
  }

  return {};
}

}  // namespace HookKeyMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
