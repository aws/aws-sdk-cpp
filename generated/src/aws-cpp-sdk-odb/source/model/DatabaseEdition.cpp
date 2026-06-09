/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DatabaseEdition.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DatabaseEditionMapper {

static const int STANDARD_EDITION_HASH = HashingUtils::HashString("STANDARD_EDITION");
static const int ENTERPRISE_EDITION_HASH = HashingUtils::HashString("ENTERPRISE_EDITION");

DatabaseEdition GetDatabaseEditionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_EDITION_HASH) {
    return DatabaseEdition::STANDARD_EDITION;
  } else if (hashCode == ENTERPRISE_EDITION_HASH) {
    return DatabaseEdition::ENTERPRISE_EDITION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatabaseEdition>(hashCode);
  }

  return DatabaseEdition::NOT_SET;
}

Aws::String GetNameForDatabaseEdition(DatabaseEdition enumValue) {
  switch (enumValue) {
    case DatabaseEdition::NOT_SET:
      return {};
    case DatabaseEdition::STANDARD_EDITION:
      return "STANDARD_EDITION";
    case DatabaseEdition::ENTERPRISE_EDITION:
      return "ENTERPRISE_EDITION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatabaseEditionMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
