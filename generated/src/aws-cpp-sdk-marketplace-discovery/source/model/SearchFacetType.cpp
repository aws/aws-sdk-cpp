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
static const int CERTIFICATES_HASH = HashingUtils::HashString("CERTIFICATES");
static const int SPECIALIZATION_HASH = HashingUtils::HashString("SPECIALIZATION");
static const int SPECIALIZATION_CATEGORY_HASH = HashingUtils::HashString("SPECIALIZATION_CATEGORY");
static const int SELLER_ENGAGEMENT_HASH = HashingUtils::HashString("SELLER_ENGAGEMENT");
static const int TRUST_CENTER_HASH = HashingUtils::HashString("TRUST_CENTER");

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
  } else if (hashCode == CERTIFICATES_HASH) {
    return SearchFacetType::CERTIFICATES;
  } else if (hashCode == SPECIALIZATION_HASH) {
    return SearchFacetType::SPECIALIZATION;
  } else if (hashCode == SPECIALIZATION_CATEGORY_HASH) {
    return SearchFacetType::SPECIALIZATION_CATEGORY;
  } else if (hashCode == SELLER_ENGAGEMENT_HASH) {
    return SearchFacetType::SELLER_ENGAGEMENT;
  } else if (hashCode == TRUST_CENTER_HASH) {
    return SearchFacetType::TRUST_CENTER;
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
    case SearchFacetType::CERTIFICATES:
      return "CERTIFICATES";
    case SearchFacetType::SPECIALIZATION:
      return "SPECIALIZATION";
    case SearchFacetType::SPECIALIZATION_CATEGORY:
      return "SPECIALIZATION_CATEGORY";
    case SearchFacetType::SELLER_ENGAGEMENT:
      return "SELLER_ENGAGEMENT";
    case SearchFacetType::TRUST_CENTER:
      return "TRUST_CENTER";
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
