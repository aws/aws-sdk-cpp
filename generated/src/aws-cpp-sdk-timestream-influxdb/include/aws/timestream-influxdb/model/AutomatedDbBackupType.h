/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
enum class AutomatedDbBackupType { NOT_SET, HOURLY, DAILY, WEEKLY, MONTHLY, CUSTOM_SCHEDULE, CONTINUOUS };

namespace AutomatedDbBackupTypeMapper {
AWS_TIMESTREAMINFLUXDB_API AutomatedDbBackupType GetAutomatedDbBackupTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForAutomatedDbBackupType(AutomatedDbBackupType value);
}  // namespace AutomatedDbBackupTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
