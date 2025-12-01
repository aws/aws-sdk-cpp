/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace BenefitAllocationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int FULFILLED_HASH = HashingUtils::HashString("FULFILLED");

BenefitAllocationStatus GetBenefitAllocationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return BenefitAllocationStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return BenefitAllocationStatus::INACTIVE;
  } else if (hashCode == FULFILLED_HASH) {
    return BenefitAllocationStatus::FULFILLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BenefitAllocationStatus>(hashCode);
  }

  return BenefitAllocationStatus::NOT_SET;
}

Aws::String GetNameForBenefitAllocationStatus(BenefitAllocationStatus enumValue) {
  switch (enumValue) {
    case BenefitAllocationStatus::NOT_SET:
      return {};
    case BenefitAllocationStatus::ACTIVE:
      return "ACTIVE";
    case BenefitAllocationStatus::INACTIVE:
      return "INACTIVE";
    case BenefitAllocationStatus::FULFILLED:
      return "FULFILLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BenefitAllocationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
