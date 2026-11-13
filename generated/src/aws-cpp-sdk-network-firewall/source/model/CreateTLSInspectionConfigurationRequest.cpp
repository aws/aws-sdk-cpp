/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateTLSInspectionConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateTLSInspectionConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_tLSInspectionConfigurationNameHasBeenSet) {
    mapSize++;
  }
  if (m_tLSInspectionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_tLSInspectionConfigurationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfigurationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_tLSInspectionConfigurationName.c_str()));
  }

  if (m_tLSInspectionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfiguration"));
    m_tLSInspectionConfiguration.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateTLSInspectionConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
