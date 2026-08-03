/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/RestoreStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace RestoreStatusMapper {

static const int RESTORING_HASH = HashingUtils::HashString("RESTORING");

RestoreStatus GetRestoreStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESTORING_HASH) {
    return RestoreStatus::RESTORING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RestoreStatus>(hashCode);
  }

  return RestoreStatus::NOT_SET;
}

Aws::String GetNameForRestoreStatus(RestoreStatus enumValue) {
  switch (enumValue) {
    case RestoreStatus::NOT_SET:
      return {};
    case RestoreStatus::RESTORING:
      return "RESTORING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RestoreStatusMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
