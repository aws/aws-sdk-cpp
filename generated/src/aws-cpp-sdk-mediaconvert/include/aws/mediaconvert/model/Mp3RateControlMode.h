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
  enum class Mp3RateControlMode
  {
    NOT_SET,
    CBR,
    VBR
  };

namespace Mp3RateControlModeMapper
{
AWS_MEDIACONVERT_API Mp3RateControlMode GetMp3RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMp3RateControlMode(Mp3RateControlMode value);
} // namespace Mp3RateControlModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
