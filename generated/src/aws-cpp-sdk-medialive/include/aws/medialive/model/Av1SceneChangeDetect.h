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
  enum class Av1SceneChangeDetect
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Av1SceneChangeDetectMapper
{
AWS_MEDIALIVE_API Av1SceneChangeDetect GetAv1SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1SceneChangeDetect(Av1SceneChangeDetect value);
} // namespace Av1SceneChangeDetectMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
