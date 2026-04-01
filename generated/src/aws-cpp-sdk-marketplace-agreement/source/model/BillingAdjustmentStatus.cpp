/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace BillingAdjustmentStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

BillingAdjustmentStatus GetBillingAdjustmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return BillingAdjustmentStatus::PENDING;
  } else if (hashCode == VALIDATION_FAILED_HASH) {
    return BillingAdjustmentStatus::VALIDATION_FAILED;
  } else if (hashCode == COMPLETED_HASH) {
    return BillingAdjustmentStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingAdjustmentStatus>(hashCode);
  }

  return BillingAdjustmentStatus::NOT_SET;
}

Aws::String GetNameForBillingAdjustmentStatus(BillingAdjustmentStatus enumValue) {
  switch (enumValue) {
    case BillingAdjustmentStatus::NOT_SET:
      return {};
    case BillingAdjustmentStatus::PENDING:
      return "PENDING";
    case BillingAdjustmentStatus::VALIDATION_FAILED:
      return "VALIDATION_FAILED";
    case BillingAdjustmentStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingAdjustmentStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
