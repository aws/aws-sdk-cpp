/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/RuleFirewallType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace RuleFirewallTypeMapper {

static const int WAF_HASH = HashingUtils::HashString("WAF");
static const int IGW_FIREWALL_HASH = HashingUtils::HashString("IGW_FIREWALL");

RuleFirewallType GetRuleFirewallTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WAF_HASH) {
    return RuleFirewallType::WAF;
  } else if (hashCode == IGW_FIREWALL_HASH) {
    return RuleFirewallType::IGW_FIREWALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleFirewallType>(hashCode);
  }

  return RuleFirewallType::NOT_SET;
}

Aws::String GetNameForRuleFirewallType(RuleFirewallType enumValue) {
  switch (enumValue) {
    case RuleFirewallType::NOT_SET:
      return {};
    case RuleFirewallType::WAF:
      return "WAF";
    case RuleFirewallType::IGW_FIREWALL:
      return "IGW_FIREWALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleFirewallTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
