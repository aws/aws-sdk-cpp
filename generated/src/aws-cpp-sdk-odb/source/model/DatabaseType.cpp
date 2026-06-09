/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DatabaseType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DatabaseTypeMapper {

static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
static const int CLONE_HASH = HashingUtils::HashString("CLONE");

DatabaseType GetDatabaseTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGULAR_HASH) {
    return DatabaseType::REGULAR;
  } else if (hashCode == CLONE_HASH) {
    return DatabaseType::CLONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatabaseType>(hashCode);
  }

  return DatabaseType::NOT_SET;
}

Aws::String GetNameForDatabaseType(DatabaseType enumValue) {
  switch (enumValue) {
    case DatabaseType::NOT_SET:
      return {};
    case DatabaseType::REGULAR:
      return "REGULAR";
    case DatabaseType::CLONE:
      return "CLONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatabaseTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
