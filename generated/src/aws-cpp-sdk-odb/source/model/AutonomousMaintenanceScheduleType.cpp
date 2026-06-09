/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/AutonomousMaintenanceScheduleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace AutonomousMaintenanceScheduleTypeMapper {

static const int EARLY_HASH = HashingUtils::HashString("EARLY");
static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");

AutonomousMaintenanceScheduleType GetAutonomousMaintenanceScheduleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EARLY_HASH) {
    return AutonomousMaintenanceScheduleType::EARLY;
  } else if (hashCode == REGULAR_HASH) {
    return AutonomousMaintenanceScheduleType::REGULAR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutonomousMaintenanceScheduleType>(hashCode);
  }

  return AutonomousMaintenanceScheduleType::NOT_SET;
}

Aws::String GetNameForAutonomousMaintenanceScheduleType(AutonomousMaintenanceScheduleType enumValue) {
  switch (enumValue) {
    case AutonomousMaintenanceScheduleType::NOT_SET:
      return {};
    case AutonomousMaintenanceScheduleType::EARLY:
      return "EARLY";
    case AutonomousMaintenanceScheduleType::REGULAR:
      return "REGULAR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutonomousMaintenanceScheduleTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
