/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/model/UseSourceMultiRegionKeyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {
namespace UseSourceMultiRegionKeyStatusMapper {

static const int Enabled_HASH = HashingUtils::HashString("Enabled");
static const int Disabled_HASH = HashingUtils::HashString("Disabled");

UseSourceMultiRegionKeyStatus GetUseSourceMultiRegionKeyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Enabled_HASH) {
    return UseSourceMultiRegionKeyStatus::Enabled;
  } else if (hashCode == Disabled_HASH) {
    return UseSourceMultiRegionKeyStatus::Disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UseSourceMultiRegionKeyStatus>(hashCode);
  }

  return UseSourceMultiRegionKeyStatus::NOT_SET;
}

Aws::String GetNameForUseSourceMultiRegionKeyStatus(UseSourceMultiRegionKeyStatus enumValue) {
  switch (enumValue) {
    case UseSourceMultiRegionKeyStatus::NOT_SET:
      return {};
    case UseSourceMultiRegionKeyStatus::Enabled:
      return "Enabled";
    case UseSourceMultiRegionKeyStatus::Disabled:
      return "Disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UseSourceMultiRegionKeyStatusMapper
}  // namespace Model
}  // namespace S3
}  // namespace Aws
