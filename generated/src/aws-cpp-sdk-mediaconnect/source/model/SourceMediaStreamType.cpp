/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/SourceMediaStreamType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace SourceMediaStreamTypeMapper {

static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");
static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
static const int DATA_HASH = HashingUtils::HashString("DATA");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

SourceMediaStreamType GetSourceMediaStreamTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VIDEO_HASH) {
    return SourceMediaStreamType::VIDEO;
  } else if (hashCode == AUDIO_HASH) {
    return SourceMediaStreamType::AUDIO;
  } else if (hashCode == DATA_HASH) {
    return SourceMediaStreamType::DATA;
  } else if (hashCode == UNKNOWN_HASH) {
    return SourceMediaStreamType::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceMediaStreamType>(hashCode);
  }

  return SourceMediaStreamType::NOT_SET;
}

Aws::String GetNameForSourceMediaStreamType(SourceMediaStreamType enumValue) {
  switch (enumValue) {
    case SourceMediaStreamType::NOT_SET:
      return {};
    case SourceMediaStreamType::VIDEO:
      return "VIDEO";
    case SourceMediaStreamType::AUDIO:
      return "AUDIO";
    case SourceMediaStreamType::DATA:
      return "DATA";
    case SourceMediaStreamType::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceMediaStreamTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
