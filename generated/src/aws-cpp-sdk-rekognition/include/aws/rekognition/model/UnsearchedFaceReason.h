/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class UnsearchedFaceReason
  {
    NOT_SET,
    FACE_NOT_LARGEST,
    EXCEEDS_MAX_FACES,
    EXTREME_POSE,
    LOW_BRIGHTNESS,
    LOW_SHARPNESS,
    LOW_CONFIDENCE,
    SMALL_BOUNDING_BOX,
    LOW_FACE_QUALITY
  };

namespace UnsearchedFaceReasonMapper
{
AWS_REKOGNITION_API UnsearchedFaceReason GetUnsearchedFaceReasonForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForUnsearchedFaceReason(UnsearchedFaceReason value);
} // namespace UnsearchedFaceReasonMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
