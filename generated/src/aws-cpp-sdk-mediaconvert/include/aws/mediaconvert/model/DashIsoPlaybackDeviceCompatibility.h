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
  enum class DashIsoPlaybackDeviceCompatibility
  {
    NOT_SET,
    CENC_V1,
    UNENCRYPTED_SEI
  };

namespace DashIsoPlaybackDeviceCompatibilityMapper
{
AWS_MEDIACONVERT_API DashIsoPlaybackDeviceCompatibility GetDashIsoPlaybackDeviceCompatibilityForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoPlaybackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility value);
} // namespace DashIsoPlaybackDeviceCompatibilityMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
