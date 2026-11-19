/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/GetCustomerAccountStatisticsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCustomerAccountStatisticsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("Filter", m_filter.Jsonize());
  }

  if (m_aggregationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> aggregationsJsonList(m_aggregations.size());
    for (unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex) {
      aggregationsJsonList[aggregationsIndex].AsObject(m_aggregations[aggregationsIndex].Jsonize());
    }
    payload.WithArray("Aggregations", std::move(aggregationsJsonList));
  }

  if (m_includeMissingHasBeenSet) {
    payload.WithBool("IncludeMissing", m_includeMissing);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCustomerAccountStatisticsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.GetCustomerAccountStatistics"));
  return headers;
}
