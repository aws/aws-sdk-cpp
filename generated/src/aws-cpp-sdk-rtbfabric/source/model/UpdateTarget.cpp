/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/UpdateTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

UpdateTarget::UpdateTarget(JsonView jsonValue) { *this = jsonValue; }

UpdateTarget& UpdateTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gateway")) {
    m_gateway = jsonValue.GetObject("gateway");
    m_gatewayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("link")) {
    m_link = jsonValue.GetObject("link");
    m_linkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routingRule")) {
    m_routingRule = jsonValue.GetObject("routingRule");
    m_routingRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateTarget::Jsonize() const {
  JsonValue payload;

  if (m_gatewayHasBeenSet) {
    payload.WithObject("gateway", m_gateway.Jsonize());
  }

  if (m_linkHasBeenSet) {
    payload.WithObject("link", m_link.Jsonize());
  }

  if (m_routingRuleHasBeenSet) {
    payload.WithObject("routingRule", m_routingRule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
