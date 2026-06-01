/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AgentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AgentStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");

AgentStatus GetAgentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AgentStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return AgentStatus::UPDATING;
  } else if (hashCode == FAILED_HASH) {
    return AgentStatus::FAILED;
  } else if (hashCode == CREATING_HASH) {
    return AgentStatus::CREATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentStatus>(hashCode);
  }

  return AgentStatus::NOT_SET;
}

Aws::String GetNameForAgentStatus(AgentStatus enumValue) {
  switch (enumValue) {
    case AgentStatus::NOT_SET:
      return {};
    case AgentStatus::ACTIVE:
      return "ACTIVE";
    case AgentStatus::UPDATING:
      return "UPDATING";
    case AgentStatus::FAILED:
      return "FAILED";
    case AgentStatus::CREATING:
      return "CREATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
