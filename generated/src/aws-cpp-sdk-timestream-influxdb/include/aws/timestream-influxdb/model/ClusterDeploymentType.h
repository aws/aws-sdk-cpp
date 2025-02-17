/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{
  enum class ClusterDeploymentType
  {
    NOT_SET,
    MULTI_NODE_READ_REPLICAS
  };

namespace ClusterDeploymentTypeMapper
{
AWS_TIMESTREAMINFLUXDB_API ClusterDeploymentType GetClusterDeploymentTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForClusterDeploymentType(ClusterDeploymentType value);
} // namespace ClusterDeploymentTypeMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
