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
  enum class LogLevel
  {
    NOT_SET,
    debug,
    info,
    error
  };

namespace LogLevelMapper
{
AWS_TIMESTREAMINFLUXDB_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
