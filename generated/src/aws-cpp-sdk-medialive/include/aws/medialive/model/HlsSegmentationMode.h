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
  enum class HlsSegmentationMode
  {
    NOT_SET,
    USE_INPUT_SEGMENTATION,
    USE_SEGMENT_DURATION
  };

namespace HlsSegmentationModeMapper
{
AWS_MEDIALIVE_API HlsSegmentationMode GetHlsSegmentationModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsSegmentationMode(HlsSegmentationMode value);
} // namespace HlsSegmentationModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
