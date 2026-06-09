/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/RackUnitHeight.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace RackUnitHeightMapper {

static const int HEIGHT_42U_HASH = HashingUtils::HashString("HEIGHT_42U");
static const int HEIGHT_2U_HASH = HashingUtils::HashString("HEIGHT_2U");
static const int HEIGHT_1U_HASH = HashingUtils::HashString("HEIGHT_1U");

RackUnitHeight GetRackUnitHeightForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HEIGHT_42U_HASH) {
    return RackUnitHeight::HEIGHT_42U;
  } else if (hashCode == HEIGHT_2U_HASH) {
    return RackUnitHeight::HEIGHT_2U;
  } else if (hashCode == HEIGHT_1U_HASH) {
    return RackUnitHeight::HEIGHT_1U;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RackUnitHeight>(hashCode);
  }

  return RackUnitHeight::NOT_SET;
}

Aws::String GetNameForRackUnitHeight(RackUnitHeight enumValue) {
  switch (enumValue) {
    case RackUnitHeight::NOT_SET:
      return {};
    case RackUnitHeight::HEIGHT_42U:
      return "HEIGHT_42U";
    case RackUnitHeight::HEIGHT_2U:
      return "HEIGHT_2U";
    case RackUnitHeight::HEIGHT_1U:
      return "HEIGHT_1U";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RackUnitHeightMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
