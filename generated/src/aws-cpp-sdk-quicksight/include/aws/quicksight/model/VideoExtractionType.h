/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class VideoExtractionType { NOT_SET, AUDIO_TRANSCRIPTION_ONLY, VISUAL_CONTENT_AND_AUDIO_TRANSCRIPTION };

namespace VideoExtractionTypeMapper {
AWS_QUICKSIGHT_API VideoExtractionType GetVideoExtractionTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVideoExtractionType(VideoExtractionType value);
}  // namespace VideoExtractionTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
