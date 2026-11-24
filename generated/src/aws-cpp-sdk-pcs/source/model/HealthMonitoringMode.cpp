/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/HealthMonitoringMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace HealthMonitoringModeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");

HealthMonitoringMode GetHealthMonitoringModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return HealthMonitoringMode::NONE;
  } else if (hashCode == STANDARD_HASH) {
    return HealthMonitoringMode::STANDARD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HealthMonitoringMode>(hashCode);
  }

  return HealthMonitoringMode::NOT_SET;
}

Aws::String GetNameForHealthMonitoringMode(HealthMonitoringMode enumValue) {
  switch (enumValue) {
    case HealthMonitoringMode::NOT_SET:
      return {};
    case HealthMonitoringMode::NONE:
      return "NONE";
    case HealthMonitoringMode::STANDARD:
      return "STANDARD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HealthMonitoringModeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
