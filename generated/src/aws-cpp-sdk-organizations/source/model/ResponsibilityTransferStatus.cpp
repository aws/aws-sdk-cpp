/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/organizations/model/ResponsibilityTransferStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {
namespace ResponsibilityTransferStatusMapper {

static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");
static const int DECLINED_HASH = HashingUtils::HashString("DECLINED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int WITHDRAWN_HASH = HashingUtils::HashString("WITHDRAWN");

ResponsibilityTransferStatus GetResponsibilityTransferStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUESTED_HASH) {
    return ResponsibilityTransferStatus::REQUESTED;
  } else if (hashCode == DECLINED_HASH) {
    return ResponsibilityTransferStatus::DECLINED;
  } else if (hashCode == CANCELED_HASH) {
    return ResponsibilityTransferStatus::CANCELED;
  } else if (hashCode == EXPIRED_HASH) {
    return ResponsibilityTransferStatus::EXPIRED;
  } else if (hashCode == ACCEPTED_HASH) {
    return ResponsibilityTransferStatus::ACCEPTED;
  } else if (hashCode == WITHDRAWN_HASH) {
    return ResponsibilityTransferStatus::WITHDRAWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponsibilityTransferStatus>(hashCode);
  }

  return ResponsibilityTransferStatus::NOT_SET;
}

Aws::String GetNameForResponsibilityTransferStatus(ResponsibilityTransferStatus enumValue) {
  switch (enumValue) {
    case ResponsibilityTransferStatus::NOT_SET:
      return {};
    case ResponsibilityTransferStatus::REQUESTED:
      return "REQUESTED";
    case ResponsibilityTransferStatus::DECLINED:
      return "DECLINED";
    case ResponsibilityTransferStatus::CANCELED:
      return "CANCELED";
    case ResponsibilityTransferStatus::EXPIRED:
      return "EXPIRED";
    case ResponsibilityTransferStatus::ACCEPTED:
      return "ACCEPTED";
    case ResponsibilityTransferStatus::WITHDRAWN:
      return "WITHDRAWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponsibilityTransferStatusMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
