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
enum class AudioExtractionStatus { NOT_SET, ENABLED, DISABLED };

namespace AudioExtractionStatusMapper {
AWS_QUICKSIGHT_API AudioExtractionStatus GetAudioExtractionStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAudioExtractionStatus(AudioExtractionStatus value);
}  // namespace AudioExtractionStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
