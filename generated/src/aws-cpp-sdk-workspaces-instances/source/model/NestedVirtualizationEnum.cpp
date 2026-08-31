/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-instances/model/NestedVirtualizationEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {
namespace NestedVirtualizationEnumMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

NestedVirtualizationEnum GetNestedVirtualizationEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return NestedVirtualizationEnum::enabled;
  } else if (hashCode == disabled_HASH) {
    return NestedVirtualizationEnum::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NestedVirtualizationEnum>(hashCode);
  }

  return NestedVirtualizationEnum::NOT_SET;
}

Aws::String GetNameForNestedVirtualizationEnum(NestedVirtualizationEnum enumValue) {
  switch (enumValue) {
    case NestedVirtualizationEnum::NOT_SET:
      return {};
    case NestedVirtualizationEnum::enabled:
      return "enabled";
    case NestedVirtualizationEnum::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NestedVirtualizationEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
