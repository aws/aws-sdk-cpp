/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DisassociateResolverQueryLogConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateResolverQueryLogConfigRequest::DisassociateResolverQueryLogConfigRequest() : 
    m_resolverQueryLogConfigIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

Aws::String DisassociateResolverQueryLogConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverQueryLogConfigIdHasBeenSet)
  {
   payload.WithString("ResolverQueryLogConfigId", m_resolverQueryLogConfigId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateResolverQueryLogConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.DisassociateResolverQueryLogConfig"));
  return headers;

}




