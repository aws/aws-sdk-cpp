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
  enum class ConnectPeerErrorCode
  {
    NOT_SET,
    EDGE_LOCATION_NO_FREE_IPS,
    EDGE_LOCATION_PEER_DUPLICATE,
    SUBNET_NOT_FOUND,
    IP_OUTSIDE_SUBNET_CIDR_RANGE,
    INVALID_INSIDE_CIDR_BLOCK,
    NO_ASSOCIATED_CIDR_BLOCK
  };

namespace ConnectPeerErrorCodeMapper
{
AWS_NETWORKMANAGER_API ConnectPeerErrorCode GetConnectPeerErrorCodeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForConnectPeerErrorCode(ConnectPeerErrorCode value);
} // namespace ConnectPeerErrorCodeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
