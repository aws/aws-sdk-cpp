/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/VideoExtractionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace VideoExtractionTypeMapper {

static const int AUDIO_TRANSCRIPTION_ONLY_HASH = HashingUtils::HashString("AUDIO_TRANSCRIPTION_ONLY");
static const int VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION_HASH = HashingUtils::HashString("VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION");

VideoExtractionType GetVideoExtractionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUDIO_TRANSCRIPTION_ONLY_HASH) {
    return VideoExtractionType::AUDIO_TRANSCRIPTION_ONLY;
  } else if (hashCode == VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION_HASH) {
    return VideoExtractionType::VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VideoExtractionType>(hashCode);
  }

  return VideoExtractionType::NOT_SET;
}

Aws::String GetNameForVideoExtractionType(VideoExtractionType enumValue) {
  switch (enumValue) {
    case VideoExtractionType::NOT_SET:
      return {};
    case VideoExtractionType::AUDIO_TRANSCRIPTION_ONLY:
      return "AUDIO_TRANSCRIPTION_ONLY";
    case VideoExtractionType::VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION:
      return "VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VideoExtractionTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
