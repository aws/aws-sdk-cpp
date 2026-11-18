/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/AnalyticsMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace AnalyticsModeMapper {

static const int CROSS_REGION_HASH = HashingUtils::HashString("CROSS_REGION");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AnalyticsMode GetAnalyticsModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CROSS_REGION_HASH) {
    return AnalyticsMode::CROSS_REGION;
  } else if (hashCode == DISABLED_HASH) {
    return AnalyticsMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalyticsMode>(hashCode);
  }

  return AnalyticsMode::NOT_SET;
}

Aws::String GetNameForAnalyticsMode(AnalyticsMode enumValue) {
  switch (enumValue) {
    case AnalyticsMode::NOT_SET:
      return {};
    case AnalyticsMode::CROSS_REGION:
      return "CROSS_REGION";
    case AnalyticsMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalyticsModeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
