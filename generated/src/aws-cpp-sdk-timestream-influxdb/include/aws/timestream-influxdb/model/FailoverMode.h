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
  enum class FailoverMode
  {
    NOT_SET,
    AUTOMATIC,
    NO_FAILOVER
  };

namespace FailoverModeMapper
{
AWS_TIMESTREAMINFLUXDB_API FailoverMode GetFailoverModeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForFailoverMode(FailoverMode value);
} // namespace FailoverModeMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
