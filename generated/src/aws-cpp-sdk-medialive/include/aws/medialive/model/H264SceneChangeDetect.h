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
  enum class H264SceneChangeDetect
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264SceneChangeDetectMapper
{
AWS_MEDIALIVE_API H264SceneChangeDetect GetH264SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264SceneChangeDetect(H264SceneChangeDetect value);
} // namespace H264SceneChangeDetectMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
