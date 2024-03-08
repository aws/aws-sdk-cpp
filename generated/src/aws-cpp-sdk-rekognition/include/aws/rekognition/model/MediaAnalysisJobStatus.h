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
  enum class MediaAnalysisJobStatus
  {
    NOT_SET,
    CREATED,
    QUEUED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace MediaAnalysisJobStatusMapper
{
AWS_REKOGNITION_API MediaAnalysisJobStatus GetMediaAnalysisJobStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForMediaAnalysisJobStatus(MediaAnalysisJobStatus value);
} // namespace MediaAnalysisJobStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
