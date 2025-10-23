/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/UpdateResponderGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResponderGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_trustStoreConfigurationHasBeenSet)
  {
   payload.WithObject("trustStoreConfiguration", m_trustStoreConfiguration.Jsonize());

  }

  if(m_managedEndpointConfigurationHasBeenSet)
  {
   payload.WithObject("managedEndpointConfiguration", m_managedEndpointConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




