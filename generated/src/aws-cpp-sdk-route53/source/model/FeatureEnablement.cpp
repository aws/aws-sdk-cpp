/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/FeatureEnablement.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace FeatureEnablementMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

FeatureEnablement GetFeatureEnablementForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return FeatureEnablement::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return FeatureEnablement::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeatureEnablement>(hashCode);
  }

  return FeatureEnablement::NOT_SET;
}

Aws::String GetNameForFeatureEnablement(FeatureEnablement enumValue) {
  switch (enumValue) {
    case FeatureEnablement::NOT_SET:
      return {};
    case FeatureEnablement::ENABLED:
      return "ENABLED";
    case FeatureEnablement::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeatureEnablementMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
