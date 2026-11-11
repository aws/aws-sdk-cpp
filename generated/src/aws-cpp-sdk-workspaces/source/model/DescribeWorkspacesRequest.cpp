/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/DescribeWorkspacesRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeWorkspacesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_workspaceIdsHasBeenSet) {
    mapSize++;
  }
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_userNameHasBeenSet) {
    mapSize++;
  }
  if (m_bundleIdHasBeenSet) {
    mapSize++;
  }
  if (m_limitHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceNameHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_workspaceIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceIds"));
    encoder.WriteArrayStart(m_workspaceIds.size());
    for (const auto& item_0 : m_workspaceIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_userNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_userName.c_str()));
  }

  if (m_bundleIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BundleId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bundleId.c_str()));
  }

  if (m_limitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Limit"));
    (m_limit >= 0) ? encoder.WriteUInt(m_limit) : encoder.WriteNegInt(m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_workspaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceName.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeWorkspacesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
