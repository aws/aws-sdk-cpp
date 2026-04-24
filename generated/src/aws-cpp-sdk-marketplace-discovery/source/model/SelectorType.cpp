/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SelectorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SelectorTypeMapper {

static const int Duration_HASH = HashingUtils::HashString("Duration");

SelectorType GetSelectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Duration_HASH) {
    return SelectorType::Duration;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SelectorType>(hashCode);
  }

  return SelectorType::NOT_SET;
}

Aws::String GetNameForSelectorType(SelectorType enumValue) {
  switch (enumValue) {
    case SelectorType::NOT_SET:
      return {};
    case SelectorType::Duration:
      return "Duration";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SelectorTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
