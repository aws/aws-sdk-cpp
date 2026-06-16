/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/FirewallRuleType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

FirewallRuleType::FirewallRuleType(JsonView jsonValue) { *this = jsonValue; }

FirewallRuleType& FirewallRuleType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PartnerThreatProtection")) {
    m_partnerThreatProtection = jsonValue.GetObject("PartnerThreatProtection");
    m_partnerThreatProtectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallAdvancedContentCategory")) {
    m_firewallAdvancedContentCategory = jsonValue.GetObject("FirewallAdvancedContentCategory");
    m_firewallAdvancedContentCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallAdvancedThreatCategory")) {
    m_firewallAdvancedThreatCategory = jsonValue.GetObject("FirewallAdvancedThreatCategory");
    m_firewallAdvancedThreatCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DnsThreatProtection")) {
    m_dnsThreatProtection = jsonValue.GetObject("DnsThreatProtection");
    m_dnsThreatProtectionHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRuleType::Jsonize() const {
  JsonValue payload;

  if (m_partnerThreatProtectionHasBeenSet) {
    payload.WithObject("PartnerThreatProtection", m_partnerThreatProtection.Jsonize());
  }

  if (m_firewallAdvancedContentCategoryHasBeenSet) {
    payload.WithObject("FirewallAdvancedContentCategory", m_firewallAdvancedContentCategory.Jsonize());
  }

  if (m_firewallAdvancedThreatCategoryHasBeenSet) {
    payload.WithObject("FirewallAdvancedThreatCategory", m_firewallAdvancedThreatCategory.Jsonize());
  }

  if (m_dnsThreatProtectionHasBeenSet) {
    payload.WithObject("DnsThreatProtection", m_dnsThreatProtection.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
