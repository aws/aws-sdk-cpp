/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/BatchCreateFirewallRuleInputItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

BatchCreateFirewallRuleInputItem::BatchCreateFirewallRuleInputItem(JsonView jsonValue) { *this = jsonValue; }

BatchCreateFirewallRuleInputItem& BatchCreateFirewallRuleInputItem::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceThreshold")) {
    m_confidenceThreshold = ConfidenceThresholdMapper::GetConfidenceThresholdForName(jsonValue.GetString("confidenceThreshold"));
    m_confidenceThresholdHasBeenSet = true;
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
  if (jsonValue.ValueExists("qType")) {
    m_qType = jsonValue.GetString("qType");
    m_qTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateFirewallRuleInputItem::Jsonize() const {
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

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_confidenceThresholdHasBeenSet) {
    payload.WithString("confidenceThreshold", ConfidenceThresholdMapper::GetNameForConfidenceThreshold(m_confidenceThreshold));
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

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInt64("priority", m_priority);
  }

  if (m_dnsViewIdHasBeenSet) {
    payload.WithString("dnsViewId", m_dnsViewId);
  }

  if (m_qTypeHasBeenSet) {
    payload.WithString("qType", m_qType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
