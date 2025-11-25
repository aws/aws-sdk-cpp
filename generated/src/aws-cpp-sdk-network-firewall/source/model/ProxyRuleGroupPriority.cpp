/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyRuleGroupPriority.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyRuleGroupPriority::ProxyRuleGroupPriority(JsonView jsonValue) { *this = jsonValue; }

ProxyRuleGroupPriority& ProxyRuleGroupPriority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyRuleGroupName")) {
    m_proxyRuleGroupName = jsonValue.GetString("ProxyRuleGroupName");
    m_proxyRuleGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewPosition")) {
    m_newPosition = jsonValue.GetInteger("NewPosition");
    m_newPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyRuleGroupPriority::Jsonize() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_newPositionHasBeenSet) {
    payload.WithInteger("NewPosition", m_newPosition);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
