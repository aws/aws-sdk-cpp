/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterNetworkInterfaceStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int RECOVERING_HASH = HashingUtils::HashString("RECOVERING");

RouterNetworkInterfaceState GetRouterNetworkInterfaceStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return RouterNetworkInterfaceState::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return RouterNetworkInterfaceState::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return RouterNetworkInterfaceState::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return RouterNetworkInterfaceState::DELETING;
  } else if (hashCode == ERROR__HASH) {
    return RouterNetworkInterfaceState::ERROR_;
  } else if (hashCode == RECOVERING_HASH) {
    return RouterNetworkInterfaceState::RECOVERING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterNetworkInterfaceState>(hashCode);
  }

  return RouterNetworkInterfaceState::NOT_SET;
}

Aws::String GetNameForRouterNetworkInterfaceState(RouterNetworkInterfaceState enumValue) {
  switch (enumValue) {
    case RouterNetworkInterfaceState::NOT_SET:
      return {};
    case RouterNetworkInterfaceState::CREATING:
      return "CREATING";
    case RouterNetworkInterfaceState::ACTIVE:
      return "ACTIVE";
    case RouterNetworkInterfaceState::UPDATING:
      return "UPDATING";
    case RouterNetworkInterfaceState::DELETING:
      return "DELETING";
    case RouterNetworkInterfaceState::ERROR_:
      return "ERROR";
    case RouterNetworkInterfaceState::RECOVERING:
      return "RECOVERING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterNetworkInterfaceStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
