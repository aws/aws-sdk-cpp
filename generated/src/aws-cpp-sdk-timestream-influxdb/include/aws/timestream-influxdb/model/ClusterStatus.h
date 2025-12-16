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
enum class ClusterStatus {
  NOT_SET,
  CREATING,
  UPDATING,
  DELETING,
  AVAILABLE,
  FAILED,
  DELETED,
  MAINTENANCE,
  UPDATING_INSTANCE_TYPE,
  REBOOTING,
  REBOOT_FAILED,
  PARTIALLY_AVAILABLE
};

namespace ClusterStatusMapper {
AWS_TIMESTREAMINFLUXDB_API ClusterStatus GetClusterStatusForName(const Aws::String& name);

AWS_TIMESTREAMINFLUXDB_API Aws::String GetNameForClusterStatus(ClusterStatus value);
}  // namespace ClusterStatusMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
