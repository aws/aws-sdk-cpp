/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/PreferenceState.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace PreferenceStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

PreferenceState GetPreferenceStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return PreferenceState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return PreferenceState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreferenceState>(hashCode);
  }

  return PreferenceState::NOT_SET;
}

Aws::String GetNameForPreferenceState(PreferenceState enumValue) {
  switch (enumValue) {
    case PreferenceState::NOT_SET:
      return {};
    case PreferenceState::ENABLED:
      return "ENABLED";
    case PreferenceState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreferenceStateMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
