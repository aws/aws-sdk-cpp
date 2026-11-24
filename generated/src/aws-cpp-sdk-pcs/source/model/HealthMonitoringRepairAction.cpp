/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/HealthMonitoringRepairAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace HealthMonitoringRepairActionMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
static const int ISOLATE_HASH = HashingUtils::HashString("ISOLATE");
static const int NONE_HASH = HashingUtils::HashString("NONE");

HealthMonitoringRepairAction GetHealthMonitoringRepairActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return HealthMonitoringRepairAction::AUTO;
  } else if (hashCode == REPLACE_HASH) {
    return HealthMonitoringRepairAction::REPLACE;
  } else if (hashCode == ISOLATE_HASH) {
    return HealthMonitoringRepairAction::ISOLATE;
  } else if (hashCode == NONE_HASH) {
    return HealthMonitoringRepairAction::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HealthMonitoringRepairAction>(hashCode);
  }

  return HealthMonitoringRepairAction::NOT_SET;
}

Aws::String GetNameForHealthMonitoringRepairAction(HealthMonitoringRepairAction enumValue) {
  switch (enumValue) {
    case HealthMonitoringRepairAction::NOT_SET:
      return {};
    case HealthMonitoringRepairAction::AUTO:
      return "AUTO";
    case HealthMonitoringRepairAction::REPLACE:
      return "REPLACE";
    case HealthMonitoringRepairAction::ISOLATE:
      return "ISOLATE";
    case HealthMonitoringRepairAction::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HealthMonitoringRepairActionMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
