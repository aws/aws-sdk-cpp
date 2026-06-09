/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DataGuardRole.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DataGuardRoleMapper {

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
static const int DISABLED_STANDBY_HASH = HashingUtils::HashString("DISABLED_STANDBY");
static const int BACKUP_COPY_HASH = HashingUtils::HashString("BACKUP_COPY");
static const int SNAPSHOT_STANDBY_HASH = HashingUtils::HashString("SNAPSHOT_STANDBY");

DataGuardRole GetDataGuardRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH) {
    return DataGuardRole::PRIMARY;
  } else if (hashCode == STANDBY_HASH) {
    return DataGuardRole::STANDBY;
  } else if (hashCode == DISABLED_STANDBY_HASH) {
    return DataGuardRole::DISABLED_STANDBY;
  } else if (hashCode == BACKUP_COPY_HASH) {
    return DataGuardRole::BACKUP_COPY;
  } else if (hashCode == SNAPSHOT_STANDBY_HASH) {
    return DataGuardRole::SNAPSHOT_STANDBY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataGuardRole>(hashCode);
  }

  return DataGuardRole::NOT_SET;
}

Aws::String GetNameForDataGuardRole(DataGuardRole enumValue) {
  switch (enumValue) {
    case DataGuardRole::NOT_SET:
      return {};
    case DataGuardRole::PRIMARY:
      return "PRIMARY";
    case DataGuardRole::STANDBY:
      return "STANDBY";
    case DataGuardRole::DISABLED_STANDBY:
      return "DISABLED_STANDBY";
    case DataGuardRole::BACKUP_COPY:
      return "BACKUP_COPY";
    case DataGuardRole::SNAPSHOT_STANDBY:
      return "SNAPSHOT_STANDBY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataGuardRoleMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
