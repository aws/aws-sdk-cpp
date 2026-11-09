/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/MigrationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace MigrationTypeMapper {

static const int start_HASH = HashingUtils::HashString("start");
static const int sync_HASH = HashingUtils::HashString("sync");

MigrationType GetMigrationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == start_HASH) {
    return MigrationType::start;
  } else if (hashCode == sync_HASH) {
    return MigrationType::sync;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MigrationType>(hashCode);
  }

  return MigrationType::NOT_SET;
}

Aws::String GetNameForMigrationType(MigrationType enumValue) {
  switch (enumValue) {
    case MigrationType::NOT_SET:
      return {};
    case MigrationType::start:
      return "start";
    case MigrationType::sync:
      return "sync";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MigrationTypeMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
