/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/AccountScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace AccountScopeMapper {

static const int ENTIRE_ORGANIZATION_HASH = HashingUtils::HashString("ENTIRE_ORGANIZATION");
static const int SPECIFIC_MEMBER_ACCOUNTS_HASH = HashingUtils::HashString("SPECIFIC_MEMBER_ACCOUNTS");

AccountScope GetAccountScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENTIRE_ORGANIZATION_HASH) {
    return AccountScope::ENTIRE_ORGANIZATION;
  } else if (hashCode == SPECIFIC_MEMBER_ACCOUNTS_HASH) {
    return AccountScope::SPECIFIC_MEMBER_ACCOUNTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountScope>(hashCode);
  }

  return AccountScope::NOT_SET;
}

Aws::String GetNameForAccountScope(AccountScope enumValue) {
  switch (enumValue) {
    case AccountScope::NOT_SET:
      return {};
    case AccountScope::ENTIRE_ORGANIZATION:
      return "ENTIRE_ORGANIZATION";
    case AccountScope::SPECIFIC_MEMBER_ACCOUNTS:
      return "SPECIFIC_MEMBER_ACCOUNTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountScopeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
