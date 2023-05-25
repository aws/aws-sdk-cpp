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
  enum class Vp9FramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Vp9FramerateControlMapper
{
AWS_MEDIACONVERT_API Vp9FramerateControl GetVp9FramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp9FramerateControl(Vp9FramerateControl value);
} // namespace Vp9FramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
