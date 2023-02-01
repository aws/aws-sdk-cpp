/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateResolverEndpointIpAddressRequest::DisassociateResolverEndpointIpAddressRequest() : 
    m_resolverEndpointIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

Aws::String DisassociateResolverEndpointIpAddressRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithObject("IpAddress", m_ipAddress.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateResolverEndpointIpAddressRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.DisassociateResolverEndpointIpAddress"));
  return headers;

}




