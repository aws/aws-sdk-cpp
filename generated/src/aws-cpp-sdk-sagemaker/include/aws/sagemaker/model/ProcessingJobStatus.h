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
  enum class ProcessingJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace ProcessingJobStatusMapper
{
AWS_SAGEMAKER_API ProcessingJobStatus GetProcessingJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingJobStatus(ProcessingJobStatus value);
} // namespace ProcessingJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
