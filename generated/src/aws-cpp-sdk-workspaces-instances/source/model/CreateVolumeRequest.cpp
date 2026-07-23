/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/CreateVolumeRequest.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateVolumeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_availabilityZoneHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_encryptedHasBeenSet) {
    mapSize++;
  }
  if (m_iopsHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_sizeInGBHasBeenSet) {
    mapSize++;
  }
  if (m_snapshotIdHasBeenSet) {
    mapSize++;
  }
  if (m_tagSpecificationsHasBeenSet) {
    mapSize++;
  }
  if (m_throughputHasBeenSet) {
    mapSize++;
  }
  if (m_volumeTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_availabilityZoneHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZone"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_availabilityZone.c_str()));
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_encryptedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Encrypted"));
    encoder.WriteBool(m_encrypted);
  }

  if (m_iopsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Iops"));
    (m_iops >= 0) ? encoder.WriteUInt(m_iops) : encoder.WriteNegInt(m_iops);
  }

  if (m_kmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyId.c_str()));
  }

  if (m_sizeInGBHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SizeInGB"));
    (m_sizeInGB >= 0) ? encoder.WriteUInt(m_sizeInGB) : encoder.WriteNegInt(m_sizeInGB);
  }

  if (m_snapshotIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnapshotId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snapshotId.c_str()));
  }

  if (m_tagSpecificationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagSpecifications"));
    encoder.WriteArrayStart(m_tagSpecifications.size());
    for (const auto& item_0 : m_tagSpecifications) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_throughputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Throughput"));
    (m_throughput >= 0) ? encoder.WriteUInt(m_throughput) : encoder.WriteNegInt(m_throughput);
  }

  if (m_volumeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(VolumeTypeEnumMapper::GetNameForVolumeTypeEnum(m_volumeType).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateVolumeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
