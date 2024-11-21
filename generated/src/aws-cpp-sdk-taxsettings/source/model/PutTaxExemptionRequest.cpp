﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/PutTaxExemptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTaxExemptionRequest::PutTaxExemptionRequest() : 
    m_accountIdsHasBeenSet(false),
    m_authorityHasBeenSet(false),
    m_exemptionCertificateHasBeenSet(false),
    m_exemptionTypeHasBeenSet(false)
{
}

Aws::String PutTaxExemptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_authorityHasBeenSet)
  {
   payload.WithObject("authority", m_authority.Jsonize());

  }

  if(m_exemptionCertificateHasBeenSet)
  {
   payload.WithObject("exemptionCertificate", m_exemptionCertificate.Jsonize());

  }

  if(m_exemptionTypeHasBeenSet)
  {
   payload.WithString("exemptionType", m_exemptionType);

  }

  return payload.View().WriteReadable();
}




