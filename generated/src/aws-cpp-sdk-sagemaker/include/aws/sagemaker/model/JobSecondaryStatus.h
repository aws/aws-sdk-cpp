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
enum class JobSecondaryStatus {
  NOT_SET,
  Starting,
  Downloading,
  Training,
  Uploading,
  Stopping,
  Stopped,
  MaxRuntimeExceeded,
  Interrupted,
  Failed,
  Completed,
  Restarting,
  Pending,
  Evaluating,
  Deleting,
  DeleteFailed
};

namespace JobSecondaryStatusMapper {
AWS_SAGEMAKER_API JobSecondaryStatus GetJobSecondaryStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForJobSecondaryStatus(JobSecondaryStatus value);
}  // namespace JobSecondaryStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
