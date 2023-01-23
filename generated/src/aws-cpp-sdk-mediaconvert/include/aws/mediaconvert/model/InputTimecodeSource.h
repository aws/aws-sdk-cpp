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
  enum class InputTimecodeSource
  {
    NOT_SET,
    EMBEDDED,
    ZEROBASED,
    SPECIFIEDSTART
  };

namespace InputTimecodeSourceMapper
{
AWS_MEDIACONVERT_API InputTimecodeSource GetInputTimecodeSourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputTimecodeSource(InputTimecodeSource value);
} // namespace InputTimecodeSourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
