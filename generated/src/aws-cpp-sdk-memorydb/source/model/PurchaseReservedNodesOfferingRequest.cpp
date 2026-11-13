/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/PurchaseReservedNodesOfferingRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PurchaseReservedNodesOfferingRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_reservedNodesOfferingIdHasBeenSet) {
    mapSize++;
  }
  if (m_reservationIdHasBeenSet) {
    mapSize++;
  }
  if (m_nodeCountHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_reservedNodesOfferingIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReservedNodesOfferingId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_reservedNodesOfferingId.c_str()));
  }

  if (m_reservationIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReservationId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_reservationId.c_str()));
  }

  if (m_nodeCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NodeCount"));
    (m_nodeCount >= 0) ? encoder.WriteUInt(m_nodeCount) : encoder.WriteNegInt(m_nodeCount);
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

Aws::Http::HeaderValueCollection PurchaseReservedNodesOfferingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
