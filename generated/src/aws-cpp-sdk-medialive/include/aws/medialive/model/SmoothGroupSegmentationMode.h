/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class SmoothGroupSegmentationMode
  {
    NOT_SET,
    USE_INPUT_SEGMENTATION,
    USE_SEGMENT_DURATION
  };

namespace SmoothGroupSegmentationModeMapper
{
AWS_MEDIALIVE_API SmoothGroupSegmentationMode GetSmoothGroupSegmentationModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupSegmentationMode(SmoothGroupSegmentationMode value);
} // namespace SmoothGroupSegmentationModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
