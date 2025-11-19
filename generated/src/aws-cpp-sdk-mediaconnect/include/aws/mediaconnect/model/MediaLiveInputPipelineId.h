/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class MediaLiveInputPipelineId { NOT_SET, PIPELINE_0, PIPELINE_1 };

namespace MediaLiveInputPipelineIdMapper {
AWS_MEDIACONNECT_API MediaLiveInputPipelineId GetMediaLiveInputPipelineIdForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMediaLiveInputPipelineId(MediaLiveInputPipelineId value);
}  // namespace MediaLiveInputPipelineIdMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
