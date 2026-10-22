/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/Route53ResolvedIPValidation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

Route53ResolvedIPValidation::Route53ResolvedIPValidation(JsonView jsonValue) { *this = jsonValue; }

Route53ResolvedIPValidation& Route53ResolvedIPValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = Route53ResolvedIPValidationActionMapper::GetRoute53ResolvedIPValidationActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DNSFirewallRuleGroupId")) {
    m_dNSFirewallRuleGroupId = jsonValue.GetString("DNSFirewallRuleGroupId");
    m_dNSFirewallRuleGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DNSExpiryExceptionPolicy")) {
    m_dNSExpiryExceptionPolicy =
        DNSExpiryExceptionPolicyMapper::GetDNSExpiryExceptionPolicyForName(jsonValue.GetString("DNSExpiryExceptionPolicy"));
    m_dNSExpiryExceptionPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BypassDestinationValidationIPRanges")) {
    Aws::Utils::Array<JsonView> bypassDestinationValidationIPRangesJsonList = jsonValue.GetArray("BypassDestinationValidationIPRanges");
    for (unsigned bypassDestinationValidationIPRangesIndex = 0;
         bypassDestinationValidationIPRangesIndex < bypassDestinationValidationIPRangesJsonList.GetLength();
         ++bypassDestinationValidationIPRangesIndex) {
      m_bypassDestinationValidationIPRanges.push_back(
          bypassDestinationValidationIPRangesJsonList[bypassDestinationValidationIPRangesIndex].AsObject());
    }
    m_bypassDestinationValidationIPRangesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceIPRanges")) {
    Aws::Utils::Array<JsonView> sourceIPRangesJsonList = jsonValue.GetArray("SourceIPRanges");
    for (unsigned sourceIPRangesIndex = 0; sourceIPRangesIndex < sourceIPRangesJsonList.GetLength(); ++sourceIPRangesIndex) {
      m_sourceIPRanges.push_back(sourceIPRangesJsonList[sourceIPRangesIndex].AsObject());
    }
    m_sourceIPRangesHasBeenSet = true;
  }
  return *this;
}

JsonValue Route53ResolvedIPValidation::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", Route53ResolvedIPValidationActionMapper::GetNameForRoute53ResolvedIPValidationAction(m_action));
  }

  if (m_dNSFirewallRuleGroupIdHasBeenSet) {
    payload.WithString("DNSFirewallRuleGroupId", m_dNSFirewallRuleGroupId);
  }

  if (m_dNSExpiryExceptionPolicyHasBeenSet) {
    payload.WithString("DNSExpiryExceptionPolicy",
                       DNSExpiryExceptionPolicyMapper::GetNameForDNSExpiryExceptionPolicy(m_dNSExpiryExceptionPolicy));
  }

  if (m_bypassDestinationValidationIPRangesHasBeenSet) {
    Aws::Utils::Array<JsonValue> bypassDestinationValidationIPRangesJsonList(m_bypassDestinationValidationIPRanges.size());
    for (unsigned bypassDestinationValidationIPRangesIndex = 0;
         bypassDestinationValidationIPRangesIndex < bypassDestinationValidationIPRangesJsonList.GetLength();
         ++bypassDestinationValidationIPRangesIndex) {
      bypassDestinationValidationIPRangesJsonList[bypassDestinationValidationIPRangesIndex].AsObject(
          m_bypassDestinationValidationIPRanges[bypassDestinationValidationIPRangesIndex].Jsonize());
    }
    payload.WithArray("BypassDestinationValidationIPRanges", std::move(bypassDestinationValidationIPRangesJsonList));
  }

  if (m_sourceIPRangesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceIPRangesJsonList(m_sourceIPRanges.size());
    for (unsigned sourceIPRangesIndex = 0; sourceIPRangesIndex < sourceIPRangesJsonList.GetLength(); ++sourceIPRangesIndex) {
      sourceIPRangesJsonList[sourceIPRangesIndex].AsObject(m_sourceIPRanges[sourceIPRangesIndex].Jsonize());
    }
    payload.WithArray("SourceIPRanges", std::move(sourceIPRangesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
