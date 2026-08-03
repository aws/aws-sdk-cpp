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
enum class ResourceDeploymentType { NOT_SET, SINGLE_AZ, WITH_MULTIAZ_STANDBY, MULTI_NODE_READ_REPLICAS };

namespace ResourceDeploymentTypeMapper {
AWS_TIMESTREAMINFLUXDB_API ResourceDeploymentType GetResourceDeploymentTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForResourceDeploymentType(ResourceDeploymentType value);
}  // namespace ResourceDeploymentTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
