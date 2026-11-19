/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/UpdateParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

UpdateParameters::UpdateParameters(JsonView jsonValue) { *this = jsonValue; }

UpdateParameters& UpdateParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("responderGatewayConfig")) {
    m_responderGatewayConfig = jsonValue.GetObject("responderGatewayConfig");
    m_responderGatewayConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkConfig")) {
    m_linkConfig = jsonValue.GetObject("linkConfig");
    m_linkConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkFlow")) {
    m_linkFlow = jsonValue.GetObject("linkFlow");
    m_linkFlowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routingRule")) {
    m_routingRule = jsonValue.GetObject("routingRule");
    m_routingRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateParameters::Jsonize() const {
  JsonValue payload;

  if (m_responderGatewayConfigHasBeenSet) {
    payload.WithObject("responderGatewayConfig", m_responderGatewayConfig.Jsonize());
  }

  if (m_linkConfigHasBeenSet) {
    payload.WithObject("linkConfig", m_linkConfig.Jsonize());
  }

  if (m_linkFlowHasBeenSet) {
    payload.WithObject("linkFlow", m_linkFlow.Jsonize());
  }

  if (m_routingRuleHasBeenSet) {
    payload.WithObject("routingRule", m_routingRule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
