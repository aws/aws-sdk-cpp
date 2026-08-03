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
enum class DbBackupType { NOT_SET, HOURLY, DAILY, WEEKLY, MONTHLY, CUSTOM_SCHEDULE, ON_DEMAND, CONTINUOUS };

namespace DbBackupTypeMapper {
AWS_TIMESTREAMINFLUXDB_API DbBackupType GetDbBackupTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDbBackupType(DbBackupType value);
}  // namespace DbBackupTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
