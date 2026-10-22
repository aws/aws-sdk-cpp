/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/FirewallPolicyErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace FirewallPolicyErrorCodeMapper {

static const int DNS_FIREWALL_RULE_GROUP_UNAVAILABLE_HASH = HashingUtils::HashString("DNS_FIREWALL_RULE_GROUP_UNAVAILABLE");
static const int ROUTE53_RESOLVED_IP_VALIDATION_MISSING_HASH = HashingUtils::HashString("ROUTE53_RESOLVED_IP_VALIDATION_MISSING");

FirewallPolicyErrorCode GetFirewallPolicyErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DNS_FIREWALL_RULE_GROUP_UNAVAILABLE_HASH) {
    return FirewallPolicyErrorCode::DNS_FIREWALL_RULE_GROUP_UNAVAILABLE;
  } else if (hashCode == ROUTE53_RESOLVED_IP_VALIDATION_MISSING_HASH) {
    return FirewallPolicyErrorCode::ROUTE53_RESOLVED_IP_VALIDATION_MISSING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallPolicyErrorCode>(hashCode);
  }

  return FirewallPolicyErrorCode::NOT_SET;
}

Aws::String GetNameForFirewallPolicyErrorCode(FirewallPolicyErrorCode enumValue) {
  switch (enumValue) {
    case FirewallPolicyErrorCode::NOT_SET:
      return {};
    case FirewallPolicyErrorCode::DNS_FIREWALL_RULE_GROUP_UNAVAILABLE:
      return "DNS_FIREWALL_RULE_GROUP_UNAVAILABLE";
    case FirewallPolicyErrorCode::ROUTE53_RESOLVED_IP_VALIDATION_MISSING:
      return "ROUTE53_RESOLVED_IP_VALIDATION_MISSING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallPolicyErrorCodeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
