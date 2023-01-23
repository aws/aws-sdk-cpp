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
  enum class Vp9RateControlMode
  {
    NOT_SET,
    VBR
  };

namespace Vp9RateControlModeMapper
{
AWS_MEDIACONVERT_API Vp9RateControlMode GetVp9RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp9RateControlMode(Vp9RateControlMode value);
} // namespace Vp9RateControlModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
