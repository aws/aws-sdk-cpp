/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class AutonomousDatabaseResourceStatus {
  NOT_SET,
  AVAILABLE,
  FAILED,
  PROVISIONING,
  TERMINATED,
  TERMINATING,
  UPDATING,
  MAINTENANCE_IN_PROGRESS,
  STOPPING,
  STOPPED,
  STARTING,
  UNAVAILABLE,
  RESTORE_IN_PROGRESS,
  RESTORE_FAILED,
  BACKUP_IN_PROGRESS,
  SCALE_IN_PROGRESS,
  AVAILABLE_NEEDS_ATTENTION,
  RESTARTING,
  RECREATING,
  ROLE_CHANGE_IN_PROGRESS,
  UPGRADING,
  INACCESSIBLE,
  STANDBY
};

namespace AutonomousDatabaseResourceStatusMapper {
AWS_ODB_API AutonomousDatabaseResourceStatus GetAutonomousDatabaseResourceStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForAutonomousDatabaseResourceStatus(AutonomousDatabaseResourceStatus value);
}  // namespace AutonomousDatabaseResourceStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
