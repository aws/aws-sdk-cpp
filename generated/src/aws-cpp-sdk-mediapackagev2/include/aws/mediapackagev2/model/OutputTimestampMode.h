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
enum class OutputTimestampMode { NOT_SET, PASSTHROUGH, REBASED_TO_CHANNEL_START };

namespace OutputTimestampModeMapper {
AWS_MEDIAPACKAGEV2_API OutputTimestampMode GetOutputTimestampModeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForOutputTimestampMode(OutputTimestampMode value);
}  // namespace OutputTimestampModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
