/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeWorkspaceDirectoriesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdsHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceDirectoryNamesHasBeenSet) {
    mapSize++;
  }
  if (m_limitHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_filtersHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryIds"));
    encoder.WriteArrayStart(m_directoryIds.size());
    for (const auto& item_0 : m_directoryIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_workspaceDirectoryNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceDirectoryNames"));
    encoder.WriteArrayStart(m_workspaceDirectoryNames.size());
    for (const auto& item_0 : m_workspaceDirectoryNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_limitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Limit"));
    (m_limit >= 0) ? encoder.WriteUInt(m_limit) : encoder.WriteNegInt(m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_filtersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Filters"));
    encoder.WriteArrayStart(m_filters.size());
    for (const auto& item_0 : m_filters) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeWorkspaceDirectoriesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
