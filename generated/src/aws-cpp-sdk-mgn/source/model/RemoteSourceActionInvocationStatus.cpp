/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/RemoteSourceActionInvocationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace RemoteSourceActionInvocationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int DELAYED_HASH = HashingUtils::HashString("DELAYED");
static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
static const int STALLED_HASH = HashingUtils::HashString("STALLED");

RemoteSourceActionInvocationStatus GetRemoteSourceActionInvocationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return RemoteSourceActionInvocationStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return RemoteSourceActionInvocationStatus::IN_PROGRESS;
  } else if (hashCode == DELAYED_HASH) {
    return RemoteSourceActionInvocationStatus::DELAYED;
  } else if (hashCode == SUCCESS_HASH) {
    return RemoteSourceActionInvocationStatus::SUCCESS;
  } else if (hashCode == CANCELLED_HASH) {
    return RemoteSourceActionInvocationStatus::CANCELLED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return RemoteSourceActionInvocationStatus::TIMED_OUT;
  } else if (hashCode == FAILED_HASH) {
    return RemoteSourceActionInvocationStatus::FAILED;
  } else if (hashCode == CANCELLING_HASH) {
    return RemoteSourceActionInvocationStatus::CANCELLING;
  } else if (hashCode == STALLED_HASH) {
    return RemoteSourceActionInvocationStatus::STALLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemoteSourceActionInvocationStatus>(hashCode);
  }

  return RemoteSourceActionInvocationStatus::NOT_SET;
}

Aws::String GetNameForRemoteSourceActionInvocationStatus(RemoteSourceActionInvocationStatus enumValue) {
  switch (enumValue) {
    case RemoteSourceActionInvocationStatus::NOT_SET:
      return {};
    case RemoteSourceActionInvocationStatus::PENDING:
      return "PENDING";
    case RemoteSourceActionInvocationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case RemoteSourceActionInvocationStatus::DELAYED:
      return "DELAYED";
    case RemoteSourceActionInvocationStatus::SUCCESS:
      return "SUCCESS";
    case RemoteSourceActionInvocationStatus::CANCELLED:
      return "CANCELLED";
    case RemoteSourceActionInvocationStatus::TIMED_OUT:
      return "TIMED_OUT";
    case RemoteSourceActionInvocationStatus::FAILED:
      return "FAILED";
    case RemoteSourceActionInvocationStatus::CANCELLING:
      return "CANCELLING";
    case RemoteSourceActionInvocationStatus::STALLED:
      return "STALLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemoteSourceActionInvocationStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
