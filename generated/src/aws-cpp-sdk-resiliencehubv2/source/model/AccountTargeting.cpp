/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AccountTargeting.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AccountTargetingMapper {

static const int SINGLE_ACCOUNT_HASH = HashingUtils::HashString("SINGLE_ACCOUNT");
static const int MULTI_ACCOUNT_HASH = HashingUtils::HashString("MULTI_ACCOUNT");

AccountTargeting GetAccountTargetingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SINGLE_ACCOUNT_HASH) {
    return AccountTargeting::SINGLE_ACCOUNT;
  } else if (hashCode == MULTI_ACCOUNT_HASH) {
    return AccountTargeting::MULTI_ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountTargeting>(hashCode);
  }

  return AccountTargeting::NOT_SET;
}

Aws::String GetNameForAccountTargeting(AccountTargeting enumValue) {
  switch (enumValue) {
    case AccountTargeting::NOT_SET:
      return {};
    case AccountTargeting::SINGLE_ACCOUNT:
      return "SINGLE_ACCOUNT";
    case AccountTargeting::MULTI_ACCOUNT:
      return "MULTI_ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountTargetingMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
