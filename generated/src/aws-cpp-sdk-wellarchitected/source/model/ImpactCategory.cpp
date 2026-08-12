/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/ImpactCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace ImpactCategoryMapper {

static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

ImpactCategory GetImpactCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_HASH) {
    return ImpactCategory::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return ImpactCategory::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return ImpactCategory::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImpactCategory>(hashCode);
  }

  return ImpactCategory::NOT_SET;
}

Aws::String GetNameForImpactCategory(ImpactCategory enumValue) {
  switch (enumValue) {
    case ImpactCategory::NOT_SET:
      return {};
    case ImpactCategory::HIGH:
      return "HIGH";
    case ImpactCategory::MEDIUM:
      return "MEDIUM";
    case ImpactCategory::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImpactCategoryMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
