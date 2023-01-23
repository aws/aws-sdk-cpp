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
  enum class H264SceneChangeDetect
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    TRANSITION_DETECTION
  };

namespace H264SceneChangeDetectMapper
{
AWS_MEDIACONVERT_API H264SceneChangeDetect GetH264SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264SceneChangeDetect(H264SceneChangeDetect value);
} // namespace H264SceneChangeDetectMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
