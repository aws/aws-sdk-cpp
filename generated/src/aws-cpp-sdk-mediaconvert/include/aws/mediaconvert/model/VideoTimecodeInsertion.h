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
  enum class VideoTimecodeInsertion
  {
    NOT_SET,
    DISABLED,
    PIC_TIMING_SEI
  };

namespace VideoTimecodeInsertionMapper
{
AWS_MEDIACONVERT_API VideoTimecodeInsertion GetVideoTimecodeInsertionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVideoTimecodeInsertion(VideoTimecodeInsertion value);
} // namespace VideoTimecodeInsertionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
