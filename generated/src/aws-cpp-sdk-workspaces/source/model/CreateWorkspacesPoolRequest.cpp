/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/CreateWorkspacesPoolRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateWorkspacesPoolRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_poolNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_bundleIdHasBeenSet) {
    mapSize++;
  }
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_capacityHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_applicationSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_timeoutSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_runningModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_poolNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PoolName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_poolName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_bundleIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BundleId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bundleId.c_str()));
  }

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_capacityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Capacity"));
    m_capacity.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_applicationSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApplicationSettings"));
    m_applicationSettings.CborEncode(encoder);
  }

  if (m_timeoutSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TimeoutSettings"));
    m_timeoutSettings.CborEncode(encoder);
  }

  if (m_runningModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RunningMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PoolsRunningModeMapper::GetNameForPoolsRunningMode(m_runningMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateWorkspacesPoolRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
