/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/model/GetInstanceRequest.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetInstanceRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceIdHasBeenSet) {
    mapSize++;
  }
  if (m_instanceIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serviceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceId.c_str()));
  }

  if (m_instanceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetInstanceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
