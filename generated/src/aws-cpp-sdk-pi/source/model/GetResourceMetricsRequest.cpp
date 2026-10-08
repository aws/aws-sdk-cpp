/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/pi/model/GetResourceMetricsRequest.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetResourceMetricsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_identifierHasBeenSet) {
    mapSize++;
  }
  if (m_metricQueriesHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_endTimeHasBeenSet) {
    mapSize++;
  }
  if (m_periodInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_periodAlignmentHasBeenSet) {
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

  if (m_metricQueriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricQueries"));
    encoder.WriteArrayStart(m_metricQueries.size());
    for (const auto& item_0 : m_metricQueries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_endTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_endTime.Seconds());
  }

  if (m_periodInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PeriodInSeconds"));
    (m_periodInSeconds >= 0) ? encoder.WriteUInt(m_periodInSeconds) : encoder.WriteNegInt(m_periodInSeconds);
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_periodAlignmentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PeriodAlignment"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PeriodAlignmentMapper::GetNameForPeriodAlignment(m_periodAlignment).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetResourceMetricsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
