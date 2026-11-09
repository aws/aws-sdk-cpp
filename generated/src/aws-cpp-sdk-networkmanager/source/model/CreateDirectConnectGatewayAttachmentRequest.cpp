/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/CreateDirectConnectGatewayAttachmentRequest.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDirectConnectGatewayAttachmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_coreNetworkIdHasBeenSet) {
    payload.WithString("CoreNetworkId", m_coreNetworkId);
  }

  if (m_directConnectGatewayArnHasBeenSet) {
    payload.WithString("DirectConnectGatewayArn", m_directConnectGatewayArn);
  }

  if (m_routingPolicyLabelHasBeenSet) {
    payload.WithString("RoutingPolicyLabel", m_routingPolicyLabel);
  }

  if (m_edgeLocationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> edgeLocationsJsonList(m_edgeLocations.size());
    for (unsigned edgeLocationsIndex = 0; edgeLocationsIndex < edgeLocationsJsonList.GetLength(); ++edgeLocationsIndex) {
      edgeLocationsJsonList[edgeLocationsIndex].AsString(m_edgeLocations[edgeLocationsIndex]);
    }
    payload.WithArray("EdgeLocations", std::move(edgeLocationsJsonList));
  }

  if (m_natGatewaySupportHasBeenSet) {
    payload.WithString("NatGatewaySupport", NatGatewaySupportValueMapper::GetNameForNatGatewaySupportValue(m_natGatewaySupport));
  }

  if (m_natSystemRouteSupportHasBeenSet) {
    payload.WithBool("NatSystemRouteSupport", m_natSystemRouteSupport);
  }

  if (m_natGatewayRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> natGatewayRulesJsonList(m_natGatewayRules.size());
    for (unsigned natGatewayRulesIndex = 0; natGatewayRulesIndex < natGatewayRulesJsonList.GetLength(); ++natGatewayRulesIndex) {
      natGatewayRulesJsonList[natGatewayRulesIndex].AsObject(m_natGatewayRules[natGatewayRulesIndex].Jsonize());
    }
    payload.WithArray("NatGatewayRules", std::move(natGatewayRulesJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
