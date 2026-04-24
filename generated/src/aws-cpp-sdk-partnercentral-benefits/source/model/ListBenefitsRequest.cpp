/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/ListBenefitsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListBenefitsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_programsHasBeenSet) {
    Aws::Utils::Array<JsonValue> programsJsonList(m_programs.size());
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      programsJsonList[programsIndex].AsString(m_programs[programsIndex]);
    }
    payload.WithArray("Programs", std::move(programsJsonList));
  }

  if (m_fulfillmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fulfillmentTypesJsonList(m_fulfillmentTypes.size());
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString(
          FulfillmentTypeMapper::GetNameForFulfillmentType(m_fulfillmentTypes[fulfillmentTypesIndex]));
    }
    payload.WithArray("FulfillmentTypes", std::move(fulfillmentTypesJsonList));
  }

  if (m_statusHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
    for (unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex) {
      statusJsonList[statusIndex].AsString(BenefitStatusMapper::GetNameForBenefitStatus(m_status[statusIndex]));
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

Aws::Http::HeaderValueCollection ListBenefitsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralBenefitsService.ListBenefits"));
  return headers;
}
