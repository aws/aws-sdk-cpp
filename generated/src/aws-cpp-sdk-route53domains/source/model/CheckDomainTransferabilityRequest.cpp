/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/CheckDomainTransferabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckDomainTransferabilityRequest::CheckDomainTransferabilityRequest() : 
    m_domainNameHasBeenSet(false),
    m_authCodeHasBeenSet(false)
{
}

Aws::String CheckDomainTransferabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_authCodeHasBeenSet)
  {
   payload.WithString("AuthCode", m_authCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CheckDomainTransferabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.CheckDomainTransferability"));
  return headers;

}




