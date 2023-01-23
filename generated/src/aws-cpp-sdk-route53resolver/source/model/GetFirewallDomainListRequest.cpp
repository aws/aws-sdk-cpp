/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetFirewallDomainListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFirewallDomainListRequest::GetFirewallDomainListRequest() : 
    m_firewallDomainListIdHasBeenSet(false)
{
}

Aws::String GetFirewallDomainListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallDomainListIdHasBeenSet)
  {
   payload.WithString("FirewallDomainListId", m_firewallDomainListId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFirewallDomainListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetFirewallDomainList"));
  return headers;

}




