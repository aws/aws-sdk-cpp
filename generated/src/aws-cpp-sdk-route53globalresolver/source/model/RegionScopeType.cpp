/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/RegionScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace RegionScopeTypeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");

RegionScopeType GetRegionScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return RegionScopeType::ALL;
  } else if (hashCode == REGIONAL_HASH) {
    return RegionScopeType::REGIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegionScopeType>(hashCode);
  }

  return RegionScopeType::NOT_SET;
}

Aws::String GetNameForRegionScopeType(RegionScopeType enumValue) {
  switch (enumValue) {
    case RegionScopeType::NOT_SET:
      return {};
    case RegionScopeType::ALL:
      return "ALL";
    case RegionScopeType::REGIONAL:
      return "REGIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegionScopeTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
