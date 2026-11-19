/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/model/FirewallRuleDomainSortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {
namespace FirewallRuleDomainSortOrderMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

FirewallRuleDomainSortOrder GetFirewallRuleDomainSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return FirewallRuleDomainSortOrder::ASC;
  } else if (hashCode == DESC_HASH) {
    return FirewallRuleDomainSortOrder::DESC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallRuleDomainSortOrder>(hashCode);
  }

  return FirewallRuleDomainSortOrder::NOT_SET;
}

Aws::String GetNameForFirewallRuleDomainSortOrder(FirewallRuleDomainSortOrder enumValue) {
  switch (enumValue) {
    case FirewallRuleDomainSortOrder::NOT_SET:
      return {};
    case FirewallRuleDomainSortOrder::ASC:
      return "ASC";
    case FirewallRuleDomainSortOrder::DESC:
      return "DESC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallRuleDomainSortOrderMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
