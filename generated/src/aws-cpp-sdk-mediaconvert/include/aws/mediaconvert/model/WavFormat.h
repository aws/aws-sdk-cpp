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
  enum class WavFormat
  {
    NOT_SET,
    RIFF,
    RF64
  };

namespace WavFormatMapper
{
AWS_MEDIACONVERT_API WavFormat GetWavFormatForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForWavFormat(WavFormat value);
} // namespace WavFormatMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
