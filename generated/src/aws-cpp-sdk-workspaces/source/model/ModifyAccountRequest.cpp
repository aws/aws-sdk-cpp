/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/ModifyAccountRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ModifyAccountRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_dedicatedTenancySupportHasBeenSet) {
    mapSize++;
  }
  if (m_dedicatedTenancyManagementCidrRangeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_dedicatedTenancySupportHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DedicatedTenancySupport"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DedicatedTenancySupportEnumMapper::GetNameForDedicatedTenancySupportEnum(m_dedicatedTenancySupport).c_str()));
  }

  if (m_dedicatedTenancyManagementCidrRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DedicatedTenancyManagementCidrRange"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dedicatedTenancyManagementCidrRange.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ModifyAccountRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
