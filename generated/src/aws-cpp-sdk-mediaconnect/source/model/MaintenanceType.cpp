/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/MaintenanceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace MaintenanceTypeMapper {

static const int PREFERRED_DAY_TIME_HASH = HashingUtils::HashString("PREFERRED_DAY_TIME");
static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");

MaintenanceType GetMaintenanceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREFERRED_DAY_TIME_HASH) {
    return MaintenanceType::PREFERRED_DAY_TIME;
  } else if (hashCode == DEFAULT_HASH) {
    return MaintenanceType::DEFAULT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaintenanceType>(hashCode);
  }

  return MaintenanceType::NOT_SET;
}

Aws::String GetNameForMaintenanceType(MaintenanceType enumValue) {
  switch (enumValue) {
    case MaintenanceType::NOT_SET:
      return {};
    case MaintenanceType::PREFERRED_DAY_TIME:
      return "PREFERRED_DAY_TIME";
    case MaintenanceType::DEFAULT:
      return "DEFAULT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaintenanceTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
