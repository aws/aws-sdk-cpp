/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ProcessingS3UploadMode
  {
    NOT_SET,
    Continuous,
    EndOfJob
  };

namespace ProcessingS3UploadModeMapper
{
AWS_SAGEMAKER_API ProcessingS3UploadMode GetProcessingS3UploadModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingS3UploadMode(ProcessingS3UploadMode value);
} // namespace ProcessingS3UploadModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
