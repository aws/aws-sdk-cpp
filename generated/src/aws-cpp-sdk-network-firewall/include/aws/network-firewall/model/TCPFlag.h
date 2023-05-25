/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class TCPFlag
  {
    NOT_SET,
    FIN,
    SYN,
    RST,
    PSH,
    ACK,
    URG,
    ECE,
    CWR
  };

namespace TCPFlagMapper
{
AWS_NETWORKFIREWALL_API TCPFlag GetTCPFlagForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForTCPFlag(TCPFlag value);
} // namespace TCPFlagMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
