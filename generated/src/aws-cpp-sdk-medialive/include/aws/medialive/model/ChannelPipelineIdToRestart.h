/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class ChannelPipelineIdToRestart
  {
    NOT_SET,
    PIPELINE_0,
    PIPELINE_1
  };

namespace ChannelPipelineIdToRestartMapper
{
AWS_MEDIALIVE_API ChannelPipelineIdToRestart GetChannelPipelineIdToRestartForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForChannelPipelineIdToRestart(ChannelPipelineIdToRestart value);
} // namespace ChannelPipelineIdToRestartMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
