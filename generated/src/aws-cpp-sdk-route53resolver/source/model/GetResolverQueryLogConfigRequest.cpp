/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetResolverQueryLogConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResolverQueryLogConfigRequest::GetResolverQueryLogConfigRequest() : 
    m_resolverQueryLogConfigIdHasBeenSet(false)
{
}

Aws::String GetResolverQueryLogConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverQueryLogConfigIdHasBeenSet)
  {
   payload.WithString("ResolverQueryLogConfigId", m_resolverQueryLogConfigId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResolverQueryLogConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetResolverQueryLogConfig"));
  return headers;

}




