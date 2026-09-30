/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/BeaconEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace BeaconEventTypeMapper {

static const int MUTE_HASH = HashingUtils::HashString("MUTE");
static const int UNMUTE_HASH = HashingUtils::HashString("UNMUTE");
static const int PAUSE_HASH = HashingUtils::HashString("PAUSE");
static const int SKIP_HASH = HashingUtils::HashString("SKIP");

BeaconEventType GetBeaconEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MUTE_HASH) {
    return BeaconEventType::MUTE;
  } else if (hashCode == UNMUTE_HASH) {
    return BeaconEventType::UNMUTE;
  } else if (hashCode == PAUSE_HASH) {
    return BeaconEventType::PAUSE;
  } else if (hashCode == SKIP_HASH) {
    return BeaconEventType::SKIP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BeaconEventType>(hashCode);
  }

  return BeaconEventType::NOT_SET;
}

Aws::String GetNameForBeaconEventType(BeaconEventType enumValue) {
  switch (enumValue) {
    case BeaconEventType::NOT_SET:
      return {};
    case BeaconEventType::MUTE:
      return "MUTE";
    case BeaconEventType::UNMUTE:
      return "UNMUTE";
    case BeaconEventType::PAUSE:
      return "PAUSE";
    case BeaconEventType::SKIP:
      return "SKIP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BeaconEventTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
