/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ExpressPrivateOfferConfigurationSortByMapper {

static const int EntityId_HASH = HashingUtils::HashString("EntityId");
static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");
static const int ProductId_HASH = HashingUtils::HashString("ProductId");
static const int State_HASH = HashingUtils::HashString("State");

ExpressPrivateOfferConfigurationSortBy GetExpressPrivateOfferConfigurationSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EntityId_HASH) {
    return ExpressPrivateOfferConfigurationSortBy::EntityId;
  } else if (hashCode == LastModifiedDate_HASH) {
    return ExpressPrivateOfferConfigurationSortBy::LastModifiedDate;
  } else if (hashCode == ProductId_HASH) {
    return ExpressPrivateOfferConfigurationSortBy::ProductId;
  } else if (hashCode == State_HASH) {
    return ExpressPrivateOfferConfigurationSortBy::State;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExpressPrivateOfferConfigurationSortBy>(hashCode);
  }

  return ExpressPrivateOfferConfigurationSortBy::NOT_SET;
}

Aws::String GetNameForExpressPrivateOfferConfigurationSortBy(ExpressPrivateOfferConfigurationSortBy enumValue) {
  switch (enumValue) {
    case ExpressPrivateOfferConfigurationSortBy::NOT_SET:
      return {};
    case ExpressPrivateOfferConfigurationSortBy::EntityId:
      return "EntityId";
    case ExpressPrivateOfferConfigurationSortBy::LastModifiedDate:
      return "LastModifiedDate";
    case ExpressPrivateOfferConfigurationSortBy::ProductId:
      return "ProductId";
    case ExpressPrivateOfferConfigurationSortBy::State:
      return "State";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExpressPrivateOfferConfigurationSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
