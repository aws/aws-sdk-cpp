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
enum class DbBackupStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED, DELETING, DELETED };

namespace DbBackupStatusMapper {
AWS_TIMESTREAMINFLUXDB_API DbBackupStatus GetDbBackupStatusForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDbBackupStatus(DbBackupStatus value);
}  // namespace DbBackupStatusMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
