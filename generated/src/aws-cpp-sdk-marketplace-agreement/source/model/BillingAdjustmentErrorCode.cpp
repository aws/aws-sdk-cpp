/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace BillingAdjustmentErrorCodeMapper {

static const int CONFLICT_EXCEPTION_HASH = HashingUtils::HashString("CONFLICT_EXCEPTION");
static const int VALIDATION_EXCEPTION_HASH = HashingUtils::HashString("VALIDATION_EXCEPTION");
static const int RESOURCE_NOT_FOUND_EXCEPTION_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND_EXCEPTION");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");

BillingAdjustmentErrorCode GetBillingAdjustmentErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFLICT_EXCEPTION_HASH) {
    return BillingAdjustmentErrorCode::CONFLICT_EXCEPTION;
  } else if (hashCode == VALIDATION_EXCEPTION_HASH) {
    return BillingAdjustmentErrorCode::VALIDATION_EXCEPTION;
  } else if (hashCode == RESOURCE_NOT_FOUND_EXCEPTION_HASH) {
    return BillingAdjustmentErrorCode::RESOURCE_NOT_FOUND_EXCEPTION;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return BillingAdjustmentErrorCode::INTERNAL_FAILURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingAdjustmentErrorCode>(hashCode);
  }

  return BillingAdjustmentErrorCode::NOT_SET;
}

Aws::String GetNameForBillingAdjustmentErrorCode(BillingAdjustmentErrorCode enumValue) {
  switch (enumValue) {
    case BillingAdjustmentErrorCode::NOT_SET:
      return {};
    case BillingAdjustmentErrorCode::CONFLICT_EXCEPTION:
      return "CONFLICT_EXCEPTION";
    case BillingAdjustmentErrorCode::VALIDATION_EXCEPTION:
      return "VALIDATION_EXCEPTION";
    case BillingAdjustmentErrorCode::RESOURCE_NOT_FOUND_EXCEPTION:
      return "RESOURCE_NOT_FOUND_EXCEPTION";
    case BillingAdjustmentErrorCode::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingAdjustmentErrorCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
