/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/MxfUncompressedAudioWrapping.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace MxfUncompressedAudioWrappingMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int AES3_HASH = HashingUtils::HashString("AES3");

MxfUncompressedAudioWrapping GetMxfUncompressedAudioWrappingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return MxfUncompressedAudioWrapping::AUTO;
  } else if (hashCode == AES3_HASH) {
    return MxfUncompressedAudioWrapping::AES3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MxfUncompressedAudioWrapping>(hashCode);
  }

  return MxfUncompressedAudioWrapping::NOT_SET;
}

Aws::String GetNameForMxfUncompressedAudioWrapping(MxfUncompressedAudioWrapping enumValue) {
  switch (enumValue) {
    case MxfUncompressedAudioWrapping::NOT_SET:
      return {};
    case MxfUncompressedAudioWrapping::AUTO:
      return "AUTO";
    case MxfUncompressedAudioWrapping::AES3:
      return "AES3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MxfUncompressedAudioWrappingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
