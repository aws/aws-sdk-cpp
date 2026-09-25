/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws {
namespace Rekognition {
namespace Model {
enum class FeedbackCode {
  NOT_SET,
  FACE_NOT_VISIBLE,
  FACE_OBSTRUCTION_DETECTED,
  LOW_VIDEO_QUALITY_DETECTED,
  FACE_NOT_ALIGNED,
  EYES_CLOSED_DETECTED,
  LOW_LIGHTING_DETECTED,
  HIGH_LIGHTING_DETECTED
};

namespace FeedbackCodeMapper {
AWS_REKOGNITION_API FeedbackCode GetFeedbackCodeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForFeedbackCode(FeedbackCode value);
}  // namespace FeedbackCodeMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
