/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/RelatedEntityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace RelatedEntityTypeMapper {

static const int Solutions_HASH = HashingUtils::HashString("Solutions");
static const int AwsProducts_HASH = HashingUtils::HashString("AwsProducts");
static const int AwsMarketplaceOffers_HASH = HashingUtils::HashString("AwsMarketplaceOffers");
static const int AwsMarketplaceOfferSets_HASH = HashingUtils::HashString("AwsMarketplaceOfferSets");
static const int AwsMarketplaceSolutions_HASH = HashingUtils::HashString("AwsMarketplaceSolutions");
static const int AwsMarketplaceProducts_HASH = HashingUtils::HashString("AwsMarketplaceProducts");

RelatedEntityType GetRelatedEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Solutions_HASH) {
    return RelatedEntityType::Solutions;
  } else if (hashCode == AwsProducts_HASH) {
    return RelatedEntityType::AwsProducts;
  } else if (hashCode == AwsMarketplaceOffers_HASH) {
    return RelatedEntityType::AwsMarketplaceOffers;
  } else if (hashCode == AwsMarketplaceOfferSets_HASH) {
    return RelatedEntityType::AwsMarketplaceOfferSets;
  } else if (hashCode == AwsMarketplaceSolutions_HASH) {
    return RelatedEntityType::AwsMarketplaceSolutions;
  } else if (hashCode == AwsMarketplaceProducts_HASH) {
    return RelatedEntityType::AwsMarketplaceProducts;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RelatedEntityType>(hashCode);
  }

  return RelatedEntityType::NOT_SET;
}

Aws::String GetNameForRelatedEntityType(RelatedEntityType enumValue) {
  switch (enumValue) {
    case RelatedEntityType::NOT_SET:
      return {};
    case RelatedEntityType::Solutions:
      return "Solutions";
    case RelatedEntityType::AwsProducts:
      return "AwsProducts";
    case RelatedEntityType::AwsMarketplaceOffers:
      return "AwsMarketplaceOffers";
    case RelatedEntityType::AwsMarketplaceOfferSets:
      return "AwsMarketplaceOfferSets";
    case RelatedEntityType::AwsMarketplaceSolutions:
      return "AwsMarketplaceSolutions";
    case RelatedEntityType::AwsMarketplaceProducts:
      return "AwsMarketplaceProducts";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RelatedEntityTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
