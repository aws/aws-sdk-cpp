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
  enum class LogFormats
  {
    NOT_SET,
    full
  };

namespace LogFormatsMapper
{
AWS_TIMESTREAMINFLUXDB_API LogFormats GetLogFormatsForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForLogFormats(LogFormats value);
} // namespace LogFormatsMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
