/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ImportWorkspaceImageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ec2ImageIdHasBeenSet) {
    mapSize++;
  }
  if (m_ingestionProcessHasBeenSet) {
    mapSize++;
  }
  if (m_imageNameHasBeenSet) {
    mapSize++;
  }
  if (m_imageDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_applicationsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ec2ImageIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ec2ImageId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ec2ImageId.c_str()));
  }

  if (m_ingestionProcessHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngestionProcess"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        WorkspaceImageIngestionProcessMapper::GetNameForWorkspaceImageIngestionProcess(m_ingestionProcess).c_str()));
  }

  if (m_imageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageName.c_str()));
  }

  if (m_imageDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageDescription.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_applicationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Applications"));
    encoder.WriteArrayStart(m_applications.size());
    for (const auto& item_0 : m_applications) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ApplicationMapper::GetNameForApplication(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ImportWorkspaceImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
