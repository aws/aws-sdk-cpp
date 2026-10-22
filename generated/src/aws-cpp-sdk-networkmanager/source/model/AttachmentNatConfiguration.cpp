/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/AttachmentNatConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

AttachmentNatConfiguration::AttachmentNatConfiguration(JsonView jsonValue) { *this = jsonValue; }

AttachmentNatConfiguration& AttachmentNatConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttachmentId")) {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatGatewaySupport")) {
    m_natGatewaySupport = NatGatewaySupportStateMapper::GetNatGatewaySupportStateForName(jsonValue.GetString("NatGatewaySupport"));
    m_natGatewaySupportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatSystemRouteSupport")) {
    m_natSystemRouteSupport = jsonValue.GetBool("NatSystemRouteSupport");
    m_natSystemRouteSupportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatGatewayRules")) {
    Aws::Utils::Array<JsonView> natGatewayRulesJsonList = jsonValue.GetArray("NatGatewayRules");
    for (unsigned natGatewayRulesIndex = 0; natGatewayRulesIndex < natGatewayRulesJsonList.GetLength(); ++natGatewayRulesIndex) {
      m_natGatewayRules.push_back(natGatewayRulesJsonList[natGatewayRulesIndex].AsObject());
    }
    m_natGatewayRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachmentNatConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_attachmentIdHasBeenSet) {
    payload.WithString("AttachmentId", m_attachmentId);
  }

  if (m_natGatewaySupportHasBeenSet) {
    payload.WithString("NatGatewaySupport", NatGatewaySupportStateMapper::GetNameForNatGatewaySupportState(m_natGatewaySupport));
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

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
