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
  enum class InputSampleRange
  {
    NOT_SET,
    FOLLOW,
    FULL_RANGE,
    LIMITED_RANGE
  };

namespace InputSampleRangeMapper
{
AWS_MEDIACONVERT_API InputSampleRange GetInputSampleRangeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputSampleRange(InputSampleRange value);
} // namespace InputSampleRangeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
