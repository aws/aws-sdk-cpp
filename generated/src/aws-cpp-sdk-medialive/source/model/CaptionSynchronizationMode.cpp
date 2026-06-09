/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/CaptionSynchronizationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace CaptionSynchronizationModeMapper {

static const int NO_VIDEO_DELAY_HASH = HashingUtils::HashString("NO_VIDEO_DELAY");
static const int VIDEO_ALIGNED_CAPTIONS_HASH = HashingUtils::HashString("VIDEO_ALIGNED_CAPTIONS");

CaptionSynchronizationMode GetCaptionSynchronizationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NO_VIDEO_DELAY_HASH) {
    return CaptionSynchronizationMode::NO_VIDEO_DELAY;
  } else if (hashCode == VIDEO_ALIGNED_CAPTIONS_HASH) {
    return CaptionSynchronizationMode::VIDEO_ALIGNED_CAPTIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CaptionSynchronizationMode>(hashCode);
  }

  return CaptionSynchronizationMode::NOT_SET;
}

Aws::String GetNameForCaptionSynchronizationMode(CaptionSynchronizationMode enumValue) {
  switch (enumValue) {
    case CaptionSynchronizationMode::NOT_SET:
      return {};
    case CaptionSynchronizationMode::NO_VIDEO_DELAY:
      return "NO_VIDEO_DELAY";
    case CaptionSynchronizationMode::VIDEO_ALIGNED_CAPTIONS:
      return "VIDEO_ALIGNED_CAPTIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CaptionSynchronizationModeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
