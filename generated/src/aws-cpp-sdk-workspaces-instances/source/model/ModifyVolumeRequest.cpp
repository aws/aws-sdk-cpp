/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/ModifyVolumeRequest.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ModifyVolumeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_volumeIdHasBeenSet) {
    mapSize++;
  }
  if (m_sizeInGBHasBeenSet) {
    mapSize++;
  }
  if (m_volumeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_iopsHasBeenSet) {
    mapSize++;
  }
  if (m_throughputHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_volumeIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_volumeId.c_str()));
  }

  if (m_sizeInGBHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SizeInGB"));
    (m_sizeInGB >= 0) ? encoder.WriteUInt(m_sizeInGB) : encoder.WriteNegInt(m_sizeInGB);
  }

  if (m_volumeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(VolumeTypeEnumMapper::GetNameForVolumeTypeEnum(m_volumeType).c_str()));
  }

  if (m_iopsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Iops"));
    (m_iops >= 0) ? encoder.WriteUInt(m_iops) : encoder.WriteNegInt(m_iops);
  }

  if (m_throughputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Throughput"));
    (m_throughput >= 0) ? encoder.WriteUInt(m_throughput) : encoder.WriteNegInt(m_throughput);
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ModifyVolumeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
