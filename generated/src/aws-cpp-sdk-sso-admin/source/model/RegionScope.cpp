/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sso-admin/model/RegionScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSOAdmin {
namespace Model {
namespace RegionScopeMapper {

static const int CURRENT_REGION_HASH = HashingUtils::HashString("CURRENT_REGION");
static const int ALL_REGIONS_HASH = HashingUtils::HashString("ALL_REGIONS");

RegionScope GetRegionScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CURRENT_REGION_HASH) {
    return RegionScope::CURRENT_REGION;
  } else if (hashCode == ALL_REGIONS_HASH) {
    return RegionScope::ALL_REGIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegionScope>(hashCode);
  }

  return RegionScope::NOT_SET;
}

Aws::String GetNameForRegionScope(RegionScope enumValue) {
  switch (enumValue) {
    case RegionScope::NOT_SET:
      return {};
    case RegionScope::CURRENT_REGION:
      return "CURRENT_REGION";
    case RegionScope::ALL_REGIONS:
      return "ALL_REGIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegionScopeMapper
}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
