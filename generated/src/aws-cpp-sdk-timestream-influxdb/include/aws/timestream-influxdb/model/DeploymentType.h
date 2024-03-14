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
  enum class DeploymentType
  {
    NOT_SET,
    SINGLE_AZ,
    WITH_MULTIAZ_STANDBY
  };

namespace DeploymentTypeMapper
{
AWS_TIMESTREAMINFLUXDB_API DeploymentType GetDeploymentTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDeploymentType(DeploymentType value);
} // namespace DeploymentTypeMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
