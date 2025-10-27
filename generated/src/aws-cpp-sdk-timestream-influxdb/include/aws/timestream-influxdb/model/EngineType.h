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
enum class EngineType { NOT_SET, INFLUXDB_V2, INFLUXDB_V3_CORE, INFLUXDB_V3_ENTERPRISE };

namespace EngineTypeMapper {
AWS_TIMESTREAMINFLUXDB_API EngineType GetEngineTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForEngineType(EngineType value);
}  // namespace EngineTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
