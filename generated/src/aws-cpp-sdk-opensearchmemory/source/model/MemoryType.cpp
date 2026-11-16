/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/MemoryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace MemoryTypeMapper {

static const int SEMANTIC_HASH = HashingUtils::HashString("SEMANTIC");
static const int SUMMARY_HASH = HashingUtils::HashString("SUMMARY");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");

MemoryType GetMemoryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SEMANTIC_HASH) {
    return MemoryType::SEMANTIC;
  } else if (hashCode == SUMMARY_HASH) {
    return MemoryType::SUMMARY;
  } else if (hashCode == CUSTOM_HASH) {
    return MemoryType::CUSTOM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MemoryType>(hashCode);
  }

  return MemoryType::NOT_SET;
}

Aws::String GetNameForMemoryType(MemoryType enumValue) {
  switch (enumValue) {
    case MemoryType::NOT_SET:
      return {};
    case MemoryType::SEMANTIC:
      return "SEMANTIC";
    case MemoryType::SUMMARY:
      return "SUMMARY";
    case MemoryType::CUSTOM:
      return "CUSTOM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MemoryTypeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
