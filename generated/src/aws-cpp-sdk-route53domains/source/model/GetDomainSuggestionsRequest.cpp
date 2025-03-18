/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetDomainSuggestionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDomainSuggestionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_suggestionCountHasBeenSet)
  {
   payload.WithInteger("SuggestionCount", m_suggestionCount);

  }

  if(m_onlyAvailableHasBeenSet)
  {
   payload.WithBool("OnlyAvailable", m_onlyAvailable);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDomainSuggestionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.GetDomainSuggestions"));
  return headers;

}




