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
enum class ResourceType { NOT_SET, DB_INSTANCE, DB_CLUSTER };

namespace ResourceTypeMapper {
AWS_TIMESTREAMINFLUXDB_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
