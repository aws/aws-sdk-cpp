/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/MaintenanceScheduleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace MaintenanceScheduleTypeMapper {

static const int WINDOW_HASH = HashingUtils::HashString("WINDOW");

MaintenanceScheduleType GetMaintenanceScheduleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WINDOW_HASH) {
    return MaintenanceScheduleType::WINDOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaintenanceScheduleType>(hashCode);
  }

  return MaintenanceScheduleType::NOT_SET;
}

Aws::String GetNameForMaintenanceScheduleType(MaintenanceScheduleType enumValue) {
  switch (enumValue) {
    case MaintenanceScheduleType::NOT_SET:
      return {};
    case MaintenanceScheduleType::WINDOW:
      return "WINDOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaintenanceScheduleTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
