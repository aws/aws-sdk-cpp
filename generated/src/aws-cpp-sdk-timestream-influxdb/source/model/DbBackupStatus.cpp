/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/DbBackupStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace DbBackupStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

DbBackupStatus GetDbBackupStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return DbBackupStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return DbBackupStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return DbBackupStatus::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return DbBackupStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return DbBackupStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DbBackupStatus>(hashCode);
  }

  return DbBackupStatus::NOT_SET;
}

Aws::String GetNameForDbBackupStatus(DbBackupStatus enumValue) {
  switch (enumValue) {
    case DbBackupStatus::NOT_SET:
      return {};
    case DbBackupStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DbBackupStatus::COMPLETED:
      return "COMPLETED";
    case DbBackupStatus::FAILED:
      return "FAILED";
    case DbBackupStatus::DELETING:
      return "DELETING";
    case DbBackupStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DbBackupStatusMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
