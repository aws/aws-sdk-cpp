﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehub/model/RecommendationComplianceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ResilienceHub {
namespace Model {
namespace RecommendationComplianceStatusMapper {

static const int BreachedUnattainable_HASH = HashingUtils::HashString("BreachedUnattainable");
static const int BreachedCanMeet_HASH = HashingUtils::HashString("BreachedCanMeet");
static const int MetCanImprove_HASH = HashingUtils::HashString("MetCanImprove");
static const int MissingPolicy_HASH = HashingUtils::HashString("MissingPolicy");

RecommendationComplianceStatus GetRecommendationComplianceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BreachedUnattainable_HASH) {
    return RecommendationComplianceStatus::BreachedUnattainable;
  } else if (hashCode == BreachedCanMeet_HASH) {
    return RecommendationComplianceStatus::BreachedCanMeet;
  } else if (hashCode == MetCanImprove_HASH) {
    return RecommendationComplianceStatus::MetCanImprove;
  } else if (hashCode == MissingPolicy_HASH) {
    return RecommendationComplianceStatus::MissingPolicy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationComplianceStatus>(hashCode);
  }

  return RecommendationComplianceStatus::NOT_SET;
}

Aws::String GetNameForRecommendationComplianceStatus(RecommendationComplianceStatus enumValue) {
  switch (enumValue) {
    case RecommendationComplianceStatus::NOT_SET:
      return {};
    case RecommendationComplianceStatus::BreachedUnattainable:
      return "BreachedUnattainable";
    case RecommendationComplianceStatus::BreachedCanMeet:
      return "BreachedCanMeet";
    case RecommendationComplianceStatus::MetCanImprove:
      return "MetCanImprove";
    case RecommendationComplianceStatus::MissingPolicy:
      return "MissingPolicy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationComplianceStatusMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
