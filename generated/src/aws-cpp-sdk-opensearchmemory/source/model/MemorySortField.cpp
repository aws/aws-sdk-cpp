/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/MemorySortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace MemorySortFieldMapper {

static const int CREATED_AT_HASH = HashingUtils::HashString("CREATED_AT");
static const int UPDATED_AT_HASH = HashingUtils::HashString("UPDATED_AT");

MemorySortField GetMemorySortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_AT_HASH) {
    return MemorySortField::CREATED_AT;
  } else if (hashCode == UPDATED_AT_HASH) {
    return MemorySortField::UPDATED_AT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MemorySortField>(hashCode);
  }

  return MemorySortField::NOT_SET;
}

Aws::String GetNameForMemorySortField(MemorySortField enumValue) {
  switch (enumValue) {
    case MemorySortField::NOT_SET:
      return {};
    case MemorySortField::CREATED_AT:
      return "CREATED_AT";
    case MemorySortField::UPDATED_AT:
      return "UPDATED_AT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MemorySortFieldMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
