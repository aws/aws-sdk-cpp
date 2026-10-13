/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DevOpsAgentConnectionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DevOpsAgentConnectionStatusMapper {

static const int CONNECTING_HASH = HashingUtils::HashString("CONNECTING");
static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DevOpsAgentConnectionStatus GetDevOpsAgentConnectionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTING_HASH) {
    return DevOpsAgentConnectionStatus::CONNECTING;
  } else if (hashCode == CONNECTED_HASH) {
    return DevOpsAgentConnectionStatus::CONNECTED;
  } else if (hashCode == DISCONNECTED_HASH) {
    return DevOpsAgentConnectionStatus::DISCONNECTED;
  } else if (hashCode == FAILED_HASH) {
    return DevOpsAgentConnectionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DevOpsAgentConnectionStatus>(hashCode);
  }

  return DevOpsAgentConnectionStatus::NOT_SET;
}

Aws::String GetNameForDevOpsAgentConnectionStatus(DevOpsAgentConnectionStatus enumValue) {
  switch (enumValue) {
    case DevOpsAgentConnectionStatus::NOT_SET:
      return {};
    case DevOpsAgentConnectionStatus::CONNECTING:
      return "CONNECTING";
    case DevOpsAgentConnectionStatus::CONNECTED:
      return "CONNECTED";
    case DevOpsAgentConnectionStatus::DISCONNECTED:
      return "DISCONNECTED";
    case DevOpsAgentConnectionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DevOpsAgentConnectionStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
