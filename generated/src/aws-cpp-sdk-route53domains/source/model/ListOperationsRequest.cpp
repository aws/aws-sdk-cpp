/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/ListOperationsRequest.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListOperationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_submittedSinceHasBeenSet) {
    mapSize++;
  }
  if (m_markerHasBeenSet) {
    mapSize++;
  }
  if (m_maxItemsHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_sortByHasBeenSet) {
    mapSize++;
  }
  if (m_sortOrderHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_submittedSinceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubmittedSince"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_submittedSince.Seconds());
  }

  if (m_markerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Marker"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_marker.c_str()));
  }

  if (m_maxItemsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxItems"));
    (m_maxItems >= 0) ? encoder.WriteUInt(m_maxItems) : encoder.WriteNegInt(m_maxItems);
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteArrayStart(m_status.size());
    for (const auto& item_0 : m_status) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(OperationStatusMapper::GetNameForOperationStatus(item_0).c_str()));
    }
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteArrayStart(m_type.size());
    for (const auto& item_0 : m_type) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(OperationTypeMapper::GetNameForOperationType(item_0).c_str()));
    }
  }

  if (m_sortByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ListOperationsSortAttributeNameMapper::GetNameForListOperationsSortAttributeName(m_sortBy).c_str()));
  }

  if (m_sortOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SortOrderMapper::GetNameForSortOrder(m_sortOrder).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListOperationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
