/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementRequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementRequestStatusMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

AgreementRequestStatus GetAgreementRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRAFT_HASH) {
    return AgreementRequestStatus::DRAFT;
  } else if (hashCode == PENDING_APPROVAL_HASH) {
    return AgreementRequestStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return AgreementRequestStatus::APPROVED;
  } else if (hashCode == ACCEPTED_HASH) {
    return AgreementRequestStatus::ACCEPTED;
  } else if (hashCode == REJECTED_HASH) {
    return AgreementRequestStatus::REJECTED;
  } else if (hashCode == CANCELLED_HASH) {
    return AgreementRequestStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementRequestStatus>(hashCode);
  }

  return AgreementRequestStatus::NOT_SET;
}

Aws::String GetNameForAgreementRequestStatus(AgreementRequestStatus enumValue) {
  switch (enumValue) {
    case AgreementRequestStatus::NOT_SET:
      return {};
    case AgreementRequestStatus::DRAFT:
      return "DRAFT";
    case AgreementRequestStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case AgreementRequestStatus::APPROVED:
      return "APPROVED";
    case AgreementRequestStatus::ACCEPTED:
      return "ACCEPTED";
    case AgreementRequestStatus::REJECTED:
      return "REJECTED";
    case AgreementRequestStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementRequestStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
