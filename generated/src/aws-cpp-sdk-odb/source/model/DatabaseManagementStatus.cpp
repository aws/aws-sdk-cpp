/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DatabaseManagementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DatabaseManagementStatusMapper {

static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int NOT_ENABLED_HASH = HashingUtils::HashString("NOT_ENABLED");
static const int FAILED_ENABLING_HASH = HashingUtils::HashString("FAILED_ENABLING");
static const int FAILED_DISABLING_HASH = HashingUtils::HashString("FAILED_DISABLING");

DatabaseManagementStatus GetDatabaseManagementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLING_HASH) {
    return DatabaseManagementStatus::ENABLING;
  } else if (hashCode == ENABLED_HASH) {
    return DatabaseManagementStatus::ENABLED;
  } else if (hashCode == DISABLING_HASH) {
    return DatabaseManagementStatus::DISABLING;
  } else if (hashCode == NOT_ENABLED_HASH) {
    return DatabaseManagementStatus::NOT_ENABLED;
  } else if (hashCode == FAILED_ENABLING_HASH) {
    return DatabaseManagementStatus::FAILED_ENABLING;
  } else if (hashCode == FAILED_DISABLING_HASH) {
    return DatabaseManagementStatus::FAILED_DISABLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatabaseManagementStatus>(hashCode);
  }

  return DatabaseManagementStatus::NOT_SET;
}

Aws::String GetNameForDatabaseManagementStatus(DatabaseManagementStatus enumValue) {
  switch (enumValue) {
    case DatabaseManagementStatus::NOT_SET:
      return {};
    case DatabaseManagementStatus::ENABLING:
      return "ENABLING";
    case DatabaseManagementStatus::ENABLED:
      return "ENABLED";
    case DatabaseManagementStatus::DISABLING:
      return "DISABLING";
    case DatabaseManagementStatus::NOT_ENABLED:
      return "NOT_ENABLED";
    case DatabaseManagementStatus::FAILED_ENABLING:
      return "FAILED_ENABLING";
    case DatabaseManagementStatus::FAILED_DISABLING:
      return "FAILED_DISABLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatabaseManagementStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
