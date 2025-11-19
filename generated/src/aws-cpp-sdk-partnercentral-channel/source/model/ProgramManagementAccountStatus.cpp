/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ProgramManagementAccountStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

ProgramManagementAccountStatus GetProgramManagementAccountStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ProgramManagementAccountStatus::PENDING;
  } else if (hashCode == ACTIVE_HASH) {
    return ProgramManagementAccountStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return ProgramManagementAccountStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProgramManagementAccountStatus>(hashCode);
  }

  return ProgramManagementAccountStatus::NOT_SET;
}

Aws::String GetNameForProgramManagementAccountStatus(ProgramManagementAccountStatus enumValue) {
  switch (enumValue) {
    case ProgramManagementAccountStatus::NOT_SET:
      return {};
    case ProgramManagementAccountStatus::PENDING:
      return "PENDING";
    case ProgramManagementAccountStatus::ACTIVE:
      return "ACTIVE";
    case ProgramManagementAccountStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProgramManagementAccountStatusMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
