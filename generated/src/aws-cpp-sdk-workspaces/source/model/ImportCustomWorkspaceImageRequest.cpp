/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/ImportCustomWorkspaceImageRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ImportCustomWorkspaceImageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_imageNameHasBeenSet) {
    mapSize++;
  }
  if (m_imageDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_protocolHasBeenSet) {
    mapSize++;
  }
  if (m_imageSourceHasBeenSet) {
    mapSize++;
  }
  if (m_infrastructureConfigurationArnHasBeenSet) {
    mapSize++;
  }
  if (m_platformHasBeenSet) {
    mapSize++;
  }
  if (m_osVersionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_imageValidationModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_imageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageName.c_str()));
  }

  if (m_imageDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageDescription.c_str()));
  }

  if (m_computeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ImageComputeTypeMapper::GetNameForImageComputeType(m_computeType).c_str()));
  }

  if (m_protocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CustomImageProtocolMapper::GetNameForCustomImageProtocol(m_protocol).c_str()));
  }

  if (m_imageSourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageSource"));
    m_imageSource.CborEncode(encoder);
  }

  if (m_infrastructureConfigurationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InfrastructureConfigurationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_infrastructureConfigurationArn.c_str()));
  }

  if (m_platformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Platform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlatformMapper::GetNameForPlatform(m_platform).c_str()));
  }

  if (m_osVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OsVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(OSVersionMapper::GetNameForOSVersion(m_osVersion).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_imageValidationModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageValidationMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ImageValidationModeMapper::GetNameForImageValidationMode(m_imageValidationMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ImportCustomWorkspaceImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
