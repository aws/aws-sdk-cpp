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
  enum class AudioDurationCorrection
  {
    NOT_SET,
    DISABLED,
    AUTO,
    TRACK,
    FRAME
  };

namespace AudioDurationCorrectionMapper
{
AWS_MEDIACONVERT_API AudioDurationCorrection GetAudioDurationCorrectionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioDurationCorrection(AudioDurationCorrection value);
} // namespace AudioDurationCorrectionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
