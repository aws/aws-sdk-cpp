/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pi/model/ListPerformanceAnalysisReportRecommendationsRequest.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListPerformanceAnalysisReportRecommendationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceTypeHasBeenSet) {
    payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_analysisReportIdHasBeenSet) {
    payload.WithString("AnalysisReportId", m_analysisReportId);
  }

  if (m_recommendationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationIdsJsonList(m_recommendationIds.size());
    for (unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex) {
      recommendationIdsJsonList[recommendationIdsIndex].AsString(m_recommendationIds[recommendationIdsIndex]);
    }
    payload.WithArray("RecommendationIds", std::move(recommendationIdsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListPerformanceAnalysisReportRecommendationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.ListPerformanceAnalysisReportRecommendations"));
  return headers;
}
