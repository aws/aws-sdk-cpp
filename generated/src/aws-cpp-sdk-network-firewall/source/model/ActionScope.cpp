/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ActionScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ActionScopeMapper {

static const int FLOW_HASH = HashingUtils::HashString("FLOW");
static const int TX_HASH = HashingUtils::HashString("TX");
static const int HOOK_HASH = HashingUtils::HashString("HOOK");
static const int PACKET_HASH = HashingUtils::HashString("PACKET");

ActionScope GetActionScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FLOW_HASH) {
    return ActionScope::FLOW;
  } else if (hashCode == TX_HASH) {
    return ActionScope::TX;
  } else if (hashCode == HOOK_HASH) {
    return ActionScope::HOOK;
  } else if (hashCode == PACKET_HASH) {
    return ActionScope::PACKET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionScope>(hashCode);
  }

  return ActionScope::NOT_SET;
}

Aws::String GetNameForActionScope(ActionScope enumValue) {
  switch (enumValue) {
    case ActionScope::NOT_SET:
      return {};
    case ActionScope::FLOW:
      return "FLOW";
    case ActionScope::TX:
      return "TX";
    case ActionScope::HOOK:
      return "HOOK";
    case ActionScope::PACKET:
      return "PACKET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionScopeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
