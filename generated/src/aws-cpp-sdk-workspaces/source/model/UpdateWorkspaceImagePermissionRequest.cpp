/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/UpdateWorkspaceImagePermissionRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateWorkspaceImagePermissionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_imageIdHasBeenSet) {
    mapSize++;
  }
  if (m_allowCopyImageHasBeenSet) {
    mapSize++;
  }
  if (m_sharedAccountIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_imageIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageId.c_str()));
  }

  if (m_allowCopyImageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AllowCopyImage"));
    encoder.WriteBool(m_allowCopyImage);
  }

  if (m_sharedAccountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SharedAccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sharedAccountId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateWorkspaceImagePermissionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
