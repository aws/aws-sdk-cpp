/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoGroupAudioChannelConfigSchemeIdUri
  {
    NOT_SET,
    MPEG_CHANNEL_CONFIGURATION,
    DOLBY_CHANNEL_CONFIGURATION
  };

namespace DashIsoGroupAudioChannelConfigSchemeIdUriMapper
{
AWS_MEDIACONVERT_API DashIsoGroupAudioChannelConfigSchemeIdUri GetDashIsoGroupAudioChannelConfigSchemeIdUriForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoGroupAudioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri value);
} // namespace DashIsoGroupAudioChannelConfigSchemeIdUriMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
