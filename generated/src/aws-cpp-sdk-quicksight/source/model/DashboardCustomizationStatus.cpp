/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DashboardCustomizationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DashboardCustomizationStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DashboardCustomizationStatus GetDashboardCustomizationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DashboardCustomizationStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return DashboardCustomizationStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DashboardCustomizationStatus>(hashCode);
  }

  return DashboardCustomizationStatus::NOT_SET;
}

Aws::String GetNameForDashboardCustomizationStatus(DashboardCustomizationStatus enumValue) {
  switch (enumValue) {
    case DashboardCustomizationStatus::NOT_SET:
      return {};
    case DashboardCustomizationStatus::ENABLED:
      return "ENABLED";
    case DashboardCustomizationStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DashboardCustomizationStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
