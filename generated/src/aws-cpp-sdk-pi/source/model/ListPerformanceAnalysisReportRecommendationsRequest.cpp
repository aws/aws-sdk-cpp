/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/pi/model/ListPerformanceAnalysisReportRecommendationsRequest.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListPerformanceAnalysisReportRecommendationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_identifierHasBeenSet) {
    mapSize++;
  }
  if (m_analysisReportIdHasBeenSet) {
    mapSize++;
  }
  if (m_recommendationIdsHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serviceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ServiceTypeMapper::GetNameForServiceType(m_serviceType).c_str()));
  }

  if (m_identifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Identifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_identifier.c_str()));
  }

  if (m_analysisReportIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AnalysisReportId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_analysisReportId.c_str()));
  }

  if (m_recommendationIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RecommendationIds"));
    encoder.WriteArrayStart(m_recommendationIds.size());
    for (const auto& item_0 : m_recommendationIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListPerformanceAnalysisReportRecommendationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
