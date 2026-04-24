/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/BatchUpdateFirewallRuleOutputItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

BatchUpdateFirewallRuleOutputItem::BatchUpdateFirewallRuleOutputItem(JsonView jsonValue) { *this = jsonValue; }

BatchUpdateFirewallRuleOutputItem& BatchUpdateFirewallRuleOutputItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("firewallRule")) {
    m_firewallRule = jsonValue.GetObject("firewallRule");
    m_firewallRuleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetInteger("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateFirewallRuleOutputItem::Jsonize() const {
  JsonValue payload;

  if (m_firewallRuleHasBeenSet) {
    payload.WithObject("firewallRule", m_firewallRule.Jsonize());
  }

  if (m_codeHasBeenSet) {
    payload.WithInteger("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
