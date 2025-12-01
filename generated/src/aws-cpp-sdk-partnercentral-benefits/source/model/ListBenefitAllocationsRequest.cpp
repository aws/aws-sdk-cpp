/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListBenefitAllocationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_fulfillmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fulfillmentTypesJsonList(m_fulfillmentTypes.size());
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString(
          FulfillmentTypeMapper::GetNameForFulfillmentType(m_fulfillmentTypes[fulfillmentTypesIndex]));
    }
    payload.WithArray("FulfillmentTypes", std::move(fulfillmentTypesJsonList));
  }

  if (m_benefitIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> benefitIdentifiersJsonList(m_benefitIdentifiers.size());
    for (unsigned benefitIdentifiersIndex = 0; benefitIdentifiersIndex < benefitIdentifiersJsonList.GetLength();
         ++benefitIdentifiersIndex) {
      benefitIdentifiersJsonList[benefitIdentifiersIndex].AsString(m_benefitIdentifiers[benefitIdentifiersIndex]);
    }
    payload.WithArray("BenefitIdentifiers", std::move(benefitIdentifiersJsonList));
  }

  if (m_benefitApplicationIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> benefitApplicationIdentifiersJsonList(m_benefitApplicationIdentifiers.size());
    for (unsigned benefitApplicationIdentifiersIndex = 0;
         benefitApplicationIdentifiersIndex < benefitApplicationIdentifiersJsonList.GetLength(); ++benefitApplicationIdentifiersIndex) {
      benefitApplicationIdentifiersJsonList[benefitApplicationIdentifiersIndex].AsString(
          m_benefitApplicationIdentifiers[benefitApplicationIdentifiersIndex]);
    }
    payload.WithArray("BenefitApplicationIdentifiers", std::move(benefitApplicationIdentifiersJsonList));
  }

  if (m_statusHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
    for (unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex) {
      statusJsonList[statusIndex].AsString(BenefitAllocationStatusMapper::GetNameForBenefitAllocationStatus(m_status[statusIndex]));
    }
    payload.WithArray("Status", std::move(statusJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListBenefitAllocationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralBenefitsService.ListBenefitAllocations"));
  return headers;
}
