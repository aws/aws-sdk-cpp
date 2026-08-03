/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/DbBackupType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace DbBackupTypeMapper {

static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
static const int DAILY_HASH = HashingUtils::HashString("DAILY");
static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
static const int CUSTOM_SCHEDULE_HASH = HashingUtils::HashString("CUSTOM_SCHEDULE");
static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");

DbBackupType GetDbBackupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HOURLY_HASH) {
    return DbBackupType::HOURLY;
  } else if (hashCode == DAILY_HASH) {
    return DbBackupType::DAILY;
  } else if (hashCode == WEEKLY_HASH) {
    return DbBackupType::WEEKLY;
  } else if (hashCode == MONTHLY_HASH) {
    return DbBackupType::MONTHLY;
  } else if (hashCode == CUSTOM_SCHEDULE_HASH) {
    return DbBackupType::CUSTOM_SCHEDULE;
  } else if (hashCode == ON_DEMAND_HASH) {
    return DbBackupType::ON_DEMAND;
  } else if (hashCode == CONTINUOUS_HASH) {
    return DbBackupType::CONTINUOUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DbBackupType>(hashCode);
  }

  return DbBackupType::NOT_SET;
}

Aws::String GetNameForDbBackupType(DbBackupType enumValue) {
  switch (enumValue) {
    case DbBackupType::NOT_SET:
      return {};
    case DbBackupType::HOURLY:
      return "HOURLY";
    case DbBackupType::DAILY:
      return "DAILY";
    case DbBackupType::WEEKLY:
      return "WEEKLY";
    case DbBackupType::MONTHLY:
      return "MONTHLY";
    case DbBackupType::CUSTOM_SCHEDULE:
      return "CUSTOM_SCHEDULE";
    case DbBackupType::ON_DEMAND:
      return "ON_DEMAND";
    case DbBackupType::CONTINUOUS:
      return "CONTINUOUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DbBackupTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
