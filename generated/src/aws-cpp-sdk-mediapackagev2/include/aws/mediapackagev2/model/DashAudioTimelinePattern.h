/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class DashAudioTimelinePattern { NOT_SET, NONE, PATTERNED };

namespace DashAudioTimelinePatternMapper {
AWS_MEDIAPACKAGEV2_API DashAudioTimelinePattern GetDashAudioTimelinePatternForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashAudioTimelinePattern(DashAudioTimelinePattern value);
}  // namespace DashAudioTimelinePatternMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
