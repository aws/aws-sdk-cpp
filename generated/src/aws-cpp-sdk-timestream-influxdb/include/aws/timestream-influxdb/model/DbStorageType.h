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
  enum class DbStorageType
  {
    NOT_SET,
    InfluxIOIncludedT1,
    InfluxIOIncludedT2,
    InfluxIOIncludedT3
  };

namespace DbStorageTypeMapper
{
AWS_TIMESTREAMINFLUXDB_API DbStorageType GetDbStorageTypeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForDbStorageType(DbStorageType value);
} // namespace DbStorageTypeMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
