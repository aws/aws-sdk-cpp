/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/UpdateBenefitApplicationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBenefitApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("Revision", m_revision);
  }

  if (m_benefitApplicationDetailsHasBeenSet) {
    if (!m_benefitApplicationDetails.View().IsNull()) {
      payload.WithObject("BenefitApplicationDetails", JsonValue(m_benefitApplicationDetails.View()));
    }
  }

  if (m_partnerContactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> partnerContactsJsonList(m_partnerContacts.size());
    for (unsigned partnerContactsIndex = 0; partnerContactsIndex < partnerContactsJsonList.GetLength(); ++partnerContactsIndex) {
      partnerContactsJsonList[partnerContactsIndex].AsObject(m_partnerContacts[partnerContactsIndex].Jsonize());
    }
    payload.WithArray("PartnerContacts", std::move(partnerContactsJsonList));
  }

  if (m_fileDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fileDetailsJsonList(m_fileDetails.size());
    for (unsigned fileDetailsIndex = 0; fileDetailsIndex < fileDetailsJsonList.GetLength(); ++fileDetailsIndex) {
      fileDetailsJsonList[fileDetailsIndex].AsObject(m_fileDetails[fileDetailsIndex].Jsonize());
    }
    payload.WithArray("FileDetails", std::move(fileDetailsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBenefitApplicationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralBenefitsService.UpdateBenefitApplication"));
  return headers;
}
