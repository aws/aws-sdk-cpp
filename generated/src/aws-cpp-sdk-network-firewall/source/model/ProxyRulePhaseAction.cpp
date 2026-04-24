/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ProxyRulePhaseAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ProxyRulePhaseActionMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int DENY_HASH = HashingUtils::HashString("DENY");
static const int ALERT_HASH = HashingUtils::HashString("ALERT");

ProxyRulePhaseAction GetProxyRulePhaseActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return ProxyRulePhaseAction::ALLOW;
  } else if (hashCode == DENY_HASH) {
    return ProxyRulePhaseAction::DENY;
  } else if (hashCode == ALERT_HASH) {
    return ProxyRulePhaseAction::ALERT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyRulePhaseAction>(hashCode);
  }

  return ProxyRulePhaseAction::NOT_SET;
}

Aws::String GetNameForProxyRulePhaseAction(ProxyRulePhaseAction enumValue) {
  switch (enumValue) {
    case ProxyRulePhaseAction::NOT_SET:
      return {};
    case ProxyRulePhaseAction::ALLOW:
      return "ALLOW";
    case ProxyRulePhaseAction::DENY:
      return "DENY";
    case ProxyRulePhaseAction::ALERT:
      return "ALERT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyRulePhaseActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
