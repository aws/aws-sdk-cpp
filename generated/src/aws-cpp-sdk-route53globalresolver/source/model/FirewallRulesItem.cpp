/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/FirewallRulesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

FirewallRulesItem::FirewallRulesItem(JsonView jsonValue) { *this = jsonValue; }

FirewallRulesItem& FirewallRulesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("action")) {
    m_action = FirewallRuleActionMapper::GetFirewallRuleActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockOverrideDnsType")) {
    m_blockOverrideDnsType =
        BlockOverrideDnsQueryTypeMapper::GetBlockOverrideDnsQueryTypeForName(jsonValue.GetString("blockOverrideDnsType"));
    m_blockOverrideDnsTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockOverrideDomain")) {
    m_blockOverrideDomain = jsonValue.GetString("blockOverrideDomain");
    m_blockOverrideDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockOverrideTtl")) {
    m_blockOverrideTtl = jsonValue.GetInteger("blockOverrideTtl");
    m_blockOverrideTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockResponse")) {
    m_blockResponse = FirewallBlockResponseMapper::GetFirewallBlockResponseForName(jsonValue.GetString("blockResponse"));
    m_blockResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceThreshold")) {
    m_confidenceThreshold = ConfidenceThresholdMapper::GetConfidenceThresholdForName(jsonValue.GetString("confidenceThreshold"));
    m_confidenceThresholdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsAdvancedProtection")) {
    m_dnsAdvancedProtection = DnsAdvancedProtectionMapper::GetDnsAdvancedProtectionForName(jsonValue.GetString("dnsAdvancedProtection"));
    m_dnsAdvancedProtectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallDomainListId")) {
    m_firewallDomainListId = jsonValue.GetString("firewallDomainListId");
    m_firewallDomainListIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInt64("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsViewId")) {
    m_dnsViewId = jsonValue.GetString("dnsViewId");
    m_dnsViewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryType")) {
    m_queryType = jsonValue.GetString("queryType");
    m_queryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRulesItem::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", FirewallRuleActionMapper::GetNameForFirewallRuleAction(m_action));
  }

  if (m_blockOverrideDnsTypeHasBeenSet) {
    payload.WithString("blockOverrideDnsType",
                       BlockOverrideDnsQueryTypeMapper::GetNameForBlockOverrideDnsQueryType(m_blockOverrideDnsType));
  }

  if (m_blockOverrideDomainHasBeenSet) {
    payload.WithString("blockOverrideDomain", m_blockOverrideDomain);
  }

  if (m_blockOverrideTtlHasBeenSet) {
    payload.WithInteger("blockOverrideTtl", m_blockOverrideTtl);
  }

  if (m_blockResponseHasBeenSet) {
    payload.WithString("blockResponse", FirewallBlockResponseMapper::GetNameForFirewallBlockResponse(m_blockResponse));
  }

  if (m_confidenceThresholdHasBeenSet) {
    payload.WithString("confidenceThreshold", ConfidenceThresholdMapper::GetNameForConfidenceThreshold(m_confidenceThreshold));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_dnsAdvancedProtectionHasBeenSet) {
    payload.WithString("dnsAdvancedProtection", DnsAdvancedProtectionMapper::GetNameForDnsAdvancedProtection(m_dnsAdvancedProtection));
  }

  if (m_firewallDomainListIdHasBeenSet) {
    payload.WithString("firewallDomainListId", m_firewallDomainListId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInt64("priority", m_priority);
  }

  if (m_dnsViewIdHasBeenSet) {
    payload.WithString("dnsViewId", m_dnsViewId);
  }

  if (m_queryTypeHasBeenSet) {
    payload.WithString("queryType", m_queryType);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CRResourceStatusMapper::GetNameForCRResourceStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
