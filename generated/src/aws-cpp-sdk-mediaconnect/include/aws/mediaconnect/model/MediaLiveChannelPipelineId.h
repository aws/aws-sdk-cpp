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
enum class MediaLiveChannelPipelineId { NOT_SET, PIPELINE_0, PIPELINE_1 };

namespace MediaLiveChannelPipelineIdMapper {
AWS_MEDIACONNECT_API MediaLiveChannelPipelineId GetMediaLiveChannelPipelineIdForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMediaLiveChannelPipelineId(MediaLiveChannelPipelineId value);
}  // namespace MediaLiveChannelPipelineIdMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
