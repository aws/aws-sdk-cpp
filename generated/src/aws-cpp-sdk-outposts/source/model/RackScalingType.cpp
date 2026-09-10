/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/RackScalingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace RackScalingTypeMapper {

static const int SINGLE_RACK_HASH = HashingUtils::HashString("SINGLE_RACK");
static const int MULTI_RACK_HASH = HashingUtils::HashString("MULTI_RACK");

RackScalingType GetRackScalingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SINGLE_RACK_HASH) {
    return RackScalingType::SINGLE_RACK;
  } else if (hashCode == MULTI_RACK_HASH) {
    return RackScalingType::MULTI_RACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RackScalingType>(hashCode);
  }

  return RackScalingType::NOT_SET;
}

Aws::String GetNameForRackScalingType(RackScalingType enumValue) {
  switch (enumValue) {
    case RackScalingType::NOT_SET:
      return {};
    case RackScalingType::SINGLE_RACK:
      return "SINGLE_RACK";
    case RackScalingType::MULTI_RACK:
      return "MULTI_RACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RackScalingTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
