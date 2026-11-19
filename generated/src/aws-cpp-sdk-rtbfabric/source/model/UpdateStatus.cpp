/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/UpdateStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace UpdateStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

UpdateStatus GetUpdateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return UpdateStatus::IN_PROGRESS;
  } else if (hashCode == SUCCESSFUL_HASH) {
    return UpdateStatus::SUCCESSFUL;
  } else if (hashCode == FAILED_HASH) {
    return UpdateStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateStatus>(hashCode);
  }

  return UpdateStatus::NOT_SET;
}

Aws::String GetNameForUpdateStatus(UpdateStatus enumValue) {
  switch (enumValue) {
    case UpdateStatus::NOT_SET:
      return {};
    case UpdateStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case UpdateStatus::SUCCESSFUL:
      return "SUCCESSFUL";
    case UpdateStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
