/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/AssociateVolumeRequest.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AssociateVolumeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_workspaceInstanceIdHasBeenSet) {
    mapSize++;
  }
  if (m_volumeIdHasBeenSet) {
    mapSize++;
  }
  if (m_deviceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_workspaceInstanceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceInstanceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceInstanceId.c_str()));
  }

  if (m_volumeIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_volumeId.c_str()));
  }

  if (m_deviceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Device"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_device.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AssociateVolumeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
