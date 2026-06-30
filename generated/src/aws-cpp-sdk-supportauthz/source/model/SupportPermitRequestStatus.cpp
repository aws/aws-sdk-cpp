/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/supportauthz/model/SupportPermitRequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {
namespace SupportPermitRequestStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

SupportPermitRequestStatus GetSupportPermitRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return SupportPermitRequestStatus::PENDING;
  } else if (hashCode == ACCEPTED_HASH) {
    return SupportPermitRequestStatus::ACCEPTED;
  } else if (hashCode == REJECTED_HASH) {
    return SupportPermitRequestStatus::REJECTED;
  } else if (hashCode == CANCELLED_HASH) {
    return SupportPermitRequestStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupportPermitRequestStatus>(hashCode);
  }

  return SupportPermitRequestStatus::NOT_SET;
}

Aws::String GetNameForSupportPermitRequestStatus(SupportPermitRequestStatus enumValue) {
  switch (enumValue) {
    case SupportPermitRequestStatus::NOT_SET:
      return {};
    case SupportPermitRequestStatus::PENDING:
      return "PENDING";
    case SupportPermitRequestStatus::ACCEPTED:
      return "ACCEPTED";
    case SupportPermitRequestStatus::REJECTED:
      return "REJECTED";
    case SupportPermitRequestStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupportPermitRequestStatusMapper
}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
