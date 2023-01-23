/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/AssociateCustomerGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateCustomerGatewayRequest::AssociateCustomerGatewayRequest() : 
    m_customerGatewayArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false)
{
}

Aws::String AssociateCustomerGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customerGatewayArnHasBeenSet)
  {
   payload.WithString("CustomerGatewayArn", m_customerGatewayArn);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_linkIdHasBeenSet)
  {
   payload.WithString("LinkId", m_linkId);

  }

  return payload.View().WriteReadable();
}




