/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ModuleVersionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ModuleVersionStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");

ModuleVersionStatus GetModuleVersionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ModuleVersionStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return ModuleVersionStatus::CREATE_FAILED;
  } else if (hashCode == ACTIVE_HASH) {
    return ModuleVersionStatus::ACTIVE;
  } else if (hashCode == DEPRECATED_HASH) {
    return ModuleVersionStatus::DEPRECATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModuleVersionStatus>(hashCode);
  }

  return ModuleVersionStatus::NOT_SET;
}

Aws::String GetNameForModuleVersionStatus(ModuleVersionStatus enumValue) {
  switch (enumValue) {
    case ModuleVersionStatus::NOT_SET:
      return {};
    case ModuleVersionStatus::CREATING:
      return "CREATING";
    case ModuleVersionStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case ModuleVersionStatus::ACTIVE:
      return "ACTIVE";
    case ModuleVersionStatus::DEPRECATED:
      return "DEPRECATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModuleVersionStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
