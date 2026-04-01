/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/UserRole.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace UserRoleMapper {

static const int MEMBER_HASH = HashingUtils::HashString("MEMBER");

UserRole GetUserRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MEMBER_HASH) {
    return UserRole::MEMBER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UserRole>(hashCode);
  }

  return UserRole::NOT_SET;
}

Aws::String GetNameForUserRole(UserRole enumValue) {
  switch (enumValue) {
    case UserRole::NOT_SET:
      return {};
    case UserRole::MEMBER:
      return "MEMBER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UserRoleMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
