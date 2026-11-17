/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementApprovalStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementApprovalStatusMapper {

static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

AgreementApprovalStatus GetAgreementApprovalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_APPROVAL_HASH) {
    return AgreementApprovalStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return AgreementApprovalStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return AgreementApprovalStatus::REJECTED;
  } else if (hashCode == EXPIRED_HASH) {
    return AgreementApprovalStatus::EXPIRED;
  } else if (hashCode == CANCELLED_HASH) {
    return AgreementApprovalStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementApprovalStatus>(hashCode);
  }

  return AgreementApprovalStatus::NOT_SET;
}

Aws::String GetNameForAgreementApprovalStatus(AgreementApprovalStatus enumValue) {
  switch (enumValue) {
    case AgreementApprovalStatus::NOT_SET:
      return {};
    case AgreementApprovalStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case AgreementApprovalStatus::APPROVED:
      return "APPROVED";
    case AgreementApprovalStatus::REJECTED:
      return "REJECTED";
    case AgreementApprovalStatus::EXPIRED:
      return "EXPIRED";
    case AgreementApprovalStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementApprovalStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
