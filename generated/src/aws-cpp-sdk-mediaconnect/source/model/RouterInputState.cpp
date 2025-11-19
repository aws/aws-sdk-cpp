/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterInputState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterInputStateMapper {

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

RouterInputState GetRouterInputStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return RouterInputState::CREATING;
  } else if (hashCode == STANDBY_HASH) {
    return RouterInputState::STANDBY;
  } else if (hashCode == STARTING_HASH) {
    return RouterInputState::STARTING;
  } else if (hashCode == ACTIVE_HASH) {
    return RouterInputState::ACTIVE;
  } else if (hashCode == STOPPING_HASH) {
    return RouterInputState::STOPPING;
  } else if (hashCode == DELETING_HASH) {
    return RouterInputState::DELETING;
  } else if (hashCode == UPDATING_HASH) {
    return RouterInputState::UPDATING;
  } else if (hashCode == ERROR__HASH) {
    return RouterInputState::ERROR_;
  } else if (hashCode == RECOVERING_HASH) {
    return RouterInputState::RECOVERING;
  } else if (hashCode == MIGRATING_HASH) {
    return RouterInputState::MIGRATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterInputState>(hashCode);
  }

  return RouterInputState::NOT_SET;
}

Aws::String GetNameForRouterInputState(RouterInputState enumValue) {
  switch (enumValue) {
    case RouterInputState::NOT_SET:
      return {};
    case RouterInputState::CREATING:
      return "CREATING";
    case RouterInputState::STANDBY:
      return "STANDBY";
    case RouterInputState::STARTING:
      return "STARTING";
    case RouterInputState::ACTIVE:
      return "ACTIVE";
    case RouterInputState::STOPPING:
      return "STOPPING";
    case RouterInputState::DELETING:
      return "DELETING";
    case RouterInputState::UPDATING:
      return "UPDATING";
    case RouterInputState::ERROR_:
      return "ERROR";
    case RouterInputState::RECOVERING:
      return "RECOVERING";
    case RouterInputState::MIGRATING:
      return "MIGRATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterInputStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
