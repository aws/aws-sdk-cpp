/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/PreferenceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace PreferenceStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

PreferenceStatus GetPreferenceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return PreferenceStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return PreferenceStatus::DISABLED;
  } else if (hashCode == FAILED_HASH) {
    return PreferenceStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreferenceStatus>(hashCode);
  }

  return PreferenceStatus::NOT_SET;
}

Aws::String GetNameForPreferenceStatus(PreferenceStatus enumValue) {
  switch (enumValue) {
    case PreferenceStatus::NOT_SET:
      return {};
    case PreferenceStatus::ENABLED:
      return "ENABLED";
    case PreferenceStatus::DISABLED:
      return "DISABLED";
    case PreferenceStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreferenceStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
