/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/GetRevenueStatisticsSummaryRequest.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRevenueStatisticsSummaryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_timeWindowHasBeenSet) {
    payload.WithObject("TimeWindow", m_timeWindow.Jsonize());
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("Currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRevenueStatisticsSummaryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetRevenueStatisticsSummary"));
  return headers;
}
