/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptunedata/model/RebuildStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {
namespace RebuildStatusMapper {

static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
static const int REBUILDING_HASH = HashingUtils::HashString("REBUILDING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");

RebuildStatus GetRebuildStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREPARING_HASH) {
    return RebuildStatus::PREPARING;
  } else if (hashCode == REBUILDING_HASH) {
    return RebuildStatus::REBUILDING;
  } else if (hashCode == COMPLETED_HASH) {
    return RebuildStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return RebuildStatus::FAILED;
  } else if (hashCode == CANCELLED_HASH) {
    return RebuildStatus::CANCELLED;
  } else if (hashCode == CANCELLING_HASH) {
    return RebuildStatus::CANCELLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RebuildStatus>(hashCode);
  }

  return RebuildStatus::NOT_SET;
}

Aws::String GetNameForRebuildStatus(RebuildStatus enumValue) {
  switch (enumValue) {
    case RebuildStatus::NOT_SET:
      return {};
    case RebuildStatus::PREPARING:
      return "PREPARING";
    case RebuildStatus::REBUILDING:
      return "REBUILDING";
    case RebuildStatus::COMPLETED:
      return "COMPLETED";
    case RebuildStatus::FAILED:
      return "FAILED";
    case RebuildStatus::CANCELLED:
      return "CANCELLED";
    case RebuildStatus::CANCELLING:
      return "CANCELLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RebuildStatusMapper
}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
