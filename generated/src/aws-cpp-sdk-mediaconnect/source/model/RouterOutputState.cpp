/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterOutputState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterOutputStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int RECOVERING_HASH = HashingUtils::HashString("RECOVERING");
static const int MIGRATING_HASH = HashingUtils::HashString("MIGRATING");

RouterOutputState GetRouterOutputStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return RouterOutputState::CREATING;
  } else if (hashCode == STANDBY_HASH) {
    return RouterOutputState::STANDBY;
  } else if (hashCode == STARTING_HASH) {
    return RouterOutputState::STARTING;
  } else if (hashCode == ACTIVE_HASH) {
    return RouterOutputState::ACTIVE;
  } else if (hashCode == STOPPING_HASH) {
    return RouterOutputState::STOPPING;
  } else if (hashCode == DELETING_HASH) {
    return RouterOutputState::DELETING;
  } else if (hashCode == UPDATING_HASH) {
    return RouterOutputState::UPDATING;
  } else if (hashCode == ERROR__HASH) {
    return RouterOutputState::ERROR_;
  } else if (hashCode == RECOVERING_HASH) {
    return RouterOutputState::RECOVERING;
  } else if (hashCode == MIGRATING_HASH) {
    return RouterOutputState::MIGRATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterOutputState>(hashCode);
  }

  return RouterOutputState::NOT_SET;
}

Aws::String GetNameForRouterOutputState(RouterOutputState enumValue) {
  switch (enumValue) {
    case RouterOutputState::NOT_SET:
      return {};
    case RouterOutputState::CREATING:
      return "CREATING";
    case RouterOutputState::STANDBY:
      return "STANDBY";
    case RouterOutputState::STARTING:
      return "STARTING";
    case RouterOutputState::ACTIVE:
      return "ACTIVE";
    case RouterOutputState::STOPPING:
      return "STOPPING";
    case RouterOutputState::DELETING:
      return "DELETING";
    case RouterOutputState::UPDATING:
      return "UPDATING";
    case RouterOutputState::ERROR_:
      return "ERROR";
    case RouterOutputState::RECOVERING:
      return "RECOVERING";
    case RouterOutputState::MIGRATING:
      return "MIGRATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterOutputStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
