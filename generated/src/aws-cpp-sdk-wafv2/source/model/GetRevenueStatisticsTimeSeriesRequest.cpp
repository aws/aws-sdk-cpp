/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/GetRevenueStatisticsTimeSeriesRequest.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRevenueStatisticsTimeSeriesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statisticTypeHasBeenSet) {
    payload.WithString("StatisticType", TimeSeriesStatisticTypeMapper::GetNameForTimeSeriesStatisticType(m_statisticType));
  }

  if (m_timeWindowHasBeenSet) {
    payload.WithObject("TimeWindow", m_timeWindow.Jsonize());
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if (m_intervalHasBeenSet) {
    payload.WithString("Interval", IntervalTypeMapper::GetNameForIntervalType(m_interval));
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("Currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if (m_groupByHasBeenSet) {
    payload.WithString("GroupBy", GroupByTypeMapper::GetNameForGroupByType(m_groupBy));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("Limit", m_limit);
  }

  if (m_nextMarkerHasBeenSet) {
    payload.WithString("NextMarker", m_nextMarker);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRevenueStatisticsTimeSeriesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetRevenueStatisticsTimeSeries"));
  return headers;
}
