/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/model/DiscoverInstancesRevisionRequest.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DiscoverInstancesRevisionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_namespaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_serviceNameHasBeenSet) {
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

  if (m_ownerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccount.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DiscoverInstancesRevisionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
