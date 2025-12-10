/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/GetMetricWidgetImageRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetMetricWidgetImageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_metricWidgetHasBeenSet) {
    mapSize++;
  }
  if (m_outputFormatHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_metricWidgetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricWidget"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_metricWidget.c_str()));
  }

  if (m_outputFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_outputFormat.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetMetricWidgetImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
