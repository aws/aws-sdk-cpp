/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/ProspectingTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace ProspectingTaskStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ProspectingTaskStatus GetProspectingTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ProspectingTaskStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ProspectingTaskStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return ProspectingTaskStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ProspectingTaskStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProspectingTaskStatus>(hashCode);
  }

  return ProspectingTaskStatus::NOT_SET;
}

Aws::String GetNameForProspectingTaskStatus(ProspectingTaskStatus enumValue) {
  switch (enumValue) {
    case ProspectingTaskStatus::NOT_SET:
      return {};
    case ProspectingTaskStatus::PENDING:
      return "PENDING";
    case ProspectingTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ProspectingTaskStatus::COMPLETED:
      return "COMPLETED";
    case ProspectingTaskStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProspectingTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
