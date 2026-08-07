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
enum class StreamNameOutputMode { NOT_SET, INDEX, PASSTHROUGH_NAME };

namespace StreamNameOutputModeMapper {
AWS_MEDIAPACKAGEV2_API StreamNameOutputMode GetStreamNameOutputModeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForStreamNameOutputMode(StreamNameOutputMode value);
}  // namespace StreamNameOutputModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
