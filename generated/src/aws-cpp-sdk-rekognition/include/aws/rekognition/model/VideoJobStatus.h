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
  enum class VideoJobStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace VideoJobStatusMapper
{
AWS_REKOGNITION_API VideoJobStatus GetVideoJobStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForVideoJobStatus(VideoJobStatus value);
} // namespace VideoJobStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
