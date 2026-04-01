/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsRequest.h>

#include <utility>

using namespace Aws::Sustainability::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetEstimatedCarbonEmissionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("TimePeriod", m_timePeriod.Jsonize());
  }

  if (m_groupByHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
    for (unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex) {
      groupByJsonList[groupByIndex].AsString(DimensionMapper::GetNameForDimension(m_groupBy[groupByIndex]));
    }
    payload.WithArray("GroupBy", std::move(groupByJsonList));
  }

  if (m_filterByHasBeenSet) {
    payload.WithObject("FilterBy", m_filterBy.Jsonize());
  }

  if (m_emissionsTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> emissionsTypesJsonList(m_emissionsTypes.size());
    for (unsigned emissionsTypesIndex = 0; emissionsTypesIndex < emissionsTypesJsonList.GetLength(); ++emissionsTypesIndex) {
      emissionsTypesJsonList[emissionsTypesIndex].AsString(
          EmissionsTypeMapper::GetNameForEmissionsType(m_emissionsTypes[emissionsTypesIndex]));
    }
    payload.WithArray("EmissionsTypes", std::move(emissionsTypesJsonList));
  }

  if (m_granularityHasBeenSet) {
    payload.WithString("Granularity", TimeGranularityMapper::GetNameForTimeGranularity(m_granularity));
  }

  if (m_granularityConfigurationHasBeenSet) {
    payload.WithObject("GranularityConfiguration", m_granularityConfiguration.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
