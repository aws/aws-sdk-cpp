/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/RestoreMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace RestoreModeMapper {

static const int NEW_RESOURCE_HASH = HashingUtils::HashString("NEW_RESOURCE");
static const int REPLACE_EXISTING_HASH = HashingUtils::HashString("REPLACE_EXISTING");

RestoreMode GetRestoreModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NEW_RESOURCE_HASH) {
    return RestoreMode::NEW_RESOURCE;
  } else if (hashCode == REPLACE_EXISTING_HASH) {
    return RestoreMode::REPLACE_EXISTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RestoreMode>(hashCode);
  }

  return RestoreMode::NOT_SET;
}

Aws::String GetNameForRestoreMode(RestoreMode enumValue) {
  switch (enumValue) {
    case RestoreMode::NOT_SET:
      return {};
    case RestoreMode::NEW_RESOURCE:
      return "NEW_RESOURCE";
    case RestoreMode::REPLACE_EXISTING:
      return "REPLACE_EXISTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RestoreModeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
