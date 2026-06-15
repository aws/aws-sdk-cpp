/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/LastKnownCheckStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace LastKnownCheckStatusMapper {

static const int PASSED_HASH = HashingUtils::HashString("PASSED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");

LastKnownCheckStatus GetLastKnownCheckStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASSED_HASH) {
    return LastKnownCheckStatus::PASSED;
  } else if (hashCode == FAILED_HASH) {
    return LastKnownCheckStatus::FAILED;
  } else if (hashCode == PENDING_HASH) {
    return LastKnownCheckStatus::PENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LastKnownCheckStatus>(hashCode);
  }

  return LastKnownCheckStatus::NOT_SET;
}

Aws::String GetNameForLastKnownCheckStatus(LastKnownCheckStatus enumValue) {
  switch (enumValue) {
    case LastKnownCheckStatus::NOT_SET:
      return {};
    case LastKnownCheckStatus::PASSED:
      return "PASSED";
    case LastKnownCheckStatus::FAILED:
      return "FAILED";
    case LastKnownCheckStatus::PENDING:
      return "PENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LastKnownCheckStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
