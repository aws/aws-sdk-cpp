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
  enum class InstanceMode
  {
    NOT_SET,
    PRIMARY,
    STANDBY,
    REPLICA
  };

namespace InstanceModeMapper
{
AWS_TIMESTREAMINFLUXDB_API InstanceMode GetInstanceModeForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForInstanceMode(InstanceMode value);
} // namespace InstanceModeMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
