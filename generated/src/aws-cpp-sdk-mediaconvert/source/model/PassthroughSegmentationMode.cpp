/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/PassthroughSegmentationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace PassthroughSegmentationModeMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int DURATION_BASED_HASH = HashingUtils::HashString("DURATION_BASED");
static const int GOP_COUNT_HASH = HashingUtils::HashString("GOP_COUNT");

PassthroughSegmentationMode GetPassthroughSegmentationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return PassthroughSegmentationMode::AUTO;
  } else if (hashCode == DURATION_BASED_HASH) {
    return PassthroughSegmentationMode::DURATION_BASED;
  } else if (hashCode == GOP_COUNT_HASH) {
    return PassthroughSegmentationMode::GOP_COUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PassthroughSegmentationMode>(hashCode);
  }

  return PassthroughSegmentationMode::NOT_SET;
}

Aws::String GetNameForPassthroughSegmentationMode(PassthroughSegmentationMode enumValue) {
  switch (enumValue) {
    case PassthroughSegmentationMode::NOT_SET:
      return {};
    case PassthroughSegmentationMode::AUTO:
      return "AUTO";
    case PassthroughSegmentationMode::DURATION_BASED:
      return "DURATION_BASED";
    case PassthroughSegmentationMode::GOP_COUNT:
      return "GOP_COUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PassthroughSegmentationModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
