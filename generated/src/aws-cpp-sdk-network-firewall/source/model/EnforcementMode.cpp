/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/EnforcementMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace EnforcementModeMapper {

static const int POLICY_CONTROLLED_HASH = HashingUtils::HashString("POLICY_CONTROLLED");

EnforcementMode GetEnforcementModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == POLICY_CONTROLLED_HASH) {
    return EnforcementMode::POLICY_CONTROLLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnforcementMode>(hashCode);
  }

  return EnforcementMode::NOT_SET;
}

Aws::String GetNameForEnforcementMode(EnforcementMode enumValue) {
  switch (enumValue) {
    case EnforcementMode::NOT_SET:
      return {};
    case EnforcementMode::POLICY_CONTROLLED:
      return "POLICY_CONTROLLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnforcementModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
