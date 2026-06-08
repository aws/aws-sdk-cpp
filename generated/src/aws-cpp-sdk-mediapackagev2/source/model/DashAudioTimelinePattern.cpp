/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/DashAudioTimelinePattern.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace DashAudioTimelinePatternMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int PATTERNED_HASH = HashingUtils::HashString("PATTERNED");

DashAudioTimelinePattern GetDashAudioTimelinePatternForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return DashAudioTimelinePattern::NONE;
  } else if (hashCode == PATTERNED_HASH) {
    return DashAudioTimelinePattern::PATTERNED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DashAudioTimelinePattern>(hashCode);
  }

  return DashAudioTimelinePattern::NOT_SET;
}

Aws::String GetNameForDashAudioTimelinePattern(DashAudioTimelinePattern enumValue) {
  switch (enumValue) {
    case DashAudioTimelinePattern::NOT_SET:
      return {};
    case DashAudioTimelinePattern::NONE:
      return "NONE";
    case DashAudioTimelinePattern::PATTERNED:
      return "PATTERNED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DashAudioTimelinePatternMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
