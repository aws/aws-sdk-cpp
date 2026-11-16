/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/PreferenceKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace PreferenceKeyMapper {

static const int ORG_INTEGRATION_HASH = HashingUtils::HashString("ORG_INTEGRATION");

PreferenceKey GetPreferenceKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORG_INTEGRATION_HASH) {
    return PreferenceKey::ORG_INTEGRATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreferenceKey>(hashCode);
  }

  return PreferenceKey::NOT_SET;
}

Aws::String GetNameForPreferenceKey(PreferenceKey enumValue) {
  switch (enumValue) {
    case PreferenceKey::NOT_SET:
      return {};
    case PreferenceKey::ORG_INTEGRATION:
      return "ORG_INTEGRATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreferenceKeyMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
