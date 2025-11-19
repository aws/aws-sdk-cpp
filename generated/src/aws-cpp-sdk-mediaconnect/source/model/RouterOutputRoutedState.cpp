/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterOutputRoutedState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterOutputRoutedStateMapper {

static const int ROUTED_HASH = HashingUtils::HashString("ROUTED");
static const int ROUTING_HASH = HashingUtils::HashString("ROUTING");
static const int UNROUTED_HASH = HashingUtils::HashString("UNROUTED");

RouterOutputRoutedState GetRouterOutputRoutedStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ROUTED_HASH) {
    return RouterOutputRoutedState::ROUTED;
  } else if (hashCode == ROUTING_HASH) {
    return RouterOutputRoutedState::ROUTING;
  } else if (hashCode == UNROUTED_HASH) {
    return RouterOutputRoutedState::UNROUTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterOutputRoutedState>(hashCode);
  }

  return RouterOutputRoutedState::NOT_SET;
}

Aws::String GetNameForRouterOutputRoutedState(RouterOutputRoutedState enumValue) {
  switch (enumValue) {
    case RouterOutputRoutedState::NOT_SET:
      return {};
    case RouterOutputRoutedState::ROUTED:
      return "ROUTED";
    case RouterOutputRoutedState::ROUTING:
      return "ROUTING";
    case RouterOutputRoutedState::UNROUTED:
      return "UNROUTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterOutputRoutedStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
