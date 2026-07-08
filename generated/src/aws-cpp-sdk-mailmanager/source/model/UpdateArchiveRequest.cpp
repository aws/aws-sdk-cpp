/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/UpdateArchiveRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateArchiveRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_archiveIdHasBeenSet) {
    mapSize++;
  }
  if (m_archiveNameHasBeenSet) {
    mapSize++;
  }
  if (m_retentionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_archiveIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ArchiveId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_archiveId.c_str()));
  }

  if (m_archiveNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ArchiveName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_archiveName.c_str()));
  }

  if (m_retentionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Retention"));
    m_retention.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateArchiveRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
