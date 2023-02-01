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
  enum class AudioDefaultSelection
  {
    NOT_SET,
    DEFAULT,
    NOT_DEFAULT
  };

namespace AudioDefaultSelectionMapper
{
AWS_MEDIACONVERT_API AudioDefaultSelection GetAudioDefaultSelectionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioDefaultSelection(AudioDefaultSelection value);
} // namespace AudioDefaultSelectionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
