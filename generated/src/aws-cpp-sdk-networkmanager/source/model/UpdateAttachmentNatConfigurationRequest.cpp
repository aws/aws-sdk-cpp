/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/UpdateAttachmentNatConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAttachmentNatConfigurationRequest::SerializePayload() const {
  JsonValue payload;

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

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
