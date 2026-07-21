/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/PricingPlan.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace PricingPlanMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int ESSENTIALS_HASH = HashingUtils::HashString("ESSENTIALS");
static const int PRO_HASH = HashingUtils::HashString("PRO");
static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");

PricingPlan GetPricingPlanForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return PricingPlan::NONE;
  } else if (hashCode == ESSENTIALS_HASH) {
    return PricingPlan::ESSENTIALS;
  } else if (hashCode == PRO_HASH) {
    return PricingPlan::PRO;
  } else if (hashCode == ENTERPRISE_HASH) {
    return PricingPlan::ENTERPRISE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PricingPlan>(hashCode);
  }

  return PricingPlan::NOT_SET;
}

Aws::String GetNameForPricingPlan(PricingPlan enumValue) {
  switch (enumValue) {
    case PricingPlan::NOT_SET:
      return {};
    case PricingPlan::NONE:
      return "NONE";
    case PricingPlan::ESSENTIALS:
      return "ESSENTIALS";
    case PricingPlan::PRO:
      return "PRO";
    case PricingPlan::ENTERPRISE:
      return "ENTERPRISE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PricingPlanMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
