/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/VideoSelectorMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace VideoSelectorModeMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int REMUX_ALL_HASH = HashingUtils::HashString("REMUX_ALL");

VideoSelectorMode GetVideoSelectorModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return VideoSelectorMode::AUTO;
  } else if (hashCode == REMUX_ALL_HASH) {
    return VideoSelectorMode::REMUX_ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VideoSelectorMode>(hashCode);
  }

  return VideoSelectorMode::NOT_SET;
}

Aws::String GetNameForVideoSelectorMode(VideoSelectorMode enumValue) {
  switch (enumValue) {
    case VideoSelectorMode::NOT_SET:
      return {};
    case VideoSelectorMode::AUTO:
      return "AUTO";
    case VideoSelectorMode::REMUX_ALL:
      return "REMUX_ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VideoSelectorModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
