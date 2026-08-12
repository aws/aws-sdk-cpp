/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ResourceTypeMapper {

static const int INDEX_STORAGE_HASH = HashingUtils::HashString("INDEX_STORAGE");
static const int AGENT_HOURS_HASH = HashingUtils::HashString("AGENT_HOURS");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INDEX_STORAGE_HASH) {
    return ResourceType::INDEX_STORAGE;
  } else if (hashCode == AGENT_HOURS_HASH) {
    return ResourceType::AGENT_HOURS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::INDEX_STORAGE:
      return "INDEX_STORAGE";
    case ResourceType::AGENT_HOURS:
      return "AGENT_HOURS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
