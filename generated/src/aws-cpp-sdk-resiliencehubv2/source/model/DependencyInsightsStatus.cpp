/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DependencyInsightsStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DependencyInsightsStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DependencyInsightsStatus GetDependencyInsightsStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return DependencyInsightsStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return DependencyInsightsStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return DependencyInsightsStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DependencyInsightsStatus>(hashCode);
  }

  return DependencyInsightsStatus::NOT_SET;
}

Aws::String GetNameForDependencyInsightsStatus(DependencyInsightsStatus enumValue) {
  switch (enumValue) {
    case DependencyInsightsStatus::NOT_SET:
      return {};
    case DependencyInsightsStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DependencyInsightsStatus::COMPLETED:
      return "COMPLETED";
    case DependencyInsightsStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DependencyInsightsStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
