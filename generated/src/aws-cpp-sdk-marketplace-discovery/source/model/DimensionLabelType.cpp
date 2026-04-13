/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/DimensionLabelType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace DimensionLabelTypeMapper {

static const int Region_HASH = HashingUtils::HashString("Region");
static const int SagemakerOption_HASH = HashingUtils::HashString("SagemakerOption");

DimensionLabelType GetDimensionLabelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Region_HASH) {
    return DimensionLabelType::Region;
  } else if (hashCode == SagemakerOption_HASH) {
    return DimensionLabelType::SagemakerOption;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DimensionLabelType>(hashCode);
  }

  return DimensionLabelType::NOT_SET;
}

Aws::String GetNameForDimensionLabelType(DimensionLabelType enumValue) {
  switch (enumValue) {
    case DimensionLabelType::NOT_SET:
      return {};
    case DimensionLabelType::Region:
      return "Region";
    case DimensionLabelType::SagemakerOption:
      return "SagemakerOption";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DimensionLabelTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
