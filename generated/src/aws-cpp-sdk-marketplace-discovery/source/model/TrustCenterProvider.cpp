/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/TrustCenterProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace TrustCenterProviderMapper {

static const int DRATA_HASH = HashingUtils::HashString("DRATA");
static const int VANTA_HASH = HashingUtils::HashString("VANTA");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

TrustCenterProvider GetTrustCenterProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRATA_HASH) {
    return TrustCenterProvider::DRATA;
  } else if (hashCode == VANTA_HASH) {
    return TrustCenterProvider::VANTA;
  } else if (hashCode == OTHER_HASH) {
    return TrustCenterProvider::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustCenterProvider>(hashCode);
  }

  return TrustCenterProvider::NOT_SET;
}

Aws::String GetNameForTrustCenterProvider(TrustCenterProvider enumValue) {
  switch (enumValue) {
    case TrustCenterProvider::NOT_SET:
      return {};
    case TrustCenterProvider::DRATA:
      return "DRATA";
    case TrustCenterProvider::VANTA:
      return "VANTA";
    case TrustCenterProvider::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustCenterProviderMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
