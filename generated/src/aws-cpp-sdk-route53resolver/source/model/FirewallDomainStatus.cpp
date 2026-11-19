/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/model/FirewallDomainStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {
namespace FirewallDomainStatusMapper {

static const int OBSERVED_HASH = HashingUtils::HashString("OBSERVED");
static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

FirewallDomainStatus GetFirewallDomainStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OBSERVED_HASH) {
    return FirewallDomainStatus::OBSERVED;
  } else if (hashCode == ALLOWED_HASH) {
    return FirewallDomainStatus::ALLOWED;
  } else if (hashCode == DENIED_HASH) {
    return FirewallDomainStatus::DENIED;
  } else if (hashCode == UNKNOWN_HASH) {
    return FirewallDomainStatus::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallDomainStatus>(hashCode);
  }

  return FirewallDomainStatus::NOT_SET;
}

Aws::String GetNameForFirewallDomainStatus(FirewallDomainStatus enumValue) {
  switch (enumValue) {
    case FirewallDomainStatus::NOT_SET:
      return {};
    case FirewallDomainStatus::OBSERVED:
      return "OBSERVED";
    case FirewallDomainStatus::ALLOWED:
      return "ALLOWED";
    case FirewallDomainStatus::DENIED:
      return "DENIED";
    case FirewallDomainStatus::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallDomainStatusMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
