/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/SourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace SourceTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");
static const int BACKUP_FROM_ID_HASH = HashingUtils::HashString("BACKUP_FROM_ID");
static const int BACKUP_FROM_TIMESTAMP_HASH = HashingUtils::HashString("BACKUP_FROM_TIMESTAMP");
static const int CROSS_REGION_DATAGUARD_HASH = HashingUtils::HashString("CROSS_REGION_DATAGUARD");
static const int CROSS_REGION_DISASTER_RECOVERY_HASH = HashingUtils::HashString("CROSS_REGION_DISASTER_RECOVERY");
static const int CLONE_TO_REFRESHABLE_HASH = HashingUtils::HashString("CLONE_TO_REFRESHABLE");

SourceType GetSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return SourceType::NONE;
  } else if (hashCode == DATABASE_HASH) {
    return SourceType::DATABASE;
  } else if (hashCode == BACKUP_FROM_ID_HASH) {
    return SourceType::BACKUP_FROM_ID;
  } else if (hashCode == BACKUP_FROM_TIMESTAMP_HASH) {
    return SourceType::BACKUP_FROM_TIMESTAMP;
  } else if (hashCode == CROSS_REGION_DATAGUARD_HASH) {
    return SourceType::CROSS_REGION_DATAGUARD;
  } else if (hashCode == CROSS_REGION_DISASTER_RECOVERY_HASH) {
    return SourceType::CROSS_REGION_DISASTER_RECOVERY;
  } else if (hashCode == CLONE_TO_REFRESHABLE_HASH) {
    return SourceType::CLONE_TO_REFRESHABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceType>(hashCode);
  }

  return SourceType::NOT_SET;
}

Aws::String GetNameForSourceType(SourceType enumValue) {
  switch (enumValue) {
    case SourceType::NOT_SET:
      return {};
    case SourceType::NONE:
      return "NONE";
    case SourceType::DATABASE:
      return "DATABASE";
    case SourceType::BACKUP_FROM_ID:
      return "BACKUP_FROM_ID";
    case SourceType::BACKUP_FROM_TIMESTAMP:
      return "BACKUP_FROM_TIMESTAMP";
    case SourceType::CROSS_REGION_DATAGUARD:
      return "CROSS_REGION_DATAGUARD";
    case SourceType::CROSS_REGION_DISASTER_RECOVERY:
      return "CROSS_REGION_DISASTER_RECOVERY";
    case SourceType::CLONE_TO_REFRESHABLE:
      return "CLONE_TO_REFRESHABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
