/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace FulfillmentTypeMapper {

static const int CREDITS_HASH = HashingUtils::HashString("CREDITS");
static const int CASH_HASH = HashingUtils::HashString("CASH");
static const int ACCESS_HASH = HashingUtils::HashString("ACCESS");

FulfillmentType GetFulfillmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREDITS_HASH) {
    return FulfillmentType::CREDITS;
  } else if (hashCode == CASH_HASH) {
    return FulfillmentType::CASH;
  } else if (hashCode == ACCESS_HASH) {
    return FulfillmentType::ACCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FulfillmentType>(hashCode);
  }

  return FulfillmentType::NOT_SET;
}

Aws::String GetNameForFulfillmentType(FulfillmentType enumValue) {
  switch (enumValue) {
    case FulfillmentType::NOT_SET:
      return {};
    case FulfillmentType::CREDITS:
      return "CREDITS";
    case FulfillmentType::CASH:
      return "CASH";
    case FulfillmentType::ACCESS:
      return "ACCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FulfillmentTypeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
