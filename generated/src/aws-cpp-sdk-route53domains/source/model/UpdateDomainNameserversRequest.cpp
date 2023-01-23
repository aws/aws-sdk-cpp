/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainNameserversRequest::UpdateDomainNameserversRequest() : 
    m_domainNameHasBeenSet(false),
    m_nameserversHasBeenSet(false)
{
}

Aws::String UpdateDomainNameserversRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_nameserversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nameserversJsonList(m_nameservers.size());
   for(unsigned nameserversIndex = 0; nameserversIndex < nameserversJsonList.GetLength(); ++nameserversIndex)
   {
     nameserversJsonList[nameserversIndex].AsObject(m_nameservers[nameserversIndex].Jsonize());
   }
   payload.WithArray("Nameservers", std::move(nameserversJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainNameserversRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.UpdateDomainNameservers"));
  return headers;

}




