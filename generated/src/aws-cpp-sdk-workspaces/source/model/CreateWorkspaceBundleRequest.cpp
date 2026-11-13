/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/CreateWorkspaceBundleRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateWorkspaceBundleRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_bundleNameHasBeenSet) {
    mapSize++;
  }
  if (m_bundleDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_imageIdHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_userStorageHasBeenSet) {
    mapSize++;
  }
  if (m_rootStorageHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_bundleNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BundleName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bundleName.c_str()));
  }

  if (m_bundleDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BundleDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bundleDescription.c_str()));
  }

  if (m_imageIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageId.c_str()));
  }

  if (m_computeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeType"));
    m_computeType.CborEncode(encoder);
  }

  if (m_userStorageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserStorage"));
    m_userStorage.CborEncode(encoder);
  }

  if (m_rootStorageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RootStorage"));
    m_rootStorage.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateWorkspaceBundleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
