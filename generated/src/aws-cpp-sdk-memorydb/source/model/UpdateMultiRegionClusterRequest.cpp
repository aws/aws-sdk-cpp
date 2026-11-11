/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/UpdateMultiRegionClusterRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateMultiRegionClusterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_multiRegionClusterNameHasBeenSet) {
    mapSize++;
  }
  if (m_nodeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_engineVersionHasBeenSet) {
    mapSize++;
  }
  if (m_shardConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_multiRegionParameterGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_updateStrategyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_multiRegionClusterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MultiRegionClusterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_multiRegionClusterName.c_str()));
  }

  if (m_nodeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NodeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nodeType.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_engineVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EngineVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engineVersion.c_str()));
  }

  if (m_shardConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShardConfiguration"));
    m_shardConfiguration.CborEncode(encoder);
  }

  if (m_multiRegionParameterGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MultiRegionParameterGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_multiRegionParameterGroupName.c_str()));
  }

  if (m_updateStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UpdateStrategyMapper::GetNameForUpdateStrategy(m_updateStrategy).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateMultiRegionClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
