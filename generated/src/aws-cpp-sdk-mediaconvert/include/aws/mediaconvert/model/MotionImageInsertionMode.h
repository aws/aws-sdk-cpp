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
  enum class MotionImageInsertionMode
  {
    NOT_SET,
    MOV,
    PNG
  };

namespace MotionImageInsertionModeMapper
{
AWS_MEDIACONVERT_API MotionImageInsertionMode GetMotionImageInsertionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMotionImageInsertionMode(MotionImageInsertionMode value);
} // namespace MotionImageInsertionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
