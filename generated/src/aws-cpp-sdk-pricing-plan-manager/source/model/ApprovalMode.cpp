/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pricing-plan-manager/model/ApprovalMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PricingPlanManager {
namespace Model {
namespace ApprovalModeMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int IMMEDIATE_HASH = HashingUtils::HashString("IMMEDIATE");

ApprovalMode GetApprovalModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return ApprovalMode::MANUAL;
  } else if (hashCode == IMMEDIATE_HASH) {
    return ApprovalMode::IMMEDIATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApprovalMode>(hashCode);
  }

  return ApprovalMode::NOT_SET;
}

Aws::String GetNameForApprovalMode(ApprovalMode enumValue) {
  switch (enumValue) {
    case ApprovalMode::NOT_SET:
      return {};
    case ApprovalMode::MANUAL:
      return "MANUAL";
    case ApprovalMode::IMMEDIATE:
      return "IMMEDIATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApprovalModeMapper
}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
