/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/ActStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace ActStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int PENDING_CLIENT_ACTION_HASH = HashingUtils::HashString("PENDING_CLIENT_ACTION");
static const int PENDING_HUMAN_ACTION_HASH = HashingUtils::HashString("PENDING_HUMAN_ACTION");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

ActStatus GetActStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return ActStatus::RUNNING;
  } else if (hashCode == PENDING_CLIENT_ACTION_HASH) {
    return ActStatus::PENDING_CLIENT_ACTION;
  } else if (hashCode == PENDING_HUMAN_ACTION_HASH) {
    return ActStatus::PENDING_HUMAN_ACTION;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ActStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ActStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return ActStatus::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActStatus>(hashCode);
  }

  return ActStatus::NOT_SET;
}

Aws::String GetNameForActStatus(ActStatus enumValue) {
  switch (enumValue) {
    case ActStatus::NOT_SET:
      return {};
    case ActStatus::RUNNING:
      return "RUNNING";
    case ActStatus::PENDING_CLIENT_ACTION:
      return "PENDING_CLIENT_ACTION";
    case ActStatus::PENDING_HUMAN_ACTION:
      return "PENDING_HUMAN_ACTION";
    case ActStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ActStatus::FAILED:
      return "FAILED";
    case ActStatus::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
