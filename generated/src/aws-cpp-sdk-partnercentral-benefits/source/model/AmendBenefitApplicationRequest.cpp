/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/AmendBenefitApplicationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AmendBenefitApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("Revision", m_revision);
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_amendmentReasonHasBeenSet) {
    payload.WithString("AmendmentReason", m_amendmentReason);
  }

  if (m_amendmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> amendmentsJsonList(m_amendments.size());
    for (unsigned amendmentsIndex = 0; amendmentsIndex < amendmentsJsonList.GetLength(); ++amendmentsIndex) {
      amendmentsJsonList[amendmentsIndex].AsObject(m_amendments[amendmentsIndex].Jsonize());
    }
    payload.WithArray("Amendments", std::move(amendmentsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AmendBenefitApplicationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralBenefitsService.AmendBenefitApplication"));
  return headers;
}
