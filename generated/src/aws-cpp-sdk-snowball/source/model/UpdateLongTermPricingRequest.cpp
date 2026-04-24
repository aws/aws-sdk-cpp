/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/UpdateLongTermPricingRequest.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateLongTermPricingRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_longTermPricingIdHasBeenSet) {
    mapSize++;
  }
  if (m_replacementJobHasBeenSet) {
    mapSize++;
  }
  if (m_isLongTermPricingAutoRenewHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_longTermPricingIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LongTermPricingId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_longTermPricingId.c_str()));
  }

  if (m_replacementJobHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReplacementJob"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_replacementJob.c_str()));
  }

  if (m_isLongTermPricingAutoRenewHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IsLongTermPricingAutoRenew"));
    encoder.WriteBool(m_isLongTermPricingAutoRenew);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateLongTermPricingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
