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
  enum class PresetSpeke20Audio
  {
    NOT_SET,
    PRESET_AUDIO_1,
    PRESET_AUDIO_2,
    PRESET_AUDIO_3,
    SHARED,
    UNENCRYPTED
  };

namespace PresetSpeke20AudioMapper
{
AWS_MEDIAPACKAGEVOD_API PresetSpeke20Audio GetPresetSpeke20AudioForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForPresetSpeke20Audio(PresetSpeke20Audio value);
} // namespace PresetSpeke20AudioMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
