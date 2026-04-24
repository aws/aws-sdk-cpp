/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutMetricDataRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_namespaceHasBeenSet) {
    mapSize++;
  }
  if (m_metricDataHasBeenSet) {
    mapSize++;
  }
  if (m_entityMetricDataHasBeenSet) {
    mapSize++;
  }
  if (m_strictEntityValidationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_namespaceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Namespace"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_namespace.c_str()));
  }

  if (m_metricDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricData"));
    encoder.WriteArrayStart(m_metricData.size());
    for (const auto& item_0 : m_metricData) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_entityMetricDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityMetricData"));
    encoder.WriteArrayStart(m_entityMetricData.size());
    for (const auto& item_0 : m_entityMetricData) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_strictEntityValidationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StrictEntityValidation"));
    encoder.WriteBool(m_strictEntityValidation);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutMetricDataRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
Aws::Client::CompressionAlgorithm PutMetricDataRequest::GetSelectedCompressionAlgorithm(
    Aws::Client::RequestCompressionConfig config) const {
  if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE) {
    return Aws::Client::CompressionAlgorithm::NONE;
  }

  const auto& body = AmazonSerializableWebServiceRequest::GetBody();
  body->seekg(0, body->end);
  size_t bodySize = body->tellg();
  body->seekg(0, body->beg);
  if (bodySize < config.requestMinCompressionSizeBytes) {
    return Aws::Client::CompressionAlgorithm::NONE;
  } else {
    return Aws::Client::CompressionAlgorithm::GZIP;
  }
}
#endif
