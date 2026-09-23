/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/AdminAccountStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace AdminAccountStatusMapper {

static const int ONBOARDED_HASH = HashingUtils::HashString("ONBOARDED");
static const int OFFBOARDED_HASH = HashingUtils::HashString("OFFBOARDED");

AdminAccountStatus GetAdminAccountStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ONBOARDED_HASH) {
    return AdminAccountStatus::ONBOARDED;
  } else if (hashCode == OFFBOARDED_HASH) {
    return AdminAccountStatus::OFFBOARDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdminAccountStatus>(hashCode);
  }

  return AdminAccountStatus::NOT_SET;
}

Aws::String GetNameForAdminAccountStatus(AdminAccountStatus enumValue) {
  switch (enumValue) {
    case AdminAccountStatus::NOT_SET:
      return {};
    case AdminAccountStatus::ONBOARDED:
      return "ONBOARDED";
    case AdminAccountStatus::OFFBOARDED:
      return "OFFBOARDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdminAccountStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
