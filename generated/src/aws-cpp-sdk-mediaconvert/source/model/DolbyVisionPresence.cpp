/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/DolbyVisionPresence.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace DolbyVisionPresenceMapper {

static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
static const int ABSENT_HASH = HashingUtils::HashString("ABSENT");

DolbyVisionPresence GetDolbyVisionPresenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRESENT_HASH) {
    return DolbyVisionPresence::PRESENT;
  } else if (hashCode == ABSENT_HASH) {
    return DolbyVisionPresence::ABSENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DolbyVisionPresence>(hashCode);
  }

  return DolbyVisionPresence::NOT_SET;
}

Aws::String GetNameForDolbyVisionPresence(DolbyVisionPresence enumValue) {
  switch (enumValue) {
    case DolbyVisionPresence::NOT_SET:
      return {};
    case DolbyVisionPresence::PRESENT:
      return "PRESENT";
    case DolbyVisionPresence::ABSENT:
      return "ABSENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DolbyVisionPresenceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
