/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationStateString.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ExpressPrivateOfferConfigurationStateStringMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

ExpressPrivateOfferConfigurationStateString GetExpressPrivateOfferConfigurationStateStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ExpressPrivateOfferConfigurationStateString::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return ExpressPrivateOfferConfigurationStateString::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExpressPrivateOfferConfigurationStateString>(hashCode);
  }

  return ExpressPrivateOfferConfigurationStateString::NOT_SET;
}

Aws::String GetNameForExpressPrivateOfferConfigurationStateString(ExpressPrivateOfferConfigurationStateString enumValue) {
  switch (enumValue) {
    case ExpressPrivateOfferConfigurationStateString::NOT_SET:
      return {};
    case ExpressPrivateOfferConfigurationStateString::ACTIVE:
      return "ACTIVE";
    case ExpressPrivateOfferConfigurationStateString::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExpressPrivateOfferConfigurationStateStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
