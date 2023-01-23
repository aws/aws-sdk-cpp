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
  enum class Mpeg2SceneChangeDetect
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Mpeg2SceneChangeDetectMapper
{
AWS_MEDIACONVERT_API Mpeg2SceneChangeDetect GetMpeg2SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2SceneChangeDetect(Mpeg2SceneChangeDetect value);
} // namespace Mpeg2SceneChangeDetectMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
