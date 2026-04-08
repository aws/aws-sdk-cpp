/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/RateCardConstraintType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace RateCardConstraintTypeMapper {

static const int Allowed_HASH = HashingUtils::HashString("Allowed");
static const int Disallowed_HASH = HashingUtils::HashString("Disallowed");

RateCardConstraintType GetRateCardConstraintTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Allowed_HASH) {
    return RateCardConstraintType::Allowed;
  } else if (hashCode == Disallowed_HASH) {
    return RateCardConstraintType::Disallowed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RateCardConstraintType>(hashCode);
  }

  return RateCardConstraintType::NOT_SET;
}

Aws::String GetNameForRateCardConstraintType(RateCardConstraintType enumValue) {
  switch (enumValue) {
    case RateCardConstraintType::NOT_SET:
      return {};
    case RateCardConstraintType::Allowed:
      return "Allowed";
    case RateCardConstraintType::Disallowed:
      return "Disallowed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RateCardConstraintTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
