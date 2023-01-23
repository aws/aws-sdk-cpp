/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/CheckDomainAvailabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckDomainAvailabilityRequest::CheckDomainAvailabilityRequest() : 
    m_domainNameHasBeenSet(false),
    m_idnLangCodeHasBeenSet(false)
{
}

Aws::String CheckDomainAvailabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_idnLangCodeHasBeenSet)
  {
   payload.WithString("IdnLangCode", m_idnLangCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CheckDomainAvailabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.CheckDomainAvailability"));
  return headers;

}




