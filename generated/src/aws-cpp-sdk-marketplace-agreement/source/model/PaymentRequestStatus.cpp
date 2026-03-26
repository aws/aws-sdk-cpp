/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/PaymentRequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace PaymentRequestStatusMapper {

static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

PaymentRequestStatus GetPaymentRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATING_HASH) {
    return PaymentRequestStatus::VALIDATING;
  } else if (hashCode == VALIDATION_FAILED_HASH) {
    return PaymentRequestStatus::VALIDATION_FAILED;
  } else if (hashCode == PENDING_APPROVAL_HASH) {
    return PaymentRequestStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return PaymentRequestStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return PaymentRequestStatus::REJECTED;
  } else if (hashCode == CANCELLED_HASH) {
    return PaymentRequestStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentRequestStatus>(hashCode);
  }

  return PaymentRequestStatus::NOT_SET;
}

Aws::String GetNameForPaymentRequestStatus(PaymentRequestStatus enumValue) {
  switch (enumValue) {
    case PaymentRequestStatus::NOT_SET:
      return {};
    case PaymentRequestStatus::VALIDATING:
      return "VALIDATING";
    case PaymentRequestStatus::VALIDATION_FAILED:
      return "VALIDATION_FAILED";
    case PaymentRequestStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case PaymentRequestStatus::APPROVED:
      return "APPROVED";
    case PaymentRequestStatus::REJECTED:
      return "REJECTED";
    case PaymentRequestStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentRequestStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
