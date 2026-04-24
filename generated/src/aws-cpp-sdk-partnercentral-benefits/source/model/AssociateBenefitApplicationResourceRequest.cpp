/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/AssociateBenefitApplicationResourceRequest.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateBenefitApplicationResourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_benefitApplicationIdentifierHasBeenSet) {
    payload.WithString("BenefitApplicationIdentifier", m_benefitApplicationIdentifier);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateBenefitApplicationResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralBenefitsService.AssociateBenefitApplicationResource"));
  return headers;
}
