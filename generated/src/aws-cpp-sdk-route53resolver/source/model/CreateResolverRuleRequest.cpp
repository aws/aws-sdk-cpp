/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/CreateResolverRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateResolverRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleTypeHasBeenSet)
  {
   payload.WithString("RuleType", RuleTypeOptionMapper::GetNameForRuleTypeOption(m_ruleType));
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_targetIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIpsJsonList(m_targetIps.size());
   for(unsigned targetIpsIndex = 0; targetIpsIndex < targetIpsJsonList.GetLength(); ++targetIpsIndex)
   {
     targetIpsJsonList[targetIpsIndex].AsObject(m_targetIps[targetIpsIndex].Jsonize());
   }
   payload.WithArray("TargetIps", std::move(targetIpsJsonList));

  }

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_delegationRecordHasBeenSet)
  {
   payload.WithString("DelegationRecord", m_delegationRecord);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateResolverRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.CreateResolverRule"));
  return headers;

}




