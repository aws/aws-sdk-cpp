/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DeleteResolverEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResolverEndpointRequest::DeleteResolverEndpointRequest() : 
    m_resolverEndpointIdHasBeenSet(false)
{
}

Aws::String DeleteResolverEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteResolverEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.DeleteResolverEndpoint"));
  return headers;

}




