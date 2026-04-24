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
enum class DataFusionRuntimeType { NOT_SET, multi_thread, multi_thread_alt };

namespace DataFusionRuntimeTypeMapper {
AWS_TIMESTREAMINFLUXDB_API DataFusionRuntimeType GetDataFusionRuntimeTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDataFusionRuntimeType(DataFusionRuntimeType value);
}  // namespace DataFusionRuntimeTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
