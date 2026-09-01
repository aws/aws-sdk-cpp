/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Hdr10PlusPresence.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Hdr10PlusPresenceMapper {

static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");

Hdr10PlusPresence GetHdr10PlusPresenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRESENT_HASH) {
    return Hdr10PlusPresence::PRESENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Hdr10PlusPresence>(hashCode);
  }

  return Hdr10PlusPresence::NOT_SET;
}

Aws::String GetNameForHdr10PlusPresence(Hdr10PlusPresence enumValue) {
  switch (enumValue) {
    case Hdr10PlusPresence::NOT_SET:
      return {};
    case Hdr10PlusPresence::PRESENT:
      return "PRESENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Hdr10PlusPresenceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
