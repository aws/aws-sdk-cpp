/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/VerificationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace VerificationStatusMapper {

static const int PENDING_CUSTOMER_ACTION_HASH = HashingUtils::HashString("PENDING_CUSTOMER_ACTION");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

VerificationStatus GetVerificationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_CUSTOMER_ACTION_HASH) {
    return VerificationStatus::PENDING_CUSTOMER_ACTION;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return VerificationStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return VerificationStatus::FAILED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return VerificationStatus::SUCCEEDED;
  } else if (hashCode == REJECTED_HASH) {
    return VerificationStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VerificationStatus>(hashCode);
  }

  return VerificationStatus::NOT_SET;
}

Aws::String GetNameForVerificationStatus(VerificationStatus enumValue) {
  switch (enumValue) {
    case VerificationStatus::NOT_SET:
      return {};
    case VerificationStatus::PENDING_CUSTOMER_ACTION:
      return "PENDING_CUSTOMER_ACTION";
    case VerificationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case VerificationStatus::FAILED:
      return "FAILED";
    case VerificationStatus::SUCCEEDED:
      return "SUCCEEDED";
    case VerificationStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
