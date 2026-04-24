/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeAnomalyDetectorsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_namespaceHasBeenSet) {
    mapSize++;
  }
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_dimensionsHasBeenSet) {
    mapSize++;
  }
  if (m_anomalyDetectorTypesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_namespaceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Namespace"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_namespace.c_str()));
  }

  if (m_metricNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_metricName.c_str()));
  }

  if (m_dimensionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Dimensions"));
    encoder.WriteArrayStart(m_dimensions.size());
    for (const auto& item_0 : m_dimensions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_anomalyDetectorTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AnomalyDetectorTypes"));
    encoder.WriteArrayStart(m_anomalyDetectorTypes.size());
    for (const auto& item_0 : m_anomalyDetectorTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(AnomalyDetectorTypeMapper::GetNameForAnomalyDetectorType(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeAnomalyDetectorsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
