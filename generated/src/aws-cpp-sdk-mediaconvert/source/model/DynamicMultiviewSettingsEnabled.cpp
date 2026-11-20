/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/DynamicMultiviewSettingsEnabled.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace DynamicMultiviewSettingsEnabledMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

DynamicMultiviewSettingsEnabled GetDynamicMultiviewSettingsEnabledForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return DynamicMultiviewSettingsEnabled::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return DynamicMultiviewSettingsEnabled::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DynamicMultiviewSettingsEnabled>(hashCode);
  }

  return DynamicMultiviewSettingsEnabled::NOT_SET;
}

Aws::String GetNameForDynamicMultiviewSettingsEnabled(DynamicMultiviewSettingsEnabled enumValue) {
  switch (enumValue) {
    case DynamicMultiviewSettingsEnabled::NOT_SET:
      return {};
    case DynamicMultiviewSettingsEnabled::DISABLED:
      return "DISABLED";
    case DynamicMultiviewSettingsEnabled::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DynamicMultiviewSettingsEnabledMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
