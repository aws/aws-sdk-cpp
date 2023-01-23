/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResolverQueryLogConfigPolicyRequest::PutResolverQueryLogConfigPolicyRequest() : 
    m_arnHasBeenSet(false),
    m_resolverQueryLogConfigPolicyHasBeenSet(false)
{
}

Aws::String PutResolverQueryLogConfigPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_resolverQueryLogConfigPolicyHasBeenSet)
  {
   payload.WithString("ResolverQueryLogConfigPolicy", m_resolverQueryLogConfigPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResolverQueryLogConfigPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.PutResolverQueryLogConfigPolicy"));
  return headers;

}




