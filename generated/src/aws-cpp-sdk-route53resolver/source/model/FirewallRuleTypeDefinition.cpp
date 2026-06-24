/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/FirewallRuleTypeDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

FirewallRuleTypeDefinition::FirewallRuleTypeDefinition(JsonView jsonValue) { *this = jsonValue; }

FirewallRuleTypeDefinition& FirewallRuleTypeDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RuleType")) {
    m_ruleType = jsonValue.GetString("RuleType");
    m_ruleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscriptionInfo")) {
    m_subscriptionInfo = jsonValue.GetObject("SubscriptionInfo");
    m_subscriptionInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRuleTypeDefinition::Jsonize() const {
  JsonValue payload;

  if (m_ruleTypeHasBeenSet) {
    payload.WithString("RuleType", m_ruleType);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_subscriptionInfoHasBeenSet) {
    payload.WithObject("SubscriptionInfo", m_subscriptionInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
