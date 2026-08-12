/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RiskRating.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RiskRatingMapper {

static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");

RiskRating GetRiskRatingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOW_HASH) {
    return RiskRating::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return RiskRating::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return RiskRating::HIGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RiskRating>(hashCode);
  }

  return RiskRating::NOT_SET;
}

Aws::String GetNameForRiskRating(RiskRating enumValue) {
  switch (enumValue) {
    case RiskRating::NOT_SET:
      return {};
    case RiskRating::LOW:
      return "LOW";
    case RiskRating::MEDIUM:
      return "MEDIUM";
    case RiskRating::HIGH:
      return "HIGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RiskRatingMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
