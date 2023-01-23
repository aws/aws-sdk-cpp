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
  enum class VideoDescriptionScalingBehavior
  {
    NOT_SET,
    DEFAULT,
    STRETCH_TO_OUTPUT
  };

namespace VideoDescriptionScalingBehaviorMapper
{
AWS_MEDIALIVE_API VideoDescriptionScalingBehavior GetVideoDescriptionScalingBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForVideoDescriptionScalingBehavior(VideoDescriptionScalingBehavior value);
} // namespace VideoDescriptionScalingBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
