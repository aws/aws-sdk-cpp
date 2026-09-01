/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/AacPassthroughControl.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace AacPassthroughControlMapper {

static const int WHEN_POSSIBLE_HASH = HashingUtils::HashString("WHEN_POSSIBLE");
static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");

AacPassthroughControl GetAacPassthroughControlForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WHEN_POSSIBLE_HASH) {
    return AacPassthroughControl::WHEN_POSSIBLE;
  } else if (hashCode == NO_PASSTHROUGH_HASH) {
    return AacPassthroughControl::NO_PASSTHROUGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AacPassthroughControl>(hashCode);
  }

  return AacPassthroughControl::NOT_SET;
}

Aws::String GetNameForAacPassthroughControl(AacPassthroughControl enumValue) {
  switch (enumValue) {
    case AacPassthroughControl::NOT_SET:
      return {};
    case AacPassthroughControl::WHEN_POSSIBLE:
      return "WHEN_POSSIBLE";
    case AacPassthroughControl::NO_PASSTHROUGH:
      return "NO_PASSTHROUGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AacPassthroughControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
