/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/model/FirewallDomainStatusFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {
namespace FirewallDomainStatusFilterMapper {

static const int OBSERVED_HASH = HashingUtils::HashString("OBSERVED");
static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");

FirewallDomainStatusFilter GetFirewallDomainStatusFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OBSERVED_HASH) {
    return FirewallDomainStatusFilter::OBSERVED;
  } else if (hashCode == ALLOWED_HASH) {
    return FirewallDomainStatusFilter::ALLOWED;
  } else if (hashCode == DENIED_HASH) {
    return FirewallDomainStatusFilter::DENIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallDomainStatusFilter>(hashCode);
  }

  return FirewallDomainStatusFilter::NOT_SET;
}

Aws::String GetNameForFirewallDomainStatusFilter(FirewallDomainStatusFilter enumValue) {
  switch (enumValue) {
    case FirewallDomainStatusFilter::NOT_SET:
      return {};
    case FirewallDomainStatusFilter::OBSERVED:
      return "OBSERVED";
    case FirewallDomainStatusFilter::ALLOWED:
      return "ALLOWED";
    case FirewallDomainStatusFilter::DENIED:
      return "DENIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallDomainStatusFilterMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
