/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/pi/model/DescribeDimensionKeysRequest.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeDimensionKeysRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_identifierHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_endTimeHasBeenSet) {
    mapSize++;
  }
  if (m_metricHasBeenSet) {
    mapSize++;
  }
  if (m_periodInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_groupByHasBeenSet) {
    mapSize++;
  }
  if (m_additionalMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_partitionByHasBeenSet) {
    mapSize++;
  }
  if (m_filterHasBeenSet) {
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

  if (m_metricHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Metric"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_metric.c_str()));
  }

  if (m_periodInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PeriodInSeconds"));
    (m_periodInSeconds >= 0) ? encoder.WriteUInt(m_periodInSeconds) : encoder.WriteNegInt(m_periodInSeconds);
  }

  if (m_groupByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupBy"));
    m_groupBy.CborEncode(encoder);
  }

  if (m_additionalMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdditionalMetrics"));
    encoder.WriteArrayStart(m_additionalMetrics.size());
    for (const auto& item_0 : m_additionalMetrics) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_partitionByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartitionBy"));
    m_partitionBy.CborEncode(encoder);
  }

  if (m_filterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Filter"));
    encoder.WriteMapStart(m_filter.size());
    for (const auto& item_0 : m_filter) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
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

Aws::Http::HeaderValueCollection DescribeDimensionKeysRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
