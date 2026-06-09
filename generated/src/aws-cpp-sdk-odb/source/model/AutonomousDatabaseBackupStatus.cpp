/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/AutonomousDatabaseBackupStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace AutonomousDatabaseBackupStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AutonomousDatabaseBackupStatus GetAutonomousDatabaseBackupStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AutonomousDatabaseBackupStatus::ACTIVE;
  } else if (hashCode == CREATING_HASH) {
    return AutonomousDatabaseBackupStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return AutonomousDatabaseBackupStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return AutonomousDatabaseBackupStatus::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return AutonomousDatabaseBackupStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutonomousDatabaseBackupStatus>(hashCode);
  }

  return AutonomousDatabaseBackupStatus::NOT_SET;
}

Aws::String GetNameForAutonomousDatabaseBackupStatus(AutonomousDatabaseBackupStatus enumValue) {
  switch (enumValue) {
    case AutonomousDatabaseBackupStatus::NOT_SET:
      return {};
    case AutonomousDatabaseBackupStatus::ACTIVE:
      return "ACTIVE";
    case AutonomousDatabaseBackupStatus::CREATING:
      return "CREATING";
    case AutonomousDatabaseBackupStatus::UPDATING:
      return "UPDATING";
    case AutonomousDatabaseBackupStatus::DELETING:
      return "DELETING";
    case AutonomousDatabaseBackupStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutonomousDatabaseBackupStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
