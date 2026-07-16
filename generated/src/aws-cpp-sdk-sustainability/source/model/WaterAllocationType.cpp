/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sustainability/model/WaterAllocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {
namespace WaterAllocationTypeMapper {

static const int TOTAL_WATER_WITHDRAWALS_HASH = HashingUtils::HashString("TOTAL_WATER_WITHDRAWALS");

WaterAllocationType GetWaterAllocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOTAL_WATER_WITHDRAWALS_HASH) {
    return WaterAllocationType::TOTAL_WATER_WITHDRAWALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WaterAllocationType>(hashCode);
  }

  return WaterAllocationType::NOT_SET;
}

Aws::String GetNameForWaterAllocationType(WaterAllocationType enumValue) {
  switch (enumValue) {
    case WaterAllocationType::NOT_SET:
      return {};
    case WaterAllocationType::TOTAL_WATER_WITHDRAWALS:
      return "TOTAL_WATER_WITHDRAWALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WaterAllocationTypeMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
