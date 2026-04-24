/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/PricingResult.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace PricingResultMapper {

static const int PRICED_HASH = HashingUtils::HashString("PRICED");
static const int UNABLE_TO_PRICE_HASH = HashingUtils::HashString("UNABLE_TO_PRICE");

PricingResult GetPricingResultForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRICED_HASH) {
    return PricingResult::PRICED;
  } else if (hashCode == UNABLE_TO_PRICE_HASH) {
    return PricingResult::UNABLE_TO_PRICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PricingResult>(hashCode);
  }

  return PricingResult::NOT_SET;
}

Aws::String GetNameForPricingResult(PricingResult enumValue) {
  switch (enumValue) {
    case PricingResult::NOT_SET:
      return {};
    case PricingResult::PRICED:
      return "PRICED";
    case PricingResult::UNABLE_TO_PRICE:
      return "UNABLE_TO_PRICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PricingResultMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
