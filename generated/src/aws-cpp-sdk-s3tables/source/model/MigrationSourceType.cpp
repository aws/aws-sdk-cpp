/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/MigrationSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace MigrationSourceTypeMapper {

static const int glueTable_HASH = HashingUtils::HashString("glueTable");

MigrationSourceType GetMigrationSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == glueTable_HASH) {
    return MigrationSourceType::glueTable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MigrationSourceType>(hashCode);
  }

  return MigrationSourceType::NOT_SET;
}

Aws::String GetNameForMigrationSourceType(MigrationSourceType enumValue) {
  switch (enumValue) {
    case MigrationSourceType::NOT_SET:
      return {};
    case MigrationSourceType::glueTable:
      return "glueTable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MigrationSourceTypeMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
