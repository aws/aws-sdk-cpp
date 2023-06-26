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
  enum class MxfXavcDurationMode
  {
    NOT_SET,
    ALLOW_ANY_DURATION,
    DROP_FRAMES_FOR_COMPLIANCE
  };

namespace MxfXavcDurationModeMapper
{
AWS_MEDIACONVERT_API MxfXavcDurationMode GetMxfXavcDurationModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMxfXavcDurationMode(MxfXavcDurationMode value);
} // namespace MxfXavcDurationModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
