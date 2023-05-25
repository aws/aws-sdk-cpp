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
  enum class Av1FramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Av1FramerateControlMapper
{
AWS_MEDIACONVERT_API Av1FramerateControl GetAv1FramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1FramerateControl(Av1FramerateControl value);
} // namespace Av1FramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
