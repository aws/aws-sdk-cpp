/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetResolverRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResolverRuleRequest::GetResolverRuleRequest() : 
    m_resolverRuleIdHasBeenSet(false)
{
}

Aws::String GetResolverRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverRuleIdHasBeenSet)
  {
   payload.WithString("ResolverRuleId", m_resolverRuleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResolverRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetResolverRule"));
  return headers;

}




