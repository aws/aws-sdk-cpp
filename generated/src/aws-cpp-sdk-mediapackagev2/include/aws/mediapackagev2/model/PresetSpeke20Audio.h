/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
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
AWS_MEDIAPACKAGEV2_API PresetSpeke20Audio GetPresetSpeke20AudioForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForPresetSpeke20Audio(PresetSpeke20Audio value);
} // namespace PresetSpeke20AudioMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
