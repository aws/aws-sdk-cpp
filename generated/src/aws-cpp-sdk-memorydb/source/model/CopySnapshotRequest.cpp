/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/CopySnapshotRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CopySnapshotRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sourceSnapshotNameHasBeenSet) {
    mapSize++;
  }
  if (m_targetSnapshotNameHasBeenSet) {
    mapSize++;
  }
  if (m_targetBucketHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourceSnapshotNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceSnapshotName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceSnapshotName.c_str()));
  }

  if (m_targetSnapshotNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetSnapshotName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetSnapshotName.c_str()));
  }

  if (m_targetBucketHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetBucket"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetBucket.c_str()));
  }

  if (m_kmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyId.c_str()));
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

Aws::Http::HeaderValueCollection CopySnapshotRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
