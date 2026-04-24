/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/MultiplexAlertState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace MultiplexAlertStateMapper {

static const int SET_HASH = HashingUtils::HashString("SET");
static const int CLEARED_HASH = HashingUtils::HashString("CLEARED");

MultiplexAlertState GetMultiplexAlertStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SET_HASH) {
    return MultiplexAlertState::SET;
  } else if (hashCode == CLEARED_HASH) {
    return MultiplexAlertState::CLEARED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultiplexAlertState>(hashCode);
  }

  return MultiplexAlertState::NOT_SET;
}

Aws::String GetNameForMultiplexAlertState(MultiplexAlertState enumValue) {
  switch (enumValue) {
    case MultiplexAlertState::NOT_SET:
      return {};
    case MultiplexAlertState::SET:
      return "SET";
    case MultiplexAlertState::CLEARED:
      return "CLEARED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultiplexAlertStateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
