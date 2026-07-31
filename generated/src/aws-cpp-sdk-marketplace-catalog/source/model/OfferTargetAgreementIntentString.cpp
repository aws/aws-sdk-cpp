/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/OfferTargetAgreementIntentString.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace OfferTargetAgreementIntentStringMapper {

static const int Renew_HASH = HashingUtils::HashString("Renew");

OfferTargetAgreementIntentString GetOfferTargetAgreementIntentStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Renew_HASH) {
    return OfferTargetAgreementIntentString::Renew;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OfferTargetAgreementIntentString>(hashCode);
  }

  return OfferTargetAgreementIntentString::NOT_SET;
}

Aws::String GetNameForOfferTargetAgreementIntentString(OfferTargetAgreementIntentString enumValue) {
  switch (enumValue) {
    case OfferTargetAgreementIntentString::NOT_SET:
      return {};
    case OfferTargetAgreementIntentString::Renew:
      return "Renew";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OfferTargetAgreementIntentStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
