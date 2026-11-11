/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/CreateMultiRegionClusterRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateMultiRegionClusterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_multiRegionClusterNameSuffixHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_engineHasBeenSet) {
    mapSize++;
  }
  if (m_engineVersionHasBeenSet) {
    mapSize++;
  }
  if (m_nodeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_multiRegionParameterGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_numShardsHasBeenSet) {
    mapSize++;
  }
  if (m_tLSEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_multiRegionClusterNameSuffixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MultiRegionClusterNameSuffix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_multiRegionClusterNameSuffix.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_engineHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Engine"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engine.c_str()));
  }

  if (m_engineVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EngineVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engineVersion.c_str()));
  }

  if (m_nodeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NodeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nodeType.c_str()));
  }

  if (m_multiRegionParameterGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MultiRegionParameterGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_multiRegionParameterGroupName.c_str()));
  }

  if (m_numShardsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumShards"));
    (m_numShards >= 0) ? encoder.WriteUInt(m_numShards) : encoder.WriteNegInt(m_numShards);
  }

  if (m_tLSEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSEnabled"));
    encoder.WriteBool(m_tLSEnabled);
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

Aws::Http::HeaderValueCollection CreateMultiRegionClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
