/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AgentOwnershipFilterAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AgentOwnershipFilterAttributeMapper {

static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
static const int AGENT_NAME_HASH = HashingUtils::HashString("AGENT_NAME");

AgentOwnershipFilterAttribute GetAgentOwnershipFilterAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH) {
    return AgentOwnershipFilterAttribute::DIRECT_QUICKSIGHT_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH) {
    return AgentOwnershipFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH) {
    return AgentOwnershipFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER;
  } else if (hashCode == AGENT_NAME_HASH) {
    return AgentOwnershipFilterAttribute::AGENT_NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentOwnershipFilterAttribute>(hashCode);
  }

  return AgentOwnershipFilterAttribute::NOT_SET;
}

Aws::String GetNameForAgentOwnershipFilterAttribute(AgentOwnershipFilterAttribute enumValue) {
  switch (enumValue) {
    case AgentOwnershipFilterAttribute::NOT_SET:
      return {};
    case AgentOwnershipFilterAttribute::DIRECT_QUICKSIGHT_OWNER:
      return "DIRECT_QUICKSIGHT_OWNER";
    case AgentOwnershipFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
      return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
    case AgentOwnershipFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER:
      return "DIRECT_QUICKSIGHT_SOLE_OWNER";
    case AgentOwnershipFilterAttribute::AGENT_NAME:
      return "AGENT_NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentOwnershipFilterAttributeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
