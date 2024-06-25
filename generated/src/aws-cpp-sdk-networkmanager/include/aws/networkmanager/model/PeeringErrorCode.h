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
  enum class PeeringErrorCode
  {
    NOT_SET,
    TRANSIT_GATEWAY_NOT_FOUND,
    TRANSIT_GATEWAY_PEERS_LIMIT_EXCEEDED,
    MISSING_PERMISSIONS,
    INTERNAL_ERROR,
    EDGE_LOCATION_PEER_DUPLICATE,
    INVALID_TRANSIT_GATEWAY_STATE
  };

namespace PeeringErrorCodeMapper
{
AWS_NETWORKMANAGER_API PeeringErrorCode GetPeeringErrorCodeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForPeeringErrorCode(PeeringErrorCode value);
} // namespace PeeringErrorCodeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
