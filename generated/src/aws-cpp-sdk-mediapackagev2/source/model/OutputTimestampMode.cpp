/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/OutputTimestampMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace OutputTimestampModeMapper {

static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
static const int REBASED_TO_CHANNEL_START_HASH = HashingUtils::HashString("REBASED_TO_CHANNEL_START");

OutputTimestampMode GetOutputTimestampModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASSTHROUGH_HASH) {
    return OutputTimestampMode::PASSTHROUGH;
  } else if (hashCode == REBASED_TO_CHANNEL_START_HASH) {
    return OutputTimestampMode::REBASED_TO_CHANNEL_START;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputTimestampMode>(hashCode);
  }

  return OutputTimestampMode::NOT_SET;
}

Aws::String GetNameForOutputTimestampMode(OutputTimestampMode enumValue) {
  switch (enumValue) {
    case OutputTimestampMode::NOT_SET:
      return {};
    case OutputTimestampMode::PASSTHROUGH:
      return "PASSTHROUGH";
    case OutputTimestampMode::REBASED_TO_CHANNEL_START:
      return "REBASED_TO_CHANNEL_START";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputTimestampModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
