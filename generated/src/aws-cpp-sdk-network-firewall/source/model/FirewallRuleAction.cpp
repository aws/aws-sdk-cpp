/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/FirewallRuleAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace FirewallRuleActionMapper {

static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
static const int DROP_HASH = HashingUtils::HashString("DROP");
static const int REJECT_HASH = HashingUtils::HashString("REJECT");
static const int REJECT_DST_HASH = HashingUtils::HashString("REJECT_DST");
static const int REJECT_BOTH_HASH = HashingUtils::HashString("REJECT_BOTH");

FirewallRuleAction GetFirewallRuleActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCEPT_HASH) {
    return FirewallRuleAction::ACCEPT;
  } else if (hashCode == DROP_HASH) {
    return FirewallRuleAction::DROP;
  } else if (hashCode == REJECT_HASH) {
    return FirewallRuleAction::REJECT;
  } else if (hashCode == REJECT_DST_HASH) {
    return FirewallRuleAction::REJECT_DST;
  } else if (hashCode == REJECT_BOTH_HASH) {
    return FirewallRuleAction::REJECT_BOTH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallRuleAction>(hashCode);
  }

  return FirewallRuleAction::NOT_SET;
}

Aws::String GetNameForFirewallRuleAction(FirewallRuleAction enumValue) {
  switch (enumValue) {
    case FirewallRuleAction::NOT_SET:
      return {};
    case FirewallRuleAction::ACCEPT:
      return "ACCEPT";
    case FirewallRuleAction::DROP:
      return "DROP";
    case FirewallRuleAction::REJECT:
      return "REJECT";
    case FirewallRuleAction::REJECT_DST:
      return "REJECT_DST";
    case FirewallRuleAction::REJECT_BOTH:
      return "REJECT_BOTH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallRuleActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
