﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class StatefulRuleProtocol {
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
  IMAP,
  MSN,
  KRB5,
  IKEV2,
  TFTP,
  NTP,
  DHCP,
  HTTP2,
  QUIC
};

namespace StatefulRuleProtocolMapper {
AWS_NETWORKFIREWALL_API StatefulRuleProtocol GetStatefulRuleProtocolForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStatefulRuleProtocol(StatefulRuleProtocol value);
}  // namespace StatefulRuleProtocolMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
