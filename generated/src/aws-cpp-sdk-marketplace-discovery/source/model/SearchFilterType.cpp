/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SearchFilterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SearchFilterTypeMapper {

static const int MIN_AVERAGE_CUSTOMER_RATING_HASH = HashingUtils::HashString("MIN_AVERAGE_CUSTOMER_RATING");
static const int MAX_AVERAGE_CUSTOMER_RATING_HASH = HashingUtils::HashString("MAX_AVERAGE_CUSTOMER_RATING");
static const int CATEGORY_HASH = HashingUtils::HashString("CATEGORY");
static const int PUBLISHER_HASH = HashingUtils::HashString("PUBLISHER");
static const int FULFILLMENT_OPTION_TYPE_HASH = HashingUtils::HashString("FULFILLMENT_OPTION_TYPE");
static const int PRICING_MODEL_HASH = HashingUtils::HashString("PRICING_MODEL");
static const int PRICING_UNIT_HASH = HashingUtils::HashString("PRICING_UNIT");
static const int DEPLOYED_ON_AWS_HASH = HashingUtils::HashString("DEPLOYED_ON_AWS");
static const int NUMBER_OF_PRODUCTS_HASH = HashingUtils::HashString("NUMBER_OF_PRODUCTS");

SearchFilterType GetSearchFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MIN_AVERAGE_CUSTOMER_RATING_HASH) {
    return SearchFilterType::MIN_AVERAGE_CUSTOMER_RATING;
  } else if (hashCode == MAX_AVERAGE_CUSTOMER_RATING_HASH) {
    return SearchFilterType::MAX_AVERAGE_CUSTOMER_RATING;
  } else if (hashCode == CATEGORY_HASH) {
    return SearchFilterType::CATEGORY;
  } else if (hashCode == PUBLISHER_HASH) {
    return SearchFilterType::PUBLISHER;
  } else if (hashCode == FULFILLMENT_OPTION_TYPE_HASH) {
    return SearchFilterType::FULFILLMENT_OPTION_TYPE;
  } else if (hashCode == PRICING_MODEL_HASH) {
    return SearchFilterType::PRICING_MODEL;
  } else if (hashCode == PRICING_UNIT_HASH) {
    return SearchFilterType::PRICING_UNIT;
  } else if (hashCode == DEPLOYED_ON_AWS_HASH) {
    return SearchFilterType::DEPLOYED_ON_AWS;
  } else if (hashCode == NUMBER_OF_PRODUCTS_HASH) {
    return SearchFilterType::NUMBER_OF_PRODUCTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchFilterType>(hashCode);
  }

  return SearchFilterType::NOT_SET;
}

Aws::String GetNameForSearchFilterType(SearchFilterType enumValue) {
  switch (enumValue) {
    case SearchFilterType::NOT_SET:
      return {};
    case SearchFilterType::MIN_AVERAGE_CUSTOMER_RATING:
      return "MIN_AVERAGE_CUSTOMER_RATING";
    case SearchFilterType::MAX_AVERAGE_CUSTOMER_RATING:
      return "MAX_AVERAGE_CUSTOMER_RATING";
    case SearchFilterType::CATEGORY:
      return "CATEGORY";
    case SearchFilterType::PUBLISHER:
      return "PUBLISHER";
    case SearchFilterType::FULFILLMENT_OPTION_TYPE:
      return "FULFILLMENT_OPTION_TYPE";
    case SearchFilterType::PRICING_MODEL:
      return "PRICING_MODEL";
    case SearchFilterType::PRICING_UNIT:
      return "PRICING_UNIT";
    case SearchFilterType::DEPLOYED_ON_AWS:
      return "DEPLOYED_ON_AWS";
    case SearchFilterType::NUMBER_OF_PRODUCTS:
      return "NUMBER_OF_PRODUCTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchFilterTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
