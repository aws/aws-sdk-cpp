/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class SmoothGroupTimestampOffsetMode { NOT_SET, USE_CONFIGURED_OFFSET, USE_EVENT_START_DATE };

namespace SmoothGroupTimestampOffsetModeMapper {
AWS_MEDIALIVE_API SmoothGroupTimestampOffsetMode GetSmoothGroupTimestampOffsetModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupTimestampOffsetMode(SmoothGroupTimestampOffsetMode value);
}  // namespace SmoothGroupTimestampOffsetModeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
