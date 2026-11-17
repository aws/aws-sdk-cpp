/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/ApproverOutcomeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace ApproverOutcomeStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");

ApproverOutcomeStatus GetApproverOutcomeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return ApproverOutcomeStatus::QUEUED;
  } else if (hashCode == PENDING_APPROVAL_HASH) {
    return ApproverOutcomeStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return ApproverOutcomeStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return ApproverOutcomeStatus::REJECTED;
  } else if (hashCode == EXPIRED_HASH) {
    return ApproverOutcomeStatus::EXPIRED;
  } else if (hashCode == SKIPPED_HASH) {
    return ApproverOutcomeStatus::SKIPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApproverOutcomeStatus>(hashCode);
  }

  return ApproverOutcomeStatus::NOT_SET;
}

Aws::String GetNameForApproverOutcomeStatus(ApproverOutcomeStatus enumValue) {
  switch (enumValue) {
    case ApproverOutcomeStatus::NOT_SET:
      return {};
    case ApproverOutcomeStatus::QUEUED:
      return "QUEUED";
    case ApproverOutcomeStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case ApproverOutcomeStatus::APPROVED:
      return "APPROVED";
    case ApproverOutcomeStatus::REJECTED:
      return "REJECTED";
    case ApproverOutcomeStatus::EXPIRED:
      return "EXPIRED";
    case ApproverOutcomeStatus::SKIPPED:
      return "SKIPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApproverOutcomeStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
