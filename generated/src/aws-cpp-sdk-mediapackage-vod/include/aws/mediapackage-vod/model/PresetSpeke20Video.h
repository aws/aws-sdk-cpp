/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class PresetSpeke20Video
  {
    NOT_SET,
    PRESET_VIDEO_1,
    PRESET_VIDEO_2,
    PRESET_VIDEO_3,
    PRESET_VIDEO_4,
    PRESET_VIDEO_5,
    PRESET_VIDEO_6,
    PRESET_VIDEO_7,
    PRESET_VIDEO_8,
    SHARED,
    UNENCRYPTED
  };

namespace PresetSpeke20VideoMapper
{
AWS_MEDIAPACKAGEVOD_API PresetSpeke20Video GetPresetSpeke20VideoForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForPresetSpeke20Video(PresetSpeke20Video value);
} // namespace PresetSpeke20VideoMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
