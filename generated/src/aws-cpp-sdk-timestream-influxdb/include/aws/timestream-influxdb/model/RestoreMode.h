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
enum class RestoreMode { NOT_SET, NEW_RESOURCE, REPLACE_EXISTING };

namespace RestoreModeMapper {
AWS_TIMESTREAMINFLUXDB_API RestoreMode GetRestoreModeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForRestoreMode(RestoreMode value);
}  // namespace RestoreModeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
