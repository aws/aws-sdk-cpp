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
  enum class MediaAnalysisJobFailureCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    INVALID_S3_OBJECT,
    INVALID_MANIFEST,
    INVALID_OUTPUT_CONFIG,
    INVALID_KMS_KEY,
    ACCESS_DENIED,
    RESOURCE_NOT_FOUND,
    RESOURCE_NOT_READY,
    THROTTLED
  };

namespace MediaAnalysisJobFailureCodeMapper
{
AWS_REKOGNITION_API MediaAnalysisJobFailureCode GetMediaAnalysisJobFailureCodeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForMediaAnalysisJobFailureCode(MediaAnalysisJobFailureCode value);
} // namespace MediaAnalysisJobFailureCodeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
