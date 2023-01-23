/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/PutResolverRulePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResolverRulePolicyRequest::PutResolverRulePolicyRequest() : 
    m_arnHasBeenSet(false),
    m_resolverRulePolicyHasBeenSet(false)
{
}

Aws::String PutResolverRulePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_resolverRulePolicyHasBeenSet)
  {
   payload.WithString("ResolverRulePolicy", m_resolverRulePolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResolverRulePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.PutResolverRulePolicy"));
  return headers;

}




