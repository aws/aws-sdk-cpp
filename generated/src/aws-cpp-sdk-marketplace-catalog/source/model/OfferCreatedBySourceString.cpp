/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/OfferCreatedBySourceString.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace OfferCreatedBySourceStringMapper {

static const int Seller_HASH = HashingUtils::HashString("Seller");
static const int AwsMarketplace_HASH = HashingUtils::HashString("AwsMarketplace");

OfferCreatedBySourceString GetOfferCreatedBySourceStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Seller_HASH) {
    return OfferCreatedBySourceString::Seller;
  } else if (hashCode == AwsMarketplace_HASH) {
    return OfferCreatedBySourceString::AwsMarketplace;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OfferCreatedBySourceString>(hashCode);
  }

  return OfferCreatedBySourceString::NOT_SET;
}

Aws::String GetNameForOfferCreatedBySourceString(OfferCreatedBySourceString enumValue) {
  switch (enumValue) {
    case OfferCreatedBySourceString::NOT_SET:
      return {};
    case OfferCreatedBySourceString::Seller:
      return "Seller";
    case OfferCreatedBySourceString::AwsMarketplace:
      return "AwsMarketplace";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OfferCreatedBySourceStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
