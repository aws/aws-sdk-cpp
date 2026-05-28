/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryInput.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DependencyDiscoveryInputMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DependencyDiscoveryInput GetDependencyDiscoveryInputForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DependencyDiscoveryInput::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return DependencyDiscoveryInput::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DependencyDiscoveryInput>(hashCode);
  }

  return DependencyDiscoveryInput::NOT_SET;
}

Aws::String GetNameForDependencyDiscoveryInput(DependencyDiscoveryInput enumValue) {
  switch (enumValue) {
    case DependencyDiscoveryInput::NOT_SET:
      return {};
    case DependencyDiscoveryInput::ENABLED:
      return "ENABLED";
    case DependencyDiscoveryInput::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DependencyDiscoveryInputMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
