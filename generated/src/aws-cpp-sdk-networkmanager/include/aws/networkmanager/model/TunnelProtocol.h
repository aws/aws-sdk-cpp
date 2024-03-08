/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class TunnelProtocol
  {
    NOT_SET,
    GRE,
    NO_ENCAP
  };

namespace TunnelProtocolMapper
{
AWS_NETWORKMANAGER_API TunnelProtocol GetTunnelProtocolForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForTunnelProtocol(TunnelProtocol value);
} // namespace TunnelProtocolMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
