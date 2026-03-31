/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightPriorityLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightPriorityLevelMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

InsightPriorityLevel GetInsightPriorityLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return InsightPriorityLevel::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return InsightPriorityLevel::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return InsightPriorityLevel::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return InsightPriorityLevel::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightPriorityLevel>(hashCode);
  }

  return InsightPriorityLevel::NOT_SET;
}

Aws::String GetNameForInsightPriorityLevel(InsightPriorityLevel enumValue) {
  switch (enumValue) {
    case InsightPriorityLevel::NOT_SET:
      return {};
    case InsightPriorityLevel::CRITICAL:
      return "CRITICAL";
    case InsightPriorityLevel::HIGH:
      return "HIGH";
    case InsightPriorityLevel::MEDIUM:
      return "MEDIUM";
    case InsightPriorityLevel::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightPriorityLevelMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
