/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ram/model/UpdatePermissionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RAM {
namespace Model {
namespace UpdatePermissionStatusMapper {

static const int ATTACHABLE_HASH = HashingUtils::HashString("ATTACHABLE");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");

UpdatePermissionStatus GetUpdatePermissionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ATTACHABLE_HASH) {
    return UpdatePermissionStatus::ATTACHABLE;
  } else if (hashCode == DEPRECATED_HASH) {
    return UpdatePermissionStatus::DEPRECATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdatePermissionStatus>(hashCode);
  }

  return UpdatePermissionStatus::NOT_SET;
}

Aws::String GetNameForUpdatePermissionStatus(UpdatePermissionStatus enumValue) {
  switch (enumValue) {
    case UpdatePermissionStatus::NOT_SET:
      return {};
    case UpdatePermissionStatus::ATTACHABLE:
      return "ATTACHABLE";
    case UpdatePermissionStatus::DEPRECATED:
      return "DEPRECATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdatePermissionStatusMapper
}  // namespace Model
}  // namespace RAM
}  // namespace Aws
