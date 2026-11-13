/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/AssociateHealthCheckRequest.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AssociateHealthCheckRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_protectionIdHasBeenSet) {
    mapSize++;
  }
  if (m_healthCheckArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_protectionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_protectionId.c_str()));
  }

  if (m_healthCheckArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HealthCheckArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_healthCheckArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AssociateHealthCheckRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
