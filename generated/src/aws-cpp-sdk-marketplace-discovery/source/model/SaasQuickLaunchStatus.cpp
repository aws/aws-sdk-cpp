/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SaasQuickLaunchStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SaasQuickLaunchStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

SaasQuickLaunchStatus GetSaasQuickLaunchStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return SaasQuickLaunchStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return SaasQuickLaunchStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SaasQuickLaunchStatus>(hashCode);
  }

  return SaasQuickLaunchStatus::NOT_SET;
}

Aws::String GetNameForSaasQuickLaunchStatus(SaasQuickLaunchStatus enumValue) {
  switch (enumValue) {
    case SaasQuickLaunchStatus::NOT_SET:
      return {};
    case SaasQuickLaunchStatus::ENABLED:
      return "ENABLED";
    case SaasQuickLaunchStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SaasQuickLaunchStatusMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
