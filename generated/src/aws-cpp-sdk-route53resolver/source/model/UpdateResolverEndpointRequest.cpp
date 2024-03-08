/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateResolverEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResolverEndpointRequest::UpdateResolverEndpointRequest() : 
    m_resolverEndpointIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resolverEndpointType(ResolverEndpointType::NOT_SET),
    m_resolverEndpointTypeHasBeenSet(false),
    m_updateIpAddressesHasBeenSet(false),
    m_protocolsHasBeenSet(false)
{
}

Aws::String UpdateResolverEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resolverEndpointTypeHasBeenSet)
  {
   payload.WithString("ResolverEndpointType", ResolverEndpointTypeMapper::GetNameForResolverEndpointType(m_resolverEndpointType));
  }

  if(m_updateIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updateIpAddressesJsonList(m_updateIpAddresses.size());
   for(unsigned updateIpAddressesIndex = 0; updateIpAddressesIndex < updateIpAddressesJsonList.GetLength(); ++updateIpAddressesIndex)
   {
     updateIpAddressesJsonList[updateIpAddressesIndex].AsObject(m_updateIpAddresses[updateIpAddressesIndex].Jsonize());
   }
   payload.WithArray("UpdateIpAddresses", std::move(updateIpAddressesJsonList));

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResolverEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateResolverEndpoint"));
  return headers;

}




