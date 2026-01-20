/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-instances/model/InstanceConfigurationTenancyEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {
namespace InstanceConfigurationTenancyEnumMapper {

static const int SHARED_HASH = HashingUtils::HashString("SHARED");
static const int DEDICATED_HASH = HashingUtils::HashString("DEDICATED");

InstanceConfigurationTenancyEnum GetInstanceConfigurationTenancyEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARED_HASH) {
    return InstanceConfigurationTenancyEnum::SHARED;
  } else if (hashCode == DEDICATED_HASH) {
    return InstanceConfigurationTenancyEnum::DEDICATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceConfigurationTenancyEnum>(hashCode);
  }

  return InstanceConfigurationTenancyEnum::NOT_SET;
}

Aws::String GetNameForInstanceConfigurationTenancyEnum(InstanceConfigurationTenancyEnum enumValue) {
  switch (enumValue) {
    case InstanceConfigurationTenancyEnum::NOT_SET:
      return {};
    case InstanceConfigurationTenancyEnum::SHARED:
      return "SHARED";
    case InstanceConfigurationTenancyEnum::DEDICATED:
      return "DEDICATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceConfigurationTenancyEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
