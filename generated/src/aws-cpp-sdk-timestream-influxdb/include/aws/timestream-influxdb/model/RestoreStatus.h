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
enum class RestoreStatus { NOT_SET, RESTORING };

namespace RestoreStatusMapper {
AWS_TIMESTREAMINFLUXDB_API RestoreStatus GetRestoreStatusForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForRestoreStatus(RestoreStatus value);
}  // namespace RestoreStatusMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
