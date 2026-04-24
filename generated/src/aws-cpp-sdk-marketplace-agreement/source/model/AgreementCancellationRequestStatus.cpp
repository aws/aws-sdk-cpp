/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementCancellationRequestStatusMapper {

static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");

AgreementCancellationRequestStatus GetAgreementCancellationRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_APPROVAL_HASH) {
    return AgreementCancellationRequestStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return AgreementCancellationRequestStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return AgreementCancellationRequestStatus::REJECTED;
  } else if (hashCode == CANCELLED_HASH) {
    return AgreementCancellationRequestStatus::CANCELLED;
  } else if (hashCode == VALIDATION_FAILED_HASH) {
    return AgreementCancellationRequestStatus::VALIDATION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementCancellationRequestStatus>(hashCode);
  }

  return AgreementCancellationRequestStatus::NOT_SET;
}

Aws::String GetNameForAgreementCancellationRequestStatus(AgreementCancellationRequestStatus enumValue) {
  switch (enumValue) {
    case AgreementCancellationRequestStatus::NOT_SET:
      return {};
    case AgreementCancellationRequestStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case AgreementCancellationRequestStatus::APPROVED:
      return "APPROVED";
    case AgreementCancellationRequestStatus::REJECTED:
      return "REJECTED";
    case AgreementCancellationRequestStatus::CANCELLED:
      return "CANCELLED";
    case AgreementCancellationRequestStatus::VALIDATION_FAILED:
      return "VALIDATION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementCancellationRequestStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
