/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DependencyDiscoveryStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DependencyDiscoveryStatus GetDependencyDiscoveryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DependencyDiscoveryStatus::ENABLED;
  } else if (hashCode == INITIALIZING_HASH) {
    return DependencyDiscoveryStatus::INITIALIZING;
  } else if (hashCode == DISABLED_HASH) {
    return DependencyDiscoveryStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DependencyDiscoveryStatus>(hashCode);
  }

  return DependencyDiscoveryStatus::NOT_SET;
}

Aws::String GetNameForDependencyDiscoveryStatus(DependencyDiscoveryStatus enumValue) {
  switch (enumValue) {
    case DependencyDiscoveryStatus::NOT_SET:
      return {};
    case DependencyDiscoveryStatus::ENABLED:
      return "ENABLED";
    case DependencyDiscoveryStatus::INITIALIZING:
      return "INITIALIZING";
    case DependencyDiscoveryStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DependencyDiscoveryStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
