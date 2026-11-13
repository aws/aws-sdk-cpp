/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/model/UpdatePublicDnsNamespaceRequest.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdatePublicDnsNamespaceRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_updaterRequestIdHasBeenSet) {
    mapSize++;
  }
  if (m_namespaceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Id"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_id.c_str()));
  }

  if (m_updaterRequestIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdaterRequestId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updaterRequestId.c_str()));
  }

  if (m_namespaceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Namespace"));
    m_namespace.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdatePublicDnsNamespaceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
