/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/FeatureName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace FeatureNameMapper {

static const int NETWORK_SCANNING_HASH = HashingUtils::HashString("NETWORK_SCANNING");

FeatureName GetFeatureNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NETWORK_SCANNING_HASH) {
    return FeatureName::NETWORK_SCANNING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeatureName>(hashCode);
  }

  return FeatureName::NOT_SET;
}

Aws::String GetNameForFeatureName(FeatureName enumValue) {
  switch (enumValue) {
    case FeatureName::NOT_SET:
      return {};
    case FeatureName::NETWORK_SCANNING:
      return "NETWORK_SCANNING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeatureNameMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
