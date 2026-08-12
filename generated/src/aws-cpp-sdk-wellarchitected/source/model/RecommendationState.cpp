/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RecommendationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RecommendationStateMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

RecommendationState GetRecommendationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return RecommendationState::OPEN;
  } else if (hashCode == CLOSED_HASH) {
    return RecommendationState::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationState>(hashCode);
  }

  return RecommendationState::NOT_SET;
}

Aws::String GetNameForRecommendationState(RecommendationState enumValue) {
  switch (enumValue) {
    case RecommendationState::NOT_SET:
      return {};
    case RecommendationState::OPEN:
      return "OPEN";
    case RecommendationState::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationStateMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
