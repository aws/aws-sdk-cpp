/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/CreateBenefitApplicationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBenefitApplicationRequest::SerializePayload() const {
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

  if (m_benefitIdentifierHasBeenSet) {
    payload.WithString("BenefitIdentifier", m_benefitIdentifier);
  }

  if (m_fulfillmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fulfillmentTypesJsonList(m_fulfillmentTypes.size());
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString(
          FulfillmentTypeMapper::GetNameForFulfillmentType(m_fulfillmentTypes[fulfillmentTypesIndex]));
    }
    payload.WithArray("FulfillmentTypes", std::move(fulfillmentTypesJsonList));
  }

  if (m_benefitApplicationDetailsHasBeenSet) {
    if (!m_benefitApplicationDetails.View().IsNull()) {
      payload.WithObject("BenefitApplicationDetails", JsonValue(m_benefitApplicationDetails.View()));
    }
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_associatedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedResourcesJsonList(m_associatedResources.size());
    for (unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength();
         ++associatedResourcesIndex) {
      associatedResourcesJsonList[associatedResourcesIndex].AsString(m_associatedResources[associatedResourcesIndex]);
    }
    payload.WithArray("AssociatedResources", std::move(associatedResourcesJsonList));
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

Aws::Http::HeaderValueCollection CreateBenefitApplicationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralBenefitsService.CreateBenefitApplication"));
  return headers;
}
