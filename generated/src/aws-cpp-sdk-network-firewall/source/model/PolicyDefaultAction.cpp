/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/PolicyDefaultAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace PolicyDefaultActionMapper {

static const int DROP_HASH = HashingUtils::HashString("DROP");
static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
static const int REJECT_HASH = HashingUtils::HashString("REJECT");
static const int ALERT_HASH = HashingUtils::HashString("ALERT");

PolicyDefaultAction GetPolicyDefaultActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DROP_HASH) {
    return PolicyDefaultAction::DROP;
  } else if (hashCode == ACCEPT_HASH) {
    return PolicyDefaultAction::ACCEPT;
  } else if (hashCode == REJECT_HASH) {
    return PolicyDefaultAction::REJECT;
  } else if (hashCode == ALERT_HASH) {
    return PolicyDefaultAction::ALERT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyDefaultAction>(hashCode);
  }

  return PolicyDefaultAction::NOT_SET;
}

Aws::String GetNameForPolicyDefaultAction(PolicyDefaultAction enumValue) {
  switch (enumValue) {
    case PolicyDefaultAction::NOT_SET:
      return {};
    case PolicyDefaultAction::DROP:
      return "DROP";
    case PolicyDefaultAction::ACCEPT:
      return "ACCEPT";
    case PolicyDefaultAction::REJECT:
      return "REJECT";
    case PolicyDefaultAction::ALERT:
      return "ALERT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyDefaultActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
