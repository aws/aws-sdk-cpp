/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace ResourceTypeMapper {

static const int MANUFACTURER_SUPPORT_HASH = HashingUtils::HashString("MANUFACTURER_SUPPORT");
static const int MANUFACTURER_INSTRUCTIONS_HASH = HashingUtils::HashString("MANUFACTURER_INSTRUCTIONS");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUFACTURER_SUPPORT_HASH) {
    return ResourceType::MANUFACTURER_SUPPORT;
  } else if (hashCode == MANUFACTURER_INSTRUCTIONS_HASH) {
    return ResourceType::MANUFACTURER_INSTRUCTIONS;
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
    case ResourceType::MANUFACTURER_SUPPORT:
      return "MANUFACTURER_SUPPORT";
    case ResourceType::MANUFACTURER_INSTRUCTIONS:
      return "MANUFACTURER_INSTRUCTIONS";
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
}  // namespace MarketplaceDiscovery
}  // namespace Aws
