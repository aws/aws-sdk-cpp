/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/ClusterStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace ClusterStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");
static const int UPDATING_INSTANCE_TYPE_HASH = HashingUtils::HashString("UPDATING_INSTANCE_TYPE");
static const int REBOOTING_HASH = HashingUtils::HashString("REBOOTING");
static const int REBOOT_FAILED_HASH = HashingUtils::HashString("REBOOT_FAILED");
static const int PARTIALLY_AVAILABLE_HASH = HashingUtils::HashString("PARTIALLY_AVAILABLE");

ClusterStatus GetClusterStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ClusterStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return ClusterStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return ClusterStatus::DELETING;
  } else if (hashCode == AVAILABLE_HASH) {
    return ClusterStatus::AVAILABLE;
  } else if (hashCode == FAILED_HASH) {
    return ClusterStatus::FAILED;
  } else if (hashCode == DELETED_HASH) {
    return ClusterStatus::DELETED;
  } else if (hashCode == MAINTENANCE_HASH) {
    return ClusterStatus::MAINTENANCE;
  } else if (hashCode == UPDATING_INSTANCE_TYPE_HASH) {
    return ClusterStatus::UPDATING_INSTANCE_TYPE;
  } else if (hashCode == REBOOTING_HASH) {
    return ClusterStatus::REBOOTING;
  } else if (hashCode == REBOOT_FAILED_HASH) {
    return ClusterStatus::REBOOT_FAILED;
  } else if (hashCode == PARTIALLY_AVAILABLE_HASH) {
    return ClusterStatus::PARTIALLY_AVAILABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterStatus>(hashCode);
  }

  return ClusterStatus::NOT_SET;
}

Aws::String GetNameForClusterStatus(ClusterStatus enumValue) {
  switch (enumValue) {
    case ClusterStatus::NOT_SET:
      return {};
    case ClusterStatus::CREATING:
      return "CREATING";
    case ClusterStatus::UPDATING:
      return "UPDATING";
    case ClusterStatus::DELETING:
      return "DELETING";
    case ClusterStatus::AVAILABLE:
      return "AVAILABLE";
    case ClusterStatus::FAILED:
      return "FAILED";
    case ClusterStatus::DELETED:
      return "DELETED";
    case ClusterStatus::MAINTENANCE:
      return "MAINTENANCE";
    case ClusterStatus::UPDATING_INSTANCE_TYPE:
      return "UPDATING_INSTANCE_TYPE";
    case ClusterStatus::REBOOTING:
      return "REBOOTING";
    case ClusterStatus::REBOOT_FAILED:
      return "REBOOT_FAILED";
    case ClusterStatus::PARTIALLY_AVAILABLE:
      return "PARTIALLY_AVAILABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterStatusMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
