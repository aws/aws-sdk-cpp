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
  enum class ScalingBehavior
  {
    NOT_SET,
    DEFAULT,
    STRETCH_TO_OUTPUT
  };

namespace ScalingBehaviorMapper
{
AWS_MEDIACONVERT_API ScalingBehavior GetScalingBehaviorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForScalingBehavior(ScalingBehavior value);
} // namespace ScalingBehaviorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
