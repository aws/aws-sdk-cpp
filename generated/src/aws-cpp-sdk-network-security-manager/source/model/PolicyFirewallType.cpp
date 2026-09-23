/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace PolicyFirewallTypeMapper {

static const int WAF_HASH = HashingUtils::HashString("WAF");
static const int SHIELD_ADVANCED_HASH = HashingUtils::HashString("SHIELD_ADVANCED");

PolicyFirewallType GetPolicyFirewallTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WAF_HASH) {
    return PolicyFirewallType::WAF;
  } else if (hashCode == SHIELD_ADVANCED_HASH) {
    return PolicyFirewallType::SHIELD_ADVANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyFirewallType>(hashCode);
  }

  return PolicyFirewallType::NOT_SET;
}

Aws::String GetNameForPolicyFirewallType(PolicyFirewallType enumValue) {
  switch (enumValue) {
    case PolicyFirewallType::NOT_SET:
      return {};
    case PolicyFirewallType::WAF:
      return "WAF";
    case PolicyFirewallType::SHIELD_ADVANCED:
      return "SHIELD_ADVANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyFirewallTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
