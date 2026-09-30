/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rekognition/model/FeedbackCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Rekognition {
namespace Model {
namespace FeedbackCodeMapper {

static const int FACE_NOT_VISIBLE_HASH = HashingUtils::HashString("FACE_NOT_VISIBLE");
static const int FACE_OBSTRUCTION_DETECTED_HASH = HashingUtils::HashString("FACE_OBSTRUCTION_DETECTED");
static const int LOW_VIDEO_QUALITY_DETECTED_HASH = HashingUtils::HashString("LOW_VIDEO_QUALITY_DETECTED");
static const int FACE_NOT_ALIGNED_HASH = HashingUtils::HashString("FACE_NOT_ALIGNED");
static const int EYES_CLOSED_DETECTED_HASH = HashingUtils::HashString("EYES_CLOSED_DETECTED");
static const int LOW_LIGHTING_DETECTED_HASH = HashingUtils::HashString("LOW_LIGHTING_DETECTED");
static const int HIGH_LIGHTING_DETECTED_HASH = HashingUtils::HashString("HIGH_LIGHTING_DETECTED");

FeedbackCode GetFeedbackCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FACE_NOT_VISIBLE_HASH) {
    return FeedbackCode::FACE_NOT_VISIBLE;
  } else if (hashCode == FACE_OBSTRUCTION_DETECTED_HASH) {
    return FeedbackCode::FACE_OBSTRUCTION_DETECTED;
  } else if (hashCode == LOW_VIDEO_QUALITY_DETECTED_HASH) {
    return FeedbackCode::LOW_VIDEO_QUALITY_DETECTED;
  } else if (hashCode == FACE_NOT_ALIGNED_HASH) {
    return FeedbackCode::FACE_NOT_ALIGNED;
  } else if (hashCode == EYES_CLOSED_DETECTED_HASH) {
    return FeedbackCode::EYES_CLOSED_DETECTED;
  } else if (hashCode == LOW_LIGHTING_DETECTED_HASH) {
    return FeedbackCode::LOW_LIGHTING_DETECTED;
  } else if (hashCode == HIGH_LIGHTING_DETECTED_HASH) {
    return FeedbackCode::HIGH_LIGHTING_DETECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeedbackCode>(hashCode);
  }

  return FeedbackCode::NOT_SET;
}

Aws::String GetNameForFeedbackCode(FeedbackCode enumValue) {
  switch (enumValue) {
    case FeedbackCode::NOT_SET:
      return {};
    case FeedbackCode::FACE_NOT_VISIBLE:
      return "FACE_NOT_VISIBLE";
    case FeedbackCode::FACE_OBSTRUCTION_DETECTED:
      return "FACE_OBSTRUCTION_DETECTED";
    case FeedbackCode::LOW_VIDEO_QUALITY_DETECTED:
      return "LOW_VIDEO_QUALITY_DETECTED";
    case FeedbackCode::FACE_NOT_ALIGNED:
      return "FACE_NOT_ALIGNED";
    case FeedbackCode::EYES_CLOSED_DETECTED:
      return "EYES_CLOSED_DETECTED";
    case FeedbackCode::LOW_LIGHTING_DETECTED:
      return "LOW_LIGHTING_DETECTED";
    case FeedbackCode::HIGH_LIGHTING_DETECTED:
      return "HIGH_LIGHTING_DETECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeedbackCodeMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
