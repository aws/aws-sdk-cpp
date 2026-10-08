/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/pi/model/GetDimensionKeyDetailsRequest.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetDimensionKeyDetailsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_identifierHasBeenSet) {
    mapSize++;
  }
  if (m_groupHasBeenSet) {
    mapSize++;
  }
  if (m_groupIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_requestedDimensionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serviceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ServiceTypeMapper::GetNameForServiceType(m_serviceType).c_str()));
  }

  if (m_identifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Identifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_identifier.c_str()));
  }

  if (m_groupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Group"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_group.c_str()));
  }

  if (m_groupIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_groupIdentifier.c_str()));
  }

  if (m_requestedDimensionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RequestedDimensions"));
    encoder.WriteArrayStart(m_requestedDimensions.size());
    for (const auto& item_0 : m_requestedDimensions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetDimensionKeyDetailsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
