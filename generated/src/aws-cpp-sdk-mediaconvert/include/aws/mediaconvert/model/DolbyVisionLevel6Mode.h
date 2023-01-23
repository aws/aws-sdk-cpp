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
  enum class DolbyVisionLevel6Mode
  {
    NOT_SET,
    PASSTHROUGH,
    RECALCULATE,
    SPECIFY
  };

namespace DolbyVisionLevel6ModeMapper
{
AWS_MEDIACONVERT_API DolbyVisionLevel6Mode GetDolbyVisionLevel6ModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDolbyVisionLevel6Mode(DolbyVisionLevel6Mode value);
} // namespace DolbyVisionLevel6ModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
