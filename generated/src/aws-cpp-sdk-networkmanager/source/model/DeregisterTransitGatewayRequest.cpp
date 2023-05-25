/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DeregisterTransitGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterTransitGatewayRequest::DeregisterTransitGatewayRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false)
{
}

Aws::String DeregisterTransitGatewayRequest::SerializePayload() const
{
  return {};
}




