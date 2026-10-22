/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/Route53ResolvedIPValidationAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace Route53ResolvedIPValidationActionMapper {

static const int REJECT_HASH = HashingUtils::HashString("REJECT");
static const int DROP_HASH = HashingUtils::HashString("DROP");
static const int ALERT_HASH = HashingUtils::HashString("ALERT");

Route53ResolvedIPValidationAction GetRoute53ResolvedIPValidationActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REJECT_HASH) {
    return Route53ResolvedIPValidationAction::REJECT;
  } else if (hashCode == DROP_HASH) {
    return Route53ResolvedIPValidationAction::DROP;
  } else if (hashCode == ALERT_HASH) {
    return Route53ResolvedIPValidationAction::ALERT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Route53ResolvedIPValidationAction>(hashCode);
  }

  return Route53ResolvedIPValidationAction::NOT_SET;
}

Aws::String GetNameForRoute53ResolvedIPValidationAction(Route53ResolvedIPValidationAction enumValue) {
  switch (enumValue) {
    case Route53ResolvedIPValidationAction::NOT_SET:
      return {};
    case Route53ResolvedIPValidationAction::REJECT:
      return "REJECT";
    case Route53ResolvedIPValidationAction::DROP:
      return "DROP";
    case Route53ResolvedIPValidationAction::ALERT:
      return "ALERT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Route53ResolvedIPValidationActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
