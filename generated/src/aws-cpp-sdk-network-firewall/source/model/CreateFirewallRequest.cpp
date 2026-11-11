/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateFirewallRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateFirewallRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_firewallNameHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyArnHasBeenSet) {
    mapSize++;
  }
  if (m_vpcIdHasBeenSet) {
    mapSize++;
  }
  if (m_subnetMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_deleteProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_subnetChangeProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyChangeProtectionHasBeenSet) {
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
  if (m_enabledAnalysisTypesHasBeenSet) {
    mapSize++;
  }
  if (m_transitGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityZoneMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityZoneChangeProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_natGatewayMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_proxySettingsHasBeenSet) {
    mapSize++;
  }
  if (m_noSourcePreservationHasBeenSet) {
    mapSize++;
  }
  if (m_vpcEndpointHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firewallNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallName.c_str()));
  }

  if (m_firewallPolicyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyArn.c_str()));
  }

  if (m_vpcIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vpcId.c_str()));
  }

  if (m_subnetMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetMappings"));
    encoder.WriteArrayStart(m_subnetMappings.size());
    for (const auto& item_0 : m_subnetMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_deleteProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeleteProtection"));
    encoder.WriteBool(m_deleteProtection);
  }

  if (m_subnetChangeProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetChangeProtection"));
    encoder.WriteBool(m_subnetChangeProtection);
  }

  if (m_firewallPolicyChangeProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyChangeProtection"));
    encoder.WriteBool(m_firewallPolicyChangeProtection);
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

  if (m_enabledAnalysisTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnabledAnalysisTypes"));
    encoder.WriteArrayStart(m_enabledAnalysisTypes.size());
    for (const auto& item_0 : m_enabledAnalysisTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(EnabledAnalysisTypeMapper::GetNameForEnabledAnalysisType(item_0).c_str()));
    }
  }

  if (m_transitGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransitGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_transitGatewayId.c_str()));
  }

  if (m_availabilityZoneMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZoneMappings"));
    encoder.WriteArrayStart(m_availabilityZoneMappings.size());
    for (const auto& item_0 : m_availabilityZoneMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_availabilityZoneChangeProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZoneChangeProtection"));
    encoder.WriteBool(m_availabilityZoneChangeProtection);
  }

  if (m_natGatewayMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NatGatewayMappings"));
    encoder.WriteArrayStart(m_natGatewayMappings.size());
    for (const auto& item_0 : m_natGatewayMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_proxySettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxySettings"));
    m_proxySettings.CborEncode(encoder);
  }

  if (m_noSourcePreservationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NoSourcePreservation"));
    encoder.WriteBool(m_noSourcePreservation);
  }

  if (m_vpcEndpointHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcEndpoint"));
    m_vpcEndpoint.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateFirewallRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
