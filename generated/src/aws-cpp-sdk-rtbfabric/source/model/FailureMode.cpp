/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/FailureMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace FailureModeMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

FailureMode GetFailureModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return FailureMode::OPEN;
  } else if (hashCode == CLOSED_HASH) {
    return FailureMode::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FailureMode>(hashCode);
  }

  return FailureMode::NOT_SET;
}

Aws::String GetNameForFailureMode(FailureMode enumValue) {
  switch (enumValue) {
    case FailureMode::NOT_SET:
      return {};
    case FailureMode::OPEN:
      return "OPEN";
    case FailureMode::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FailureModeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
