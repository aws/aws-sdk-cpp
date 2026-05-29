/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/BatchDeleteFirewallRuleError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

BatchDeleteFirewallRuleError::BatchDeleteFirewallRuleError(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteFirewallRuleError& BatchDeleteFirewallRuleError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FirewallRule")) {
    m_firewallRule = jsonValue.GetObject("FirewallRule");
    m_firewallRuleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteFirewallRuleError::Jsonize() const {
  JsonValue payload;

  if (m_firewallRuleHasBeenSet) {
    payload.WithObject("FirewallRule", m_firewallRule.Jsonize());
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
