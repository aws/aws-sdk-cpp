/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/TrustCenterControlDomain.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace TrustCenterControlDomainMapper {

static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
static const int AI_GOVERNANCE_HASH = HashingUtils::HashString("AI_GOVERNANCE");
static const int RESILIENCE_HASH = HashingUtils::HashString("RESILIENCE");

TrustCenterControlDomain GetTrustCenterControlDomainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECURITY_HASH) {
    return TrustCenterControlDomain::SECURITY;
  } else if (hashCode == AI_GOVERNANCE_HASH) {
    return TrustCenterControlDomain::AI_GOVERNANCE;
  } else if (hashCode == RESILIENCE_HASH) {
    return TrustCenterControlDomain::RESILIENCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustCenterControlDomain>(hashCode);
  }

  return TrustCenterControlDomain::NOT_SET;
}

Aws::String GetNameForTrustCenterControlDomain(TrustCenterControlDomain enumValue) {
  switch (enumValue) {
    case TrustCenterControlDomain::NOT_SET:
      return {};
    case TrustCenterControlDomain::SECURITY:
      return "SECURITY";
    case TrustCenterControlDomain::AI_GOVERNANCE:
      return "AI_GOVERNANCE";
    case TrustCenterControlDomain::RESILIENCE:
      return "RESILIENCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustCenterControlDomainMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
