/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RecommendationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RecommendationTypeMapper {

static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
static const int ARCHITECTURE_HASH = HashingUtils::HashString("ARCHITECTURE");
static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");

RecommendationType GetRecommendationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_HASH) {
    return RecommendationType::RESOURCE;
  } else if (hashCode == ARCHITECTURE_HASH) {
    return RecommendationType::ARCHITECTURE;
  } else if (hashCode == APPLICATION_HASH) {
    return RecommendationType::APPLICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationType>(hashCode);
  }

  return RecommendationType::NOT_SET;
}

Aws::String GetNameForRecommendationType(RecommendationType enumValue) {
  switch (enumValue) {
    case RecommendationType::NOT_SET:
      return {};
    case RecommendationType::RESOURCE:
      return "RESOURCE";
    case RecommendationType::ARCHITECTURE:
      return "ARCHITECTURE";
    case RecommendationType::APPLICATION:
      return "APPLICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
