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
  enum class VideoSelectorColorSpaceUsage
  {
    NOT_SET,
    FALLBACK,
    FORCE
  };

namespace VideoSelectorColorSpaceUsageMapper
{
AWS_MEDIALIVE_API VideoSelectorColorSpaceUsage GetVideoSelectorColorSpaceUsageForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForVideoSelectorColorSpaceUsage(VideoSelectorColorSpaceUsage value);
} // namespace VideoSelectorColorSpaceUsageMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
