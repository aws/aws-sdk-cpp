/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class VideoColorRange
  {
    NOT_SET,
    FULL,
    LIMITED
  };

namespace VideoColorRangeMapper
{
AWS_REKOGNITION_API VideoColorRange GetVideoColorRangeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForVideoColorRange(VideoColorRange value);
} // namespace VideoColorRangeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
