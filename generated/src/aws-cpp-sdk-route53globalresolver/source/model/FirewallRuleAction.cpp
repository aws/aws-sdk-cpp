/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/FirewallRuleAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace FirewallRuleActionMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int ALERT_HASH = HashingUtils::HashString("ALERT");
static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");

FirewallRuleAction GetFirewallRuleActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return FirewallRuleAction::ALLOW;
  } else if (hashCode == ALERT_HASH) {
    return FirewallRuleAction::ALERT;
  } else if (hashCode == BLOCK_HASH) {
    return FirewallRuleAction::BLOCK;
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
    case FirewallRuleAction::ALLOW:
      return "ALLOW";
    case FirewallRuleAction::ALERT:
      return "ALERT";
    case FirewallRuleAction::BLOCK:
      return "BLOCK";
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
}  // namespace Route53GlobalResolver
}  // namespace Aws
