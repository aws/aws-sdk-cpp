/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/AutonomousDatabaseBackupType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace AutonomousDatabaseBackupTypeMapper {

static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");
static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int LONGTERM_HASH = HashingUtils::HashString("LONGTERM");
static const int VIRTUAL_FULL_HASH = HashingUtils::HashString("VIRTUAL_FULL");
static const int CUMULATIVE_INCREMENTAL_HASH = HashingUtils::HashString("CUMULATIVE_INCREMENTAL");
static const int ROLL_FORWARD_IMAGE_COPY_HASH = HashingUtils::HashString("ROLL_FORWARD_IMAGE_COPY");

AutonomousDatabaseBackupType GetAutonomousDatabaseBackupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCREMENTAL_HASH) {
    return AutonomousDatabaseBackupType::INCREMENTAL;
  } else if (hashCode == FULL_HASH) {
    return AutonomousDatabaseBackupType::FULL;
  } else if (hashCode == LONGTERM_HASH) {
    return AutonomousDatabaseBackupType::LONGTERM;
  } else if (hashCode == VIRTUAL_FULL_HASH) {
    return AutonomousDatabaseBackupType::VIRTUAL_FULL;
  } else if (hashCode == CUMULATIVE_INCREMENTAL_HASH) {
    return AutonomousDatabaseBackupType::CUMULATIVE_INCREMENTAL;
  } else if (hashCode == ROLL_FORWARD_IMAGE_COPY_HASH) {
    return AutonomousDatabaseBackupType::ROLL_FORWARD_IMAGE_COPY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutonomousDatabaseBackupType>(hashCode);
  }

  return AutonomousDatabaseBackupType::NOT_SET;
}

Aws::String GetNameForAutonomousDatabaseBackupType(AutonomousDatabaseBackupType enumValue) {
  switch (enumValue) {
    case AutonomousDatabaseBackupType::NOT_SET:
      return {};
    case AutonomousDatabaseBackupType::INCREMENTAL:
      return "INCREMENTAL";
    case AutonomousDatabaseBackupType::FULL:
      return "FULL";
    case AutonomousDatabaseBackupType::LONGTERM:
      return "LONGTERM";
    case AutonomousDatabaseBackupType::VIRTUAL_FULL:
      return "VIRTUAL_FULL";
    case AutonomousDatabaseBackupType::CUMULATIVE_INCREMENTAL:
      return "CUMULATIVE_INCREMENTAL";
    case AutonomousDatabaseBackupType::ROLL_FORWARD_IMAGE_COPY:
      return "ROLL_FORWARD_IMAGE_COPY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutonomousDatabaseBackupTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
