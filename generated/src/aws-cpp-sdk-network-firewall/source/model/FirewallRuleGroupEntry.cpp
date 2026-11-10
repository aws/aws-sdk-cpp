/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/FirewallRuleGroupEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallRuleGroupEntry::FirewallRuleGroupEntry(JsonView jsonValue) { *this = jsonValue; }

FirewallRuleGroupEntry& FirewallRuleGroupEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Priority")) {
    m_priority = jsonValue.GetInteger("Priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InlineRuleGroup")) {
    m_inlineRuleGroup = jsonValue.GetObject("InlineRuleGroup");
    m_inlineRuleGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRuleGroupEntry::Jsonize() const {
  JsonValue payload;

  if (m_priorityHasBeenSet) {
    payload.WithInteger("Priority", m_priority);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_inlineRuleGroupHasBeenSet) {
    payload.WithObject("InlineRuleGroup", m_inlineRuleGroup.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
