/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SearchFacetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SearchFacetTypeMapper {

static const int AVERAGE_CUSTOMER_RATING_HASH = HashingUtils::HashString("AVERAGE_CUSTOMER_RATING");
static const int CATEGORY_HASH = HashingUtils::HashString("CATEGORY");
static const int PUBLISHER_HASH = HashingUtils::HashString("PUBLISHER");
static const int FULFILLMENT_OPTION_TYPE_HASH = HashingUtils::HashString("FULFILLMENT_OPTION_TYPE");
static const int PRICING_MODEL_HASH = HashingUtils::HashString("PRICING_MODEL");
static const int PRICING_UNIT_HASH = HashingUtils::HashString("PRICING_UNIT");
static const int DEPLOYED_ON_AWS_HASH = HashingUtils::HashString("DEPLOYED_ON_AWS");
static const int NUMBER_OF_PRODUCTS_HASH = HashingUtils::HashString("NUMBER_OF_PRODUCTS");

SearchFacetType GetSearchFacetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVERAGE_CUSTOMER_RATING_HASH) {
    return SearchFacetType::AVERAGE_CUSTOMER_RATING;
  } else if (hashCode == CATEGORY_HASH) {
    return SearchFacetType::CATEGORY;
  } else if (hashCode == PUBLISHER_HASH) {
    return SearchFacetType::PUBLISHER;
  } else if (hashCode == FULFILLMENT_OPTION_TYPE_HASH) {
    return SearchFacetType::FULFILLMENT_OPTION_TYPE;
  } else if (hashCode == PRICING_MODEL_HASH) {
    return SearchFacetType::PRICING_MODEL;
  } else if (hashCode == PRICING_UNIT_HASH) {
    return SearchFacetType::PRICING_UNIT;
  } else if (hashCode == DEPLOYED_ON_AWS_HASH) {
    return SearchFacetType::DEPLOYED_ON_AWS;
  } else if (hashCode == NUMBER_OF_PRODUCTS_HASH) {
    return SearchFacetType::NUMBER_OF_PRODUCTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchFacetType>(hashCode);
  }

  return SearchFacetType::NOT_SET;
}

Aws::String GetNameForSearchFacetType(SearchFacetType enumValue) {
  switch (enumValue) {
    case SearchFacetType::NOT_SET:
      return {};
    case SearchFacetType::AVERAGE_CUSTOMER_RATING:
      return "AVERAGE_CUSTOMER_RATING";
    case SearchFacetType::CATEGORY:
      return "CATEGORY";
    case SearchFacetType::PUBLISHER:
      return "PUBLISHER";
    case SearchFacetType::FULFILLMENT_OPTION_TYPE:
      return "FULFILLMENT_OPTION_TYPE";
    case SearchFacetType::PRICING_MODEL:
      return "PRICING_MODEL";
    case SearchFacetType::PRICING_UNIT:
      return "PRICING_UNIT";
    case SearchFacetType::DEPLOYED_ON_AWS:
      return "DEPLOYED_ON_AWS";
    case SearchFacetType::NUMBER_OF_PRODUCTS:
      return "NUMBER_OF_PRODUCTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchFacetTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
