/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/TransferDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TransferDomainRequest::SerializePayload() const
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

  if(m_durationInYearsHasBeenSet)
  {
   payload.WithInteger("DurationInYears", m_durationInYears);

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

  if(m_authCodeHasBeenSet)
  {
   payload.WithString("AuthCode", m_authCode);

  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithBool("AutoRenew", m_autoRenew);

  }

  if(m_adminContactHasBeenSet)
  {
   payload.WithObject("AdminContact", m_adminContact.Jsonize());

  }

  if(m_registrantContactHasBeenSet)
  {
   payload.WithObject("RegistrantContact", m_registrantContact.Jsonize());

  }

  if(m_techContactHasBeenSet)
  {
   payload.WithObject("TechContact", m_techContact.Jsonize());

  }

  if(m_privacyProtectAdminContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectAdminContact", m_privacyProtectAdminContact);

  }

  if(m_privacyProtectRegistrantContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectRegistrantContact", m_privacyProtectRegistrantContact);

  }

  if(m_privacyProtectTechContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectTechContact", m_privacyProtectTechContact);

  }

  if(m_billingContactHasBeenSet)
  {
   payload.WithObject("BillingContact", m_billingContact.Jsonize());

  }

  if(m_privacyProtectBillingContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectBillingContact", m_privacyProtectBillingContact);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TransferDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.TransferDomain"));
  return headers;

}




