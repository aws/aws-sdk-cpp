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
enum class SecondaryStatus {
  NOT_SET,
  Starting,
  LaunchingMLInstances,
  PreparingTrainingStack,
  Downloading,
  DownloadingTrainingImage,
  Training,
  Uploading,
  Stopping,
  Stopped,
  MaxRuntimeExceeded,
  Completed,
  Failed,
  Interrupted,
  MaxWaitTimeExceeded,
  Updating,
  Restarting,
  Pending
};

namespace SecondaryStatusMapper {
AWS_SAGEMAKER_API SecondaryStatus GetSecondaryStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSecondaryStatus(SecondaryStatus value);
}  // namespace SecondaryStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
