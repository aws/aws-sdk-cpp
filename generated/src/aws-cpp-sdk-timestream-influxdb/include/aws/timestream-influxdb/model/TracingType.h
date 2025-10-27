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
enum class TracingType { NOT_SET, log, jaeger, disabled };

namespace TracingTypeMapper {
AWS_TIMESTREAMINFLUXDB_API TracingType GetTracingTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForTracingType(TracingType value);
}  // namespace TracingTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
