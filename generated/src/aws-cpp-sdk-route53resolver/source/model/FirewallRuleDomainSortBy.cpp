/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/model/FirewallRuleDomainSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {
namespace FirewallRuleDomainSortByMapper {

static const int TIME_ADDED_HASH = HashingUtils::HashString("TIME_ADDED");
static const int DAILY_TOTAL_HASH = HashingUtils::HashString("DAILY_TOTAL");
static const int TOTAL_REQUESTS_HASH = HashingUtils::HashString("TOTAL_REQUESTS");

FirewallRuleDomainSortBy GetFirewallRuleDomainSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TIME_ADDED_HASH) {
    return FirewallRuleDomainSortBy::TIME_ADDED;
  } else if (hashCode == DAILY_TOTAL_HASH) {
    return FirewallRuleDomainSortBy::DAILY_TOTAL;
  } else if (hashCode == TOTAL_REQUESTS_HASH) {
    return FirewallRuleDomainSortBy::TOTAL_REQUESTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallRuleDomainSortBy>(hashCode);
  }

  return FirewallRuleDomainSortBy::NOT_SET;
}

Aws::String GetNameForFirewallRuleDomainSortBy(FirewallRuleDomainSortBy enumValue) {
  switch (enumValue) {
    case FirewallRuleDomainSortBy::NOT_SET:
      return {};
    case FirewallRuleDomainSortBy::TIME_ADDED:
      return "TIME_ADDED";
    case FirewallRuleDomainSortBy::DAILY_TOTAL:
      return "DAILY_TOTAL";
    case FirewallRuleDomainSortBy::TOTAL_REQUESTS:
      return "TOTAL_REQUESTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallRuleDomainSortByMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
