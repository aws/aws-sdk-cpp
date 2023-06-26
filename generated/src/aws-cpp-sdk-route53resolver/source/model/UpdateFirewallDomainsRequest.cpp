/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateFirewallDomainsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFirewallDomainsRequest::UpdateFirewallDomainsRequest() : 
    m_firewallDomainListIdHasBeenSet(false),
    m_operation(FirewallDomainUpdateOperation::NOT_SET),
    m_operationHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

Aws::String UpdateFirewallDomainsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallDomainListIdHasBeenSet)
  {
   payload.WithString("FirewallDomainListId", m_firewallDomainListId);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", FirewallDomainUpdateOperationMapper::GetNameForFirewallDomainUpdateOperation(m_operation));
  }

  if(m_domainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsString(m_domains[domainsIndex]);
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFirewallDomainsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateFirewallDomains"));
  return headers;

}




