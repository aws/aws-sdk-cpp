/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/secretsmanager/model/SortByType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecretsManager {
namespace Model {
namespace SortByTypeMapper {

static const int created_date_HASH = HashingUtils::HashString("created-date");
static const int last_accessed_date_HASH = HashingUtils::HashString("last-accessed-date");
static const int last_changed_date_HASH = HashingUtils::HashString("last-changed-date");
static const int name_HASH = HashingUtils::HashString("name");

SortByType GetSortByTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == created_date_HASH) {
    return SortByType::created_date;
  } else if (hashCode == last_accessed_date_HASH) {
    return SortByType::last_accessed_date;
  } else if (hashCode == last_changed_date_HASH) {
    return SortByType::last_changed_date;
  } else if (hashCode == name_HASH) {
    return SortByType::name;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SortByType>(hashCode);
  }

  return SortByType::NOT_SET;
}

Aws::String GetNameForSortByType(SortByType enumValue) {
  switch (enumValue) {
    case SortByType::NOT_SET:
      return {};
    case SortByType::created_date:
      return "created-date";
    case SortByType::last_accessed_date:
      return "last-accessed-date";
    case SortByType::last_changed_date:
      return "last-changed-date";
    case SortByType::name:
      return "name";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SortByTypeMapper
}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
