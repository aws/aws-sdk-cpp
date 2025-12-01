/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleInputItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

BatchDeleteFirewallRuleInputItem::BatchDeleteFirewallRuleInputItem(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteFirewallRuleInputItem& BatchDeleteFirewallRuleInputItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("firewallRuleId")) {
    m_firewallRuleId = jsonValue.GetString("firewallRuleId");
    m_firewallRuleIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteFirewallRuleInputItem::Jsonize() const {
  JsonValue payload;

  if (m_firewallRuleIdHasBeenSet) {
    payload.WithString("firewallRuleId", m_firewallRuleId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
