/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DeleteAnomalyDetectorRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteAnomalyDetectorRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_singleMetricAnomalyDetectorHasBeenSet) {
    mapSize++;
  }
  if (m_metricMathAnomalyDetectorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_singleMetricAnomalyDetectorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SingleMetricAnomalyDetector"));
    m_singleMetricAnomalyDetector.CborEncode(encoder);
  }

  if (m_metricMathAnomalyDetectorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricMathAnomalyDetector"));
    m_metricMathAnomalyDetector.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteAnomalyDetectorRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
