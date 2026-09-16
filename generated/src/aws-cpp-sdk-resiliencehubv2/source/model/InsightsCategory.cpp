/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/InsightsCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace InsightsCategoryMapper {

static const int CROSS_REGION_HASH = HashingUtils::HashString("CROSS_REGION");
static const int NEW_DEPENDENCY_HASH = HashingUtils::HashString("NEW_DEPENDENCY");
static const int THIRD_PARTY_HASH = HashingUtils::HashString("THIRD_PARTY");
static const int UNEVEN_USAGE_HASH = HashingUtils::HashString("UNEVEN_USAGE");
static const int AWS_SERVICE_HASH = HashingUtils::HashString("AWS_SERVICE");

InsightsCategory GetInsightsCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CROSS_REGION_HASH) {
    return InsightsCategory::CROSS_REGION;
  } else if (hashCode == NEW_DEPENDENCY_HASH) {
    return InsightsCategory::NEW_DEPENDENCY;
  } else if (hashCode == THIRD_PARTY_HASH) {
    return InsightsCategory::THIRD_PARTY;
  } else if (hashCode == UNEVEN_USAGE_HASH) {
    return InsightsCategory::UNEVEN_USAGE;
  } else if (hashCode == AWS_SERVICE_HASH) {
    return InsightsCategory::AWS_SERVICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightsCategory>(hashCode);
  }

  return InsightsCategory::NOT_SET;
}

Aws::String GetNameForInsightsCategory(InsightsCategory enumValue) {
  switch (enumValue) {
    case InsightsCategory::NOT_SET:
      return {};
    case InsightsCategory::CROSS_REGION:
      return "CROSS_REGION";
    case InsightsCategory::NEW_DEPENDENCY:
      return "NEW_DEPENDENCY";
    case InsightsCategory::THIRD_PARTY:
      return "THIRD_PARTY";
    case InsightsCategory::UNEVEN_USAGE:
      return "UNEVEN_USAGE";
    case InsightsCategory::AWS_SERVICE:
      return "AWS_SERVICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightsCategoryMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
