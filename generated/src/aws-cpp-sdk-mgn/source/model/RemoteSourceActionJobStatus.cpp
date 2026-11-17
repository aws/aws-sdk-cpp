/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/RemoteSourceActionJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace RemoteSourceActionJobStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STALLED_HASH = HashingUtils::HashString("STALLED");

RemoteSourceActionJobStatus GetRemoteSourceActionJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return RemoteSourceActionJobStatus::PENDING;
  } else if (hashCode == RUNNING_HASH) {
    return RemoteSourceActionJobStatus::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return RemoteSourceActionJobStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return RemoteSourceActionJobStatus::FAILED;
  } else if (hashCode == STALLED_HASH) {
    return RemoteSourceActionJobStatus::STALLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemoteSourceActionJobStatus>(hashCode);
  }

  return RemoteSourceActionJobStatus::NOT_SET;
}

Aws::String GetNameForRemoteSourceActionJobStatus(RemoteSourceActionJobStatus enumValue) {
  switch (enumValue) {
    case RemoteSourceActionJobStatus::NOT_SET:
      return {};
    case RemoteSourceActionJobStatus::PENDING:
      return "PENDING";
    case RemoteSourceActionJobStatus::RUNNING:
      return "RUNNING";
    case RemoteSourceActionJobStatus::COMPLETED:
      return "COMPLETED";
    case RemoteSourceActionJobStatus::FAILED:
      return "FAILED";
    case RemoteSourceActionJobStatus::STALLED:
      return "STALLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemoteSourceActionJobStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
