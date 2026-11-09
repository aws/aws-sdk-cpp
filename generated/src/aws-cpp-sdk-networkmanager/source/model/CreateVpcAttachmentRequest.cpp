/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/CreateVpcAttachmentRequest.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateVpcAttachmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_coreNetworkIdHasBeenSet) {
    payload.WithString("CoreNetworkId", m_coreNetworkId);
  }

  if (m_vpcArnHasBeenSet) {
    payload.WithString("VpcArn", m_vpcArn);
  }

  if (m_subnetArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetArnsJsonList(m_subnetArns.size());
    for (unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex) {
      subnetArnsJsonList[subnetArnsIndex].AsString(m_subnetArns[subnetArnsIndex]);
    }
    payload.WithArray("SubnetArns", std::move(subnetArnsJsonList));
  }

  if (m_optionsHasBeenSet) {
    payload.WithObject("Options", m_options.Jsonize());
  }

  if (m_routingPolicyLabelHasBeenSet) {
    payload.WithString("RoutingPolicyLabel", m_routingPolicyLabel);
  }

  if (m_natGatewaySupportHasBeenSet) {
    payload.WithString("NatGatewaySupport", NatGatewaySupportValueMapper::GetNameForNatGatewaySupportValue(m_natGatewaySupport));
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
