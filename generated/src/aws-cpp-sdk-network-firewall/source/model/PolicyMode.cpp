/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/PolicyMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace PolicyModeMapper {

static const int ENFORCE_HASH = HashingUtils::HashString("ENFORCE");
static const int MONITOR_HASH = HashingUtils::HashString("MONITOR");

PolicyMode GetPolicyModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENFORCE_HASH) {
    return PolicyMode::ENFORCE;
  } else if (hashCode == MONITOR_HASH) {
    return PolicyMode::MONITOR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyMode>(hashCode);
  }

  return PolicyMode::NOT_SET;
}

Aws::String GetNameForPolicyMode(PolicyMode enumValue) {
  switch (enumValue) {
    case PolicyMode::NOT_SET:
      return {};
    case PolicyMode::ENFORCE:
      return "ENFORCE";
    case PolicyMode::MONITOR:
      return "MONITOR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
