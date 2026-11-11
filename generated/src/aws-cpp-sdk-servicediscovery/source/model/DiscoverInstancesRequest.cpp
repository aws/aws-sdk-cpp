/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/model/DiscoverInstancesRequest.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DiscoverInstancesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_namespaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_serviceNameHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_queryParametersHasBeenSet) {
    mapSize++;
  }
  if (m_optionalParametersHasBeenSet) {
    mapSize++;
  }
  if (m_healthStatusHasBeenSet) {
    mapSize++;
  }
  if (m_ownerAccountHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_namespaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NamespaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_namespaceName.c_str()));
  }

  if (m_serviceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceName.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_queryParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("QueryParameters"));
    encoder.WriteMapStart(m_queryParameters.size());
    for (const auto& item_0 : m_queryParameters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_optionalParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OptionalParameters"));
    encoder.WriteMapStart(m_optionalParameters.size());
    for (const auto& item_0 : m_optionalParameters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_healthStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HealthStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HealthStatusFilterMapper::GetNameForHealthStatusFilter(m_healthStatus).c_str()));
  }

  if (m_ownerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccount.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DiscoverInstancesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
