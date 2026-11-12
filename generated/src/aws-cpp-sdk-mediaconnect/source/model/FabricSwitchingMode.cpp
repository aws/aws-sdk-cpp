/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/FabricSwitchingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace FabricSwitchingModeMapper {

static const int IMMEDIATE_HASH = HashingUtils::HashString("IMMEDIATE");
static const int KEY_FRAME_HASH = HashingUtils::HashString("KEY_FRAME");

FabricSwitchingMode GetFabricSwitchingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IMMEDIATE_HASH) {
    return FabricSwitchingMode::IMMEDIATE;
  } else if (hashCode == KEY_FRAME_HASH) {
    return FabricSwitchingMode::KEY_FRAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FabricSwitchingMode>(hashCode);
  }

  return FabricSwitchingMode::NOT_SET;
}

Aws::String GetNameForFabricSwitchingMode(FabricSwitchingMode enumValue) {
  switch (enumValue) {
    case FabricSwitchingMode::NOT_SET:
      return {};
    case FabricSwitchingMode::IMMEDIATE:
      return "IMMEDIATE";
    case FabricSwitchingMode::KEY_FRAME:
      return "KEY_FRAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FabricSwitchingModeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
