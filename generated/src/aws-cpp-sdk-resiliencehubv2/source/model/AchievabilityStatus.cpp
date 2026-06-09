/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AchievabilityStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AchievabilityStatusMapper {

static const int ACHIEVABLE_HASH = HashingUtils::HashString("ACHIEVABLE");
static const int NOT_ACHIEVABLE_HASH = HashingUtils::HashString("NOT_ACHIEVABLE");

AchievabilityStatus GetAchievabilityStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACHIEVABLE_HASH) {
    return AchievabilityStatus::ACHIEVABLE;
  } else if (hashCode == NOT_ACHIEVABLE_HASH) {
    return AchievabilityStatus::NOT_ACHIEVABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AchievabilityStatus>(hashCode);
  }

  return AchievabilityStatus::NOT_SET;
}

Aws::String GetNameForAchievabilityStatus(AchievabilityStatus enumValue) {
  switch (enumValue) {
    case AchievabilityStatus::NOT_SET:
      return {};
    case AchievabilityStatus::ACHIEVABLE:
      return "ACHIEVABLE";
    case AchievabilityStatus::NOT_ACHIEVABLE:
      return "NOT_ACHIEVABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AchievabilityStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
