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
  enum class Vp8FramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Vp8FramerateControlMapper
{
AWS_MEDIACONVERT_API Vp8FramerateControl GetVp8FramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp8FramerateControl(Vp8FramerateControl value);
} // namespace Vp8FramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
