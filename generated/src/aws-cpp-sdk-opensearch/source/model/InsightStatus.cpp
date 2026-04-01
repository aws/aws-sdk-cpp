/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
static const int DISMISSED_HASH = HashingUtils::HashString("DISMISSED");

InsightStatus GetInsightStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return InsightStatus::ACTIVE;
  } else if (hashCode == RESOLVED_HASH) {
    return InsightStatus::RESOLVED;
  } else if (hashCode == DISMISSED_HASH) {
    return InsightStatus::DISMISSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightStatus>(hashCode);
  }

  return InsightStatus::NOT_SET;
}

Aws::String GetNameForInsightStatus(InsightStatus enumValue) {
  switch (enumValue) {
    case InsightStatus::NOT_SET:
      return {};
    case InsightStatus::ACTIVE:
      return "ACTIVE";
    case InsightStatus::RESOLVED:
      return "RESOLVED";
    case InsightStatus::DISMISSED:
      return "DISMISSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
