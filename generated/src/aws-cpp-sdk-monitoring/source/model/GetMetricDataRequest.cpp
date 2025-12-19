/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/GetMetricDataRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetMetricDataRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_metricDataQueriesHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_endTimeHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_scanByHasBeenSet) {
    mapSize++;
  }
  if (m_maxDatapointsHasBeenSet) {
    mapSize++;
  }
  if (m_labelOptionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_metricDataQueriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricDataQueries"));
    encoder.WriteArrayStart(m_metricDataQueries.size());
    for (const auto& item_0 : m_metricDataQueries) {
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

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_scanByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScanBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ScanByMapper::GetNameForScanBy(m_scanBy).c_str()));
  }

  if (m_maxDatapointsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxDatapoints"));
    (m_maxDatapoints >= 0) ? encoder.WriteUInt(m_maxDatapoints) : encoder.WriteNegInt(m_maxDatapoints);
  }

  if (m_labelOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LabelOptions"));
    m_labelOptions.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetMetricDataRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
