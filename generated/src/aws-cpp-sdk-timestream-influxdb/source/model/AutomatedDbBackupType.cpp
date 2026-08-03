/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/AutomatedDbBackupType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace AutomatedDbBackupTypeMapper {

static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
static const int DAILY_HASH = HashingUtils::HashString("DAILY");
static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
static const int CUSTOM_SCHEDULE_HASH = HashingUtils::HashString("CUSTOM_SCHEDULE");
static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");

AutomatedDbBackupType GetAutomatedDbBackupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HOURLY_HASH) {
    return AutomatedDbBackupType::HOURLY;
  } else if (hashCode == DAILY_HASH) {
    return AutomatedDbBackupType::DAILY;
  } else if (hashCode == WEEKLY_HASH) {
    return AutomatedDbBackupType::WEEKLY;
  } else if (hashCode == MONTHLY_HASH) {
    return AutomatedDbBackupType::MONTHLY;
  } else if (hashCode == CUSTOM_SCHEDULE_HASH) {
    return AutomatedDbBackupType::CUSTOM_SCHEDULE;
  } else if (hashCode == CONTINUOUS_HASH) {
    return AutomatedDbBackupType::CONTINUOUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutomatedDbBackupType>(hashCode);
  }

  return AutomatedDbBackupType::NOT_SET;
}

Aws::String GetNameForAutomatedDbBackupType(AutomatedDbBackupType enumValue) {
  switch (enumValue) {
    case AutomatedDbBackupType::NOT_SET:
      return {};
    case AutomatedDbBackupType::HOURLY:
      return "HOURLY";
    case AutomatedDbBackupType::DAILY:
      return "DAILY";
    case AutomatedDbBackupType::WEEKLY:
      return "WEEKLY";
    case AutomatedDbBackupType::MONTHLY:
      return "MONTHLY";
    case AutomatedDbBackupType::CUSTOM_SCHEDULE:
      return "CUSTOM_SCHEDULE";
    case AutomatedDbBackupType::CONTINUOUS:
      return "CONTINUOUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutomatedDbBackupTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
