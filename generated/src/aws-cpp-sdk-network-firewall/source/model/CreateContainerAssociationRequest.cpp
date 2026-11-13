/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateContainerAssociationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateContainerAssociationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_containerAssociationNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_containerMonitoringConfigurationsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_containerAssociationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerAssociationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_containerAssociationName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ContainerMonitoringTypeMapper::GetNameForContainerMonitoringType(m_type).c_str()));
  }

  if (m_containerMonitoringConfigurationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerMonitoringConfigurations"));
    encoder.WriteArrayStart(m_containerMonitoringConfigurations.size());
    for (const auto& item_0 : m_containerMonitoringConfigurations) {
      item_0.CborEncode(encoder);
    }
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

Aws::Http::HeaderValueCollection CreateContainerAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
