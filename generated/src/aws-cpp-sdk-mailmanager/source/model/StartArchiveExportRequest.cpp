/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/StartArchiveExportRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartArchiveExportRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_archiveIdHasBeenSet) {
    mapSize++;
  }
  if (m_filtersHasBeenSet) {
    mapSize++;
  }
  if (m_fromTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_toTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_exportDestinationConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_includeMetadataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_archiveIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ArchiveId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_archiveId.c_str()));
  }

  if (m_filtersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Filters"));
    m_filters.CborEncode(encoder);
  }

  if (m_fromTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FromTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_fromTimestamp.Seconds());
  }

  if (m_toTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ToTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_toTimestamp.Seconds());
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_exportDestinationConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExportDestinationConfiguration"));
    m_exportDestinationConfiguration.CborEncode(encoder);
  }

  if (m_includeMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludeMetadata"));
    encoder.WriteBool(m_includeMetadata);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartArchiveExportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
