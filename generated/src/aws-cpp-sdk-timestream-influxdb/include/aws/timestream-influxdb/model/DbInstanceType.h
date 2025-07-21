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
  enum class DbInstanceType
  {
    NOT_SET,
    db_influx_medium,
    db_influx_large,
    db_influx_xlarge,
    db_influx_2xlarge,
    db_influx_4xlarge,
    db_influx_8xlarge,
    db_influx_12xlarge,
    db_influx_16xlarge,
    db_influx_24xlarge
  };

namespace DbInstanceTypeMapper
{
AWS_TIMESTREAMINFLUXDB_API DbInstanceType GetDbInstanceTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDbInstanceType(DbInstanceType value);
} // namespace DbInstanceTypeMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
