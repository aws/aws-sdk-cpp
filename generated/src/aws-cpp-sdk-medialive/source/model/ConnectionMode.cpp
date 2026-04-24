/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/ConnectionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace ConnectionModeMapper {

static const int CALLER_HASH = HashingUtils::HashString("CALLER");
static const int LISTENER_HASH = HashingUtils::HashString("LISTENER");

ConnectionMode GetConnectionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CALLER_HASH) {
    return ConnectionMode::CALLER;
  } else if (hashCode == LISTENER_HASH) {
    return ConnectionMode::LISTENER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionMode>(hashCode);
  }

  return ConnectionMode::NOT_SET;
}

Aws::String GetNameForConnectionMode(ConnectionMode enumValue) {
  switch (enumValue) {
    case ConnectionMode::NOT_SET:
      return {};
    case ConnectionMode::CALLER:
      return "CALLER";
    case ConnectionMode::LISTENER:
      return "LISTENER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionModeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
