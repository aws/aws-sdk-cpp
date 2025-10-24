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
enum class DurationType { NOT_SET, hours, minutes, seconds, milliseconds, days };

namespace DurationTypeMapper {
AWS_TIMESTREAMINFLUXDB_API DurationType GetDurationTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDurationType(DurationType value);
}  // namespace DurationTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
