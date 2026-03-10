/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/ListMetricsRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListMetricsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_namespaceHasBeenSet) {
    mapSize++;
  }
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_dimensionsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_recentlyActiveHasBeenSet) {
    mapSize++;
  }
  if (m_includeLinkedAccountsHasBeenSet) {
    mapSize++;
  }
  if (m_owningAccountHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

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

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_recentlyActiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RecentlyActive"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RecentlyActiveMapper::GetNameForRecentlyActive(m_recentlyActive).c_str()));
  }

  if (m_includeLinkedAccountsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludeLinkedAccounts"));
    encoder.WriteBool(m_includeLinkedAccounts);
  }

  if (m_owningAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwningAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_owningAccount.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListMetricsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
