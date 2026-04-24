/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/UpdateFirewallRuleRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFirewallRuleRequest::SerializePayload() const {
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

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInt64("priority", m_priority);
  }

  return payload.View().WriteReadable();
}
