/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/BenefitStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace BenefitStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

BenefitStatus GetBenefitStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return BenefitStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return BenefitStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BenefitStatus>(hashCode);
  }

  return BenefitStatus::NOT_SET;
}

Aws::String GetNameForBenefitStatus(BenefitStatus enumValue) {
  switch (enumValue) {
    case BenefitStatus::NOT_SET:
      return {};
    case BenefitStatus::ACTIVE:
      return "ACTIVE";
    case BenefitStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BenefitStatusMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
