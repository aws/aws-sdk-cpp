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
  enum class Vp9ParControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Vp9ParControlMapper
{
AWS_MEDIACONVERT_API Vp9ParControl GetVp9ParControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp9ParControl(Vp9ParControl value);
} // namespace Vp9ParControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
