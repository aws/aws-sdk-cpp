/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Ac4BitstreamMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Ac4BitstreamModeMapper {

static const int COMPLETE_MAIN_HASH = HashingUtils::HashString("COMPLETE_MAIN");
static const int EMERGENCY_HASH = HashingUtils::HashString("EMERGENCY");

Ac4BitstreamMode GetAc4BitstreamModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETE_MAIN_HASH) {
    return Ac4BitstreamMode::COMPLETE_MAIN;
  } else if (hashCode == EMERGENCY_HASH) {
    return Ac4BitstreamMode::EMERGENCY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Ac4BitstreamMode>(hashCode);
  }

  return Ac4BitstreamMode::NOT_SET;
}

Aws::String GetNameForAc4BitstreamMode(Ac4BitstreamMode enumValue) {
  switch (enumValue) {
    case Ac4BitstreamMode::NOT_SET:
      return {};
    case Ac4BitstreamMode::COMPLETE_MAIN:
      return "COMPLETE_MAIN";
    case Ac4BitstreamMode::EMERGENCY:
      return "EMERGENCY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Ac4BitstreamModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
