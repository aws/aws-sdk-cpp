/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationResellerRoleString.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ResaleAuthorizationResellerRoleStringMapper {

static const int ChannelPartner_HASH = HashingUtils::HashString("ChannelPartner");
static const int Distributor_HASH = HashingUtils::HashString("Distributor");

ResaleAuthorizationResellerRoleString GetResaleAuthorizationResellerRoleStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ChannelPartner_HASH) {
    return ResaleAuthorizationResellerRoleString::ChannelPartner;
  } else if (hashCode == Distributor_HASH) {
    return ResaleAuthorizationResellerRoleString::Distributor;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResaleAuthorizationResellerRoleString>(hashCode);
  }

  return ResaleAuthorizationResellerRoleString::NOT_SET;
}

Aws::String GetNameForResaleAuthorizationResellerRoleString(ResaleAuthorizationResellerRoleString enumValue) {
  switch (enumValue) {
    case ResaleAuthorizationResellerRoleString::NOT_SET:
      return {};
    case ResaleAuthorizationResellerRoleString::ChannelPartner:
      return "ChannelPartner";
    case ResaleAuthorizationResellerRoleString::Distributor:
      return "Distributor";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResaleAuthorizationResellerRoleStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
