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
enum class VideoExtractionStatus { NOT_SET, ENABLED, DISABLED };

namespace VideoExtractionStatusMapper {
AWS_QUICKSIGHT_API VideoExtractionStatus GetVideoExtractionStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVideoExtractionStatus(VideoExtractionStatus value);
}  // namespace VideoExtractionStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
