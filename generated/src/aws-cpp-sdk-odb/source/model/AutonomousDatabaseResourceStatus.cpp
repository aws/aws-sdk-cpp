/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/AutonomousDatabaseResourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace AutonomousDatabaseResourceStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int MAINTENANCE_IN_PROGRESS_HASH = HashingUtils::HashString("MAINTENANCE_IN_PROGRESS");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
static const int RESTORE_IN_PROGRESS_HASH = HashingUtils::HashString("RESTORE_IN_PROGRESS");
static const int RESTORE_FAILED_HASH = HashingUtils::HashString("RESTORE_FAILED");
static const int BACKUP_IN_PROGRESS_HASH = HashingUtils::HashString("BACKUP_IN_PROGRESS");
static const int SCALE_IN_PROGRESS_HASH = HashingUtils::HashString("SCALE_IN_PROGRESS");
static const int AVAILABLE_NEEDS_ATTENTION_HASH = HashingUtils::HashString("AVAILABLE_NEEDS_ATTENTION");
static const int RESTARTING_HASH = HashingUtils::HashString("RESTARTING");
static const int RECREATING_HASH = HashingUtils::HashString("RECREATING");
static const int ROLE_CHANGE_IN_PROGRESS_HASH = HashingUtils::HashString("ROLE_CHANGE_IN_PROGRESS");
static const int UPGRADING_HASH = HashingUtils::HashString("UPGRADING");
static const int INACCESSIBLE_HASH = HashingUtils::HashString("INACCESSIBLE");
static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");

AutonomousDatabaseResourceStatus GetAutonomousDatabaseResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return AutonomousDatabaseResourceStatus::AVAILABLE;
  } else if (hashCode == FAILED_HASH) {
    return AutonomousDatabaseResourceStatus::FAILED;
  } else if (hashCode == PROVISIONING_HASH) {
    return AutonomousDatabaseResourceStatus::PROVISIONING;
  } else if (hashCode == TERMINATED_HASH) {
    return AutonomousDatabaseResourceStatus::TERMINATED;
  } else if (hashCode == TERMINATING_HASH) {
    return AutonomousDatabaseResourceStatus::TERMINATING;
  } else if (hashCode == UPDATING_HASH) {
    return AutonomousDatabaseResourceStatus::UPDATING;
  } else if (hashCode == MAINTENANCE_IN_PROGRESS_HASH) {
    return AutonomousDatabaseResourceStatus::MAINTENANCE_IN_PROGRESS;
  } else if (hashCode == STOPPING_HASH) {
    return AutonomousDatabaseResourceStatus::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return AutonomousDatabaseResourceStatus::STOPPED;
  } else if (hashCode == STARTING_HASH) {
    return AutonomousDatabaseResourceStatus::STARTING;
  } else if (hashCode == UNAVAILABLE_HASH) {
    return AutonomousDatabaseResourceStatus::UNAVAILABLE;
  } else if (hashCode == RESTORE_IN_PROGRESS_HASH) {
    return AutonomousDatabaseResourceStatus::RESTORE_IN_PROGRESS;
  } else if (hashCode == RESTORE_FAILED_HASH) {
    return AutonomousDatabaseResourceStatus::RESTORE_FAILED;
  } else if (hashCode == BACKUP_IN_PROGRESS_HASH) {
    return AutonomousDatabaseResourceStatus::BACKUP_IN_PROGRESS;
  } else if (hashCode == SCALE_IN_PROGRESS_HASH) {
    return AutonomousDatabaseResourceStatus::SCALE_IN_PROGRESS;
  } else if (hashCode == AVAILABLE_NEEDS_ATTENTION_HASH) {
    return AutonomousDatabaseResourceStatus::AVAILABLE_NEEDS_ATTENTION;
  } else if (hashCode == RESTARTING_HASH) {
    return AutonomousDatabaseResourceStatus::RESTARTING;
  } else if (hashCode == RECREATING_HASH) {
    return AutonomousDatabaseResourceStatus::RECREATING;
  } else if (hashCode == ROLE_CHANGE_IN_PROGRESS_HASH) {
    return AutonomousDatabaseResourceStatus::ROLE_CHANGE_IN_PROGRESS;
  } else if (hashCode == UPGRADING_HASH) {
    return AutonomousDatabaseResourceStatus::UPGRADING;
  } else if (hashCode == INACCESSIBLE_HASH) {
    return AutonomousDatabaseResourceStatus::INACCESSIBLE;
  } else if (hashCode == STANDBY_HASH) {
    return AutonomousDatabaseResourceStatus::STANDBY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutonomousDatabaseResourceStatus>(hashCode);
  }

  return AutonomousDatabaseResourceStatus::NOT_SET;
}

Aws::String GetNameForAutonomousDatabaseResourceStatus(AutonomousDatabaseResourceStatus enumValue) {
  switch (enumValue) {
    case AutonomousDatabaseResourceStatus::NOT_SET:
      return {};
    case AutonomousDatabaseResourceStatus::AVAILABLE:
      return "AVAILABLE";
    case AutonomousDatabaseResourceStatus::FAILED:
      return "FAILED";
    case AutonomousDatabaseResourceStatus::PROVISIONING:
      return "PROVISIONING";
    case AutonomousDatabaseResourceStatus::TERMINATED:
      return "TERMINATED";
    case AutonomousDatabaseResourceStatus::TERMINATING:
      return "TERMINATING";
    case AutonomousDatabaseResourceStatus::UPDATING:
      return "UPDATING";
    case AutonomousDatabaseResourceStatus::MAINTENANCE_IN_PROGRESS:
      return "MAINTENANCE_IN_PROGRESS";
    case AutonomousDatabaseResourceStatus::STOPPING:
      return "STOPPING";
    case AutonomousDatabaseResourceStatus::STOPPED:
      return "STOPPED";
    case AutonomousDatabaseResourceStatus::STARTING:
      return "STARTING";
    case AutonomousDatabaseResourceStatus::UNAVAILABLE:
      return "UNAVAILABLE";
    case AutonomousDatabaseResourceStatus::RESTORE_IN_PROGRESS:
      return "RESTORE_IN_PROGRESS";
    case AutonomousDatabaseResourceStatus::RESTORE_FAILED:
      return "RESTORE_FAILED";
    case AutonomousDatabaseResourceStatus::BACKUP_IN_PROGRESS:
      return "BACKUP_IN_PROGRESS";
    case AutonomousDatabaseResourceStatus::SCALE_IN_PROGRESS:
      return "SCALE_IN_PROGRESS";
    case AutonomousDatabaseResourceStatus::AVAILABLE_NEEDS_ATTENTION:
      return "AVAILABLE_NEEDS_ATTENTION";
    case AutonomousDatabaseResourceStatus::RESTARTING:
      return "RESTARTING";
    case AutonomousDatabaseResourceStatus::RECREATING:
      return "RECREATING";
    case AutonomousDatabaseResourceStatus::ROLE_CHANGE_IN_PROGRESS:
      return "ROLE_CHANGE_IN_PROGRESS";
    case AutonomousDatabaseResourceStatus::UPGRADING:
      return "UPGRADING";
    case AutonomousDatabaseResourceStatus::INACCESSIBLE:
      return "INACCESSIBLE";
    case AutonomousDatabaseResourceStatus::STANDBY:
      return "STANDBY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutonomousDatabaseResourceStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
