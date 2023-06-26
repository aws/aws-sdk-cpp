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
  enum class HlsSegmentControl
  {
    NOT_SET,
    SINGLE_FILE,
    SEGMENTED_FILES
  };

namespace HlsSegmentControlMapper
{
AWS_MEDIACONVERT_API HlsSegmentControl GetHlsSegmentControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsSegmentControl(HlsSegmentControl value);
} // namespace HlsSegmentControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
