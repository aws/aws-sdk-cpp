/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class JobStatus { NOT_SET, InProgress, Completed, Failed, Stopping, Stopped, Deleting, DeleteFailed };

namespace JobStatusMapper {
AWS_SAGEMAKER_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
