/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyConfigRuleGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyConfigRuleGroup::ProxyConfigRuleGroup(JsonView jsonValue) { *this = jsonValue; }

ProxyConfigRuleGroup& ProxyConfigRuleGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyRuleGroupName")) {
    m_proxyRuleGroupName = jsonValue.GetString("ProxyRuleGroupName");
    m_proxyRuleGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyRuleGroupArn")) {
    m_proxyRuleGroupArn = jsonValue.GetString("ProxyRuleGroupArn");
    m_proxyRuleGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Priority")) {
    m_priority = jsonValue.GetInteger("Priority");
    m_priorityHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyConfigRuleGroup::Jsonize() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("Priority", m_priority);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
