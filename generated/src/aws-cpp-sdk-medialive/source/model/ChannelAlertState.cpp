/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/ChannelAlertState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace ChannelAlertStateMapper {

static const int SET_HASH = HashingUtils::HashString("SET");
static const int CLEARED_HASH = HashingUtils::HashString("CLEARED");

ChannelAlertState GetChannelAlertStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SET_HASH) {
    return ChannelAlertState::SET;
  } else if (hashCode == CLEARED_HASH) {
    return ChannelAlertState::CLEARED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelAlertState>(hashCode);
  }

  return ChannelAlertState::NOT_SET;
}

Aws::String GetNameForChannelAlertState(ChannelAlertState enumValue) {
  switch (enumValue) {
    case ChannelAlertState::NOT_SET:
      return {};
    case ChannelAlertState::SET:
      return "SET";
    case ChannelAlertState::CLEARED:
      return "CLEARED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelAlertStateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
