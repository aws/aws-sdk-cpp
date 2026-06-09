/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/DeleteFirewallRuleEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

DeleteFirewallRuleEntry::DeleteFirewallRuleEntry(JsonView jsonValue) { *this = jsonValue; }

DeleteFirewallRuleEntry& DeleteFirewallRuleEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FirewallRuleGroupId")) {
    m_firewallRuleGroupId = jsonValue.GetString("FirewallRuleGroupId");
    m_firewallRuleGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallDomainListId")) {
    m_firewallDomainListId = jsonValue.GetString("FirewallDomainListId");
    m_firewallDomainListIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallThreatProtectionId")) {
    m_firewallThreatProtectionId = jsonValue.GetString("FirewallThreatProtectionId");
    m_firewallThreatProtectionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Qtype")) {
    m_qtype = jsonValue.GetString("Qtype");
    m_qtypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteFirewallRuleEntry::Jsonize() const {
  JsonValue payload;

  if (m_firewallRuleGroupIdHasBeenSet) {
    payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);
  }

  if (m_firewallDomainListIdHasBeenSet) {
    payload.WithString("FirewallDomainListId", m_firewallDomainListId);
  }

  if (m_firewallThreatProtectionIdHasBeenSet) {
    payload.WithString("FirewallThreatProtectionId", m_firewallThreatProtectionId);
  }

  if (m_qtypeHasBeenSet) {
    payload.WithString("Qtype", m_qtype);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
