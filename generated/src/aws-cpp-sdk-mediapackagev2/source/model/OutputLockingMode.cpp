/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/OutputLockingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace OutputLockingModeMapper {

static const int EPOCH_LOCKED_HASH = HashingUtils::HashString("EPOCH_LOCKED");
static const int NON_EPOCH_LOCKED_HASH = HashingUtils::HashString("NON_EPOCH_LOCKED");

OutputLockingMode GetOutputLockingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EPOCH_LOCKED_HASH) {
    return OutputLockingMode::EPOCH_LOCKED;
  } else if (hashCode == NON_EPOCH_LOCKED_HASH) {
    return OutputLockingMode::NON_EPOCH_LOCKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputLockingMode>(hashCode);
  }

  return OutputLockingMode::NOT_SET;
}

Aws::String GetNameForOutputLockingMode(OutputLockingMode enumValue) {
  switch (enumValue) {
    case OutputLockingMode::NOT_SET:
      return {};
    case OutputLockingMode::EPOCH_LOCKED:
      return "EPOCH_LOCKED";
    case OutputLockingMode::NON_EPOCH_LOCKED:
      return "NON_EPOCH_LOCKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputLockingModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
