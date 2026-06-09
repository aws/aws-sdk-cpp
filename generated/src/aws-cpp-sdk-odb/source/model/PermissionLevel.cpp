/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/PermissionLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace PermissionLevelMapper {

static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");
static const int UNRESTRICTED_HASH = HashingUtils::HashString("UNRESTRICTED");

PermissionLevel GetPermissionLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESTRICTED_HASH) {
    return PermissionLevel::RESTRICTED;
  } else if (hashCode == UNRESTRICTED_HASH) {
    return PermissionLevel::UNRESTRICTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PermissionLevel>(hashCode);
  }

  return PermissionLevel::NOT_SET;
}

Aws::String GetNameForPermissionLevel(PermissionLevel enumValue) {
  switch (enumValue) {
    case PermissionLevel::NOT_SET:
      return {};
    case PermissionLevel::RESTRICTED:
      return "RESTRICTED";
    case PermissionLevel::UNRESTRICTED:
      return "UNRESTRICTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PermissionLevelMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
