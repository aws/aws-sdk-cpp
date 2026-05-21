/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/NdiOutputTimecodeSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace NdiOutputTimecodeSourceMapper {

static const int EMBEDDED_TIMECODE_HASH = HashingUtils::HashString("EMBEDDED_TIMECODE");
static const int UTC_SYSTEM_TIME_HASH = HashingUtils::HashString("UTC_SYSTEM_TIME");

NdiOutputTimecodeSource GetNdiOutputTimecodeSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMBEDDED_TIMECODE_HASH) {
    return NdiOutputTimecodeSource::EMBEDDED_TIMECODE;
  } else if (hashCode == UTC_SYSTEM_TIME_HASH) {
    return NdiOutputTimecodeSource::UTC_SYSTEM_TIME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NdiOutputTimecodeSource>(hashCode);
  }

  return NdiOutputTimecodeSource::NOT_SET;
}

Aws::String GetNameForNdiOutputTimecodeSource(NdiOutputTimecodeSource enumValue) {
  switch (enumValue) {
    case NdiOutputTimecodeSource::NOT_SET:
      return {};
    case NdiOutputTimecodeSource::EMBEDDED_TIMECODE:
      return "EMBEDDED_TIMECODE";
    case NdiOutputTimecodeSource::UTC_SYSTEM_TIME:
      return "UTC_SYSTEM_TIME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NdiOutputTimecodeSourceMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
