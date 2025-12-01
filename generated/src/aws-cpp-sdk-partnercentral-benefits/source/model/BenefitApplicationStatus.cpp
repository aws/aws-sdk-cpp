/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace BenefitApplicationStatusMapper {

static const int PENDING_SUBMISSION_HASH = HashingUtils::HashString("PENDING_SUBMISSION");
static const int IN_REVIEW_HASH = HashingUtils::HashString("IN_REVIEW");
static const int ACTION_REQUIRED_HASH = HashingUtils::HashString("ACTION_REQUIRED");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

BenefitApplicationStatus GetBenefitApplicationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_SUBMISSION_HASH) {
    return BenefitApplicationStatus::PENDING_SUBMISSION;
  } else if (hashCode == IN_REVIEW_HASH) {
    return BenefitApplicationStatus::IN_REVIEW;
  } else if (hashCode == ACTION_REQUIRED_HASH) {
    return BenefitApplicationStatus::ACTION_REQUIRED;
  } else if (hashCode == APPROVED_HASH) {
    return BenefitApplicationStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return BenefitApplicationStatus::REJECTED;
  } else if (hashCode == CANCELED_HASH) {
    return BenefitApplicationStatus::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BenefitApplicationStatus>(hashCode);
  }

  return BenefitApplicationStatus::NOT_SET;
}

Aws::String GetNameForBenefitApplicationStatus(BenefitApplicationStatus enumValue) {
  switch (enumValue) {
    case BenefitApplicationStatus::NOT_SET:
      return {};
    case BenefitApplicationStatus::PENDING_SUBMISSION:
      return "PENDING_SUBMISSION";
    case BenefitApplicationStatus::IN_REVIEW:
      return "IN_REVIEW";
    case BenefitApplicationStatus::ACTION_REQUIRED:
      return "ACTION_REQUIRED";
    case BenefitApplicationStatus::APPROVED:
      return "APPROVED";
    case BenefitApplicationStatus::REJECTED:
      return "REJECTED";
    case BenefitApplicationStatus::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BenefitApplicationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
