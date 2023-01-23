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
  enum class M2tsEbpAudioInterval
  {
    NOT_SET,
    VIDEO_AND_FIXED_INTERVALS,
    VIDEO_INTERVAL
  };

namespace M2tsEbpAudioIntervalMapper
{
AWS_MEDIACONVERT_API M2tsEbpAudioInterval GetM2tsEbpAudioIntervalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsEbpAudioInterval(M2tsEbpAudioInterval value);
} // namespace M2tsEbpAudioIntervalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
