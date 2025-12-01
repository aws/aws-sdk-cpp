/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/OfferSetStateString.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace OfferSetStateStringMapper {

static const int Draft_HASH = HashingUtils::HashString("Draft");
static const int Released_HASH = HashingUtils::HashString("Released");

OfferSetStateString GetOfferSetStateStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Draft_HASH) {
    return OfferSetStateString::Draft;
  } else if (hashCode == Released_HASH) {
    return OfferSetStateString::Released;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OfferSetStateString>(hashCode);
  }

  return OfferSetStateString::NOT_SET;
}

Aws::String GetNameForOfferSetStateString(OfferSetStateString enumValue) {
  switch (enumValue) {
    case OfferSetStateString::NOT_SET:
      return {};
    case OfferSetStateString::Draft:
      return "Draft";
    case OfferSetStateString::Released:
      return "Released";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OfferSetStateStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
