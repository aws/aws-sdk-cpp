/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{
  enum class Protocol
  {
    NOT_SET,
    TCP,
    ICMP
  };

namespace ProtocolMapper
{
AWS_NETWORKMONITOR_API Protocol GetProtocolForName(const Aws::String& name);

AWS_NETWORKMONITOR_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
