/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/RebootWorkspacesRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RebootWorkspacesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_rebootWorkspaceRequestsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_rebootWorkspaceRequestsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RebootWorkspaceRequests"));
    encoder.WriteArrayStart(m_rebootWorkspaceRequests.size());
    for (const auto& item_0 : m_rebootWorkspaceRequests) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RebootWorkspacesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
