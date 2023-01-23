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
  enum class Mpeg2ParControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Mpeg2ParControlMapper
{
AWS_MEDIACONVERT_API Mpeg2ParControl GetMpeg2ParControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2ParControl(Mpeg2ParControl value);
} // namespace Mpeg2ParControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
