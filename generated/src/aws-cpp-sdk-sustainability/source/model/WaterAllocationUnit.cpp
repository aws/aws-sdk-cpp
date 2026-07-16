/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sustainability/model/WaterAllocationUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {
namespace WaterAllocationUnitMapper {

static const int m3_HASH = HashingUtils::HashString("m3");

WaterAllocationUnit GetWaterAllocationUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == m3_HASH) {
    return WaterAllocationUnit::m3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WaterAllocationUnit>(hashCode);
  }

  return WaterAllocationUnit::NOT_SET;
}

Aws::String GetNameForWaterAllocationUnit(WaterAllocationUnit enumValue) {
  switch (enumValue) {
    case WaterAllocationUnit::NOT_SET:
      return {};
    case WaterAllocationUnit::m3:
      return "m3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WaterAllocationUnitMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
