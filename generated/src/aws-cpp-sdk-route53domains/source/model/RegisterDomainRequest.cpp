﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/RegisterDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterDomainRequest::RegisterDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_idnLangCodeHasBeenSet(false),
    m_durationInYears(0),
    m_durationInYearsHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_adminContactHasBeenSet(false),
    m_registrantContactHasBeenSet(false),
    m_techContactHasBeenSet(false),
    m_privacyProtectAdminContact(false),
    m_privacyProtectAdminContactHasBeenSet(false),
    m_privacyProtectRegistrantContact(false),
    m_privacyProtectRegistrantContactHasBeenSet(false),
    m_privacyProtectTechContact(false),
    m_privacyProtectTechContactHasBeenSet(false),
    m_billingContactHasBeenSet(false),
    m_privacyProtectBillingContact(false),
    m_privacyProtectBillingContactHasBeenSet(false)
{
}

Aws::String RegisterDomainRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection RegisterDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.RegisterDomain"));
  return headers;

}




