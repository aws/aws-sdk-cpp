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
  enum class Status
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    DELETING,
    MODIFYING,
    UPDATING,
    DELETED,
    FAILED
  };

namespace StatusMapper
{
AWS_TIMESTREAMINFLUXDB_API Status GetStatusForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
