/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/DisassociateWorkspaceApplicationRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DisassociateWorkspaceApplicationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_workspaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_applicationIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_workspaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceId.c_str()));
  }

  if (m_applicationIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApplicationId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DisassociateWorkspaceApplicationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
