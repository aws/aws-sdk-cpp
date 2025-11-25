/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyRulePriority.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyRulePriority::ProxyRulePriority(JsonView jsonValue) { *this = jsonValue; }

ProxyRulePriority& ProxyRulePriority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyRuleName")) {
    m_proxyRuleName = jsonValue.GetString("ProxyRuleName");
    m_proxyRuleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewPosition")) {
    m_newPosition = jsonValue.GetInteger("NewPosition");
    m_newPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyRulePriority::Jsonize() const {
  JsonValue payload;

  if (m_proxyRuleNameHasBeenSet) {
    payload.WithString("ProxyRuleName", m_proxyRuleName);
  }

  if (m_newPositionHasBeenSet) {
    payload.WithInteger("NewPosition", m_newPosition);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
