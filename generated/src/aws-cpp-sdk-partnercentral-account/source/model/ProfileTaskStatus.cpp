/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ProfileTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ProfileTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ProfileTaskStatus GetProfileTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return ProfileTaskStatus::IN_PROGRESS;
  } else if (hashCode == CANCELED_HASH) {
    return ProfileTaskStatus::CANCELED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ProfileTaskStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ProfileTaskStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfileTaskStatus>(hashCode);
  }

  return ProfileTaskStatus::NOT_SET;
}

Aws::String GetNameForProfileTaskStatus(ProfileTaskStatus enumValue) {
  switch (enumValue) {
    case ProfileTaskStatus::NOT_SET:
      return {};
    case ProfileTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ProfileTaskStatus::CANCELED:
      return "CANCELED";
    case ProfileTaskStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ProfileTaskStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfileTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
